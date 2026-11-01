
/* ==== FUN_004c1040 @ 004c1040 ==== 
 * signature: undefined4 __fastcall FUN_004c1040(int param_1)
 * body: 004c1040-004c105c;004c1060-004c107a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c105d-004c105f
 */

undefined4 __fastcall FUN_004c1040(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return *(undefined4 *)(param_1 + 0xac);
  }
  return *(undefined4 *)(param_1 + 0x178);
}


