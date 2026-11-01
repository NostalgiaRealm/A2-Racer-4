
/* ==== FUN_004a7190 @ 004a7190 ==== 
 * signature: undefined __cdecl FUN_004a7190(undefined4 param_1)
 * body: 004a7190-004a71ba;004a71c1-004a71d7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a71bb-004a71c0
 */

void __cdecl FUN_004a7190(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_007128c8;
  do {
    if (*piVar1 == 0) {
      (&DAT_007128c8)[iVar2 * 2] = 1;
      (&DAT_007128cc)[iVar2 * 2] = param_1;
      return;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x714e48);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_No_more_free_entry_s_005afa24);
}


