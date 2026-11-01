
/* ==== FUN_004cca00 @ 004cca00 ==== 
 * signature: int __cdecl FUN_004cca00(int param_1)
 * body: 004cca00-004cca31;004cca35-004cca70
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cca32-004cca34
 */

int __cdecl FUN_004cca00(int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    DAT_00740de4 = 0;
    return 1;
  }
  iVar1 = DAT_00740de4;
  if (DAT_00740dd4 != 0) {
    while( true ) {
      if (iVar1 == DAT_00740d84) {
        DAT_00740de4 = 0;
        return -1;
      }
      if (*(int *)(DAT_00740d80 + 4 + iVar1 * 8) == 3) break;
      iVar1 = iVar1 + 1;
    }
    DAT_00740de4 = iVar1 + 1;
    return iVar1 + 0x41;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_s__d____error_attempting_to_find_005b60c4);
}


