
/* ==== FUN_004c1250 @ 004c1250 ==== 
 * signature: uint __fastcall FUN_004c1250(int param_1)
 * body: 004c1250-004c126f;004c1273-004c12ae
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c1270-004c1272
 */

uint __fastcall FUN_004c1250(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
      return (uint)(*(int *)(param_1 + 0xd4) == 2);
    }
  }
  else if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return (uint)(*(int *)(param_1 + 8) == 2);
  }
  return 0xffffffff;
}


