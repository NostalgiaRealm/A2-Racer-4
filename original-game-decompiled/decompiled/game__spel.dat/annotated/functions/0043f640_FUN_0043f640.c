
/* ==== FUN_0043f640 @ 0043f640 ==== 
 * signature: int __cdecl FUN_0043f640(int param_1)
 * body: 0043f640-0043f661;0043f665-0043f686
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043f662-0043f664
 */

int __cdecl FUN_0043f640(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == DAT_006fbaa4) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Trying_to_get_position_o_0059c044);
  }
  iVar1 = 0;
  if (0 < DAT_005d2ab0) {
    piVar2 = &DAT_005973c8;
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x16;
    } while (iVar1 < DAT_005d2ab0);
  }
  return -1;
}


