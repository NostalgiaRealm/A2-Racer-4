
/* ==== FUN_004c9f30 @ 004c9f30 ==== 
 * signature: undefined4 __cdecl FUN_004c9f30(undefined4 param_1, int param_2, int param_3)
 * body: 004c9f30-004c9f59;004c9f5d-004c9f7b;004c9f7f-004c9fa5;004c9fa9-004c9fdd;004c9fe1-004c9fe3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c9f5a-004c9f5c 004c9f7c-004c9f7e 004c9fa6-004c9fa8 004c9fde-004c9fe0
 */

undefined4 __cdecl FUN_004c9f30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____palette_was_not_initial_005b5b78);
    }
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____illegal_palette_base_en_005b5c04);
    }
    if ((param_2 + param_3 < 0) || (0x100 < param_2 + param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____trying_to_reference_an_i_005b5bc4);
    }
    iVar1 = (**(code **)(*DAT_007409ec + 0x10))(DAT_007409ec,0,param_2,param_3,param_1);
    if (iVar1 != 0) {
      FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____could_set_entries___s__005b5ba0);
    }
  }
  return 0;
}


