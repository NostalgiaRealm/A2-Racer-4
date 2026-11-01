
/* ==== FUN_00404820 @ 00404820 ==== 
 * signature: bool __cdecl FUN_00404820(int param_1)
 * body: 00404820-00404842;00404846-00404866
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00404843-00404845
 */

bool __cdecl FUN_00404820(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar1 = FUN_00429360(*(int *)(&DAT_005cea34 + param_1 * 0x294));
    return (bool)('\x01' - (iVar1 != 0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_index___d__in_FS_0058f2a8);
}


