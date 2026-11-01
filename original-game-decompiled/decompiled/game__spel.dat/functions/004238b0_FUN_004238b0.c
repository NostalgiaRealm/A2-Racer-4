
/* ==== FUN_004238b0 @ 004238b0 ==== 
 * signature: int __stdcall FUN_004238b0(void)
 * body: 004238b0-004238c9;004238cd-004238e8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004238ca-004238cc
 */

int FUN_004238b0(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_005d3440 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Array_of_active_cops_not_005958a8);
  }
  iVar1 = 0;
  piVar2 = &DAT_005d33ec;
  do {
    if (*piVar2 == -1) {
      return iVar1;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x5d343c);
  return -1;
}


