
/* ==== FUN_004c1100 @ 004c1100 ==== 
 * signature: undefined4 __fastcall FUN_004c1100(int param_1)
 * body: 004c1100-004c111c;004c1120-004c113a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c111d-004c111f
 */

undefined4 __fastcall FUN_004c1100(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return *(undefined4 *)(param_1 + 0xb8);
  }
  return *(undefined4 *)(param_1 + 0x184);
}


