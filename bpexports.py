# 
#   This script will set a breakpoint on every export in a binary
#   Alexander Pick - alx@pwn.su - 22.02.2020
#
import idaapi
import idautils

exports = list(idautils.Entries())

for exp_i, exp_ord, exp_ea, exp_name in exports:
	add_bpt(exp_ea, 0, BPT_SOFT)
	enable_bpt(exp_ea, True)

print("All Exports breakpointed!")