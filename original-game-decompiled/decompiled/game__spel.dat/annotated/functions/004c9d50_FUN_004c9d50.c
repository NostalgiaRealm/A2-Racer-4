
/* ==== FUN_004c9d50 @ 004c9d50 ==== 
 * signature: undefined __cdecl FUN_004c9d50(int param_1)
 * body: 004c9d50-004c9d76;004c9d7a-004c9d9d;004c9da2-004c9de1;004c9de6-004c9e21;004c9e26-004c9e61;004c9e65-004c9e65
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c9d77-004c9d79 004c9d9e-004c9da1 004c9de2-004c9de5 004c9e22-004c9e25 004c9e62-004c9e64
 */

void __cdecl FUN_004c9d50(int param_1)

{
  int iVar1;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____palette_was_not_initial_005b5b78);
    }
    if (param_1 == 0) {
      FUN_004c4a60(DAT_007408ac);
      iVar1 = (**(code **)(*DAT_007408ac + 0x7c))(DAT_007408ac,DAT_007409ec);
      if (iVar1 != 0) {
        hardware(iVar1);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____could_not_set_the_palet_005b5b28);
      }
    }
    else if (param_1 == 1) {
      FUN_004c4a60(DAT_007408b0);
      iVar1 = (**(code **)(*DAT_007408b0 + 0x7c))(DAT_007408b0,DAT_007409ec);
      if (iVar1 != 0) {
        hardware(iVar1);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____could_not_set_the_palet_005b5b28);
      }
    }
    else {
      if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____unknown_focus_defined_005b5b54);
      }
      FUN_004c4a60(DAT_00740890);
      iVar1 = (**(code **)(*DAT_00740890 + 0x7c))(DAT_00740890,DAT_007409ec);
      if (iVar1 != 0) {
        hardware(iVar1);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____could_not_set_the_palet_005b5b28);
      }
    }
  }
  return;
}


