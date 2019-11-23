from idaapi import *
from idautils import *
from idc import *

##########################################################
# This class implements a fifo queue
class fqueue(list):
    def __init__(self, n):
        self.n = n

    def push(self, a):
        self.append(a)
        if len(self) > self.n:
            self.pop(0)

##########################################################

gpRegList = ['eax', 'ebx', 'ecx', 'edx']
ioccList = []
callerList = []
pushQueue = fqueue(2)

dioc_ea = get_name_ea_simple("DeviceIoControl") # EA

print "DeviceIoControl found at 0x%08x" % dioc_ea

for caller in XrefsTo(dioc_ea, True):
    # This is the address (within a function)
    # where the reference was made
    caller_ea = caller.frm

    if caller_ea not in callerList:
        # IDA Pro shifts duplicates, get rid of them
        callerList.append(caller_ea)
        print "xref @ 0x%08x (%s)" % (caller_ea, get_func_name(caller_ea))
    else:
        continue

    # The dwIoControlCode must be the second 
    # PUSH xxx before the CALL instruction
    # So we need to keep track of the PUSH instructions
    for ins in FuncItems(caller_ea):
        disasm = GetDisasm(ins)
        if "push" in disasm:
            # Save the PUSH instruction's operand
            pushQueue.push(print_operand(ins, 0))
        elif ins == caller_ea:
            # At this moment we hit the corresponding CALL instruction
            # First item in Queue is second "oldest" push
            iocc = pushQueue[0]

            if iocc in gpRegList:
                print "NOTE: IoControlCode was %s at 0x%08x. Check manually" % (iocc, caller_ea)
            else:
                if pushQueue[0] not in ioccList:
                    ioccList.append(pushQueue[0])
        else:
            pass

# Print all the gathered IoControlCodes

print "%d IoControlCodes found!" % len(ioccList)

for io in ioccList:
    print "[*]", io