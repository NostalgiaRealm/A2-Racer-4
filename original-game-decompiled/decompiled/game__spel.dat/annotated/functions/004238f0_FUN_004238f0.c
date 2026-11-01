
/* ==== FUN_004238f0 @ 004238f0 ==== 
 * signature: int __cdecl FUN_004238f0(int param_1)
 * body: 004238f0-0042390c;00423910-0042392e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0042390d-0042390f
 */

int __cdecl FUN_004238f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_005d3440 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Array_of_active_cops_not_005958fc);
  }
  iVar1 = 0;
  piVar2 = &DAT_005d33ec;
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x5d343c);
  return -1;
}


