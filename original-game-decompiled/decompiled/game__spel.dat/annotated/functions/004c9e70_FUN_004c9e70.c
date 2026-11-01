
/* ==== FUN_004c9e70 @ 004c9e70 ==== 
 * signature: undefined4 __cdecl FUN_004c9e70(undefined4 param_1, int param_2, int param_3)
 * body: 004c9e70-004c9e99;004c9e9d-004c9ebb;004c9ebf-004c9ee5;004c9ee9-004c9f1d;004c9f21-004c9f23
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c9e9a-004c9e9c 004c9ebc-004c9ebe 004c9ee6-004c9ee8 004c9f1e-004c9f20
 */

undefined4 __cdecl FUN_004c9e70(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_007409f8 == 0) {
    if (DAT_007409f4 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____palette_was_not_initial_005b5b78);
    }
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____illegal_palette_base_en_005b5c04);
    }
    if ((param_2 + param_3 < 0) || (0x100 < param_2 + param_3)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____trying_to_reference_an_i_005b5bc4);
    }
    iVar1 = (**(code **)(*DAT_007409ec + 0x18))(DAT_007409ec,0,param_2,param_3,param_1);
    if (iVar1 != 0) {
      hardware(iVar1);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____could_set_entries___s__005b5ba0);
    }
  }
  return 0;
}


