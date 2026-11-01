
/* ==== FUN_004c12b0 @ 004c12b0 ==== 
 * signature: undefined4 __fastcall FUN_004c12b0(int param_1)
 * body: 004c12b0-004c12cf;004c12d3-004c1305
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c12d0-004c12d2
 */

undefined4 __fastcall FUN_004c12b0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(uint *)(param_1 + 0xd0) & 0x100) != 0) {
      return *(undefined4 *)(param_1 + 0x16c);
    }
  }
  else if ((*(uint *)(param_1 + 4) & 0x100) != 0) {
    return *(undefined4 *)(param_1 + 0xa0);
  }
  return 0xffffffff;
}


