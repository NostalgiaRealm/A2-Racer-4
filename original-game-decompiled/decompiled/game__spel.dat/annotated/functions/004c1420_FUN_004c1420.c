
/* ==== FUN_004c1420 @ 004c1420 ==== 
 * signature: undefined4 __fastcall FUN_004c1420(int param_1)
 * body: 004c1420-004c143f;004c1443-004c146e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c1440-004c1442
 */

undefined4 __fastcall FUN_004c1420(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 8) != 0) {
      return *(undefined4 *)(param_1 + 0xf4);
    }
  }
  else if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  return 0xffffffff;
}


