
/* ==== FUN_004c1530 @ 004c1530 ==== 
 * signature: uint __fastcall FUN_004c1530(int param_1)
 * body: 004c1530-004c154f;004c1553-004c1584
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c1550-004c1552
 */

uint __fastcall FUN_004c1530(int param_1)

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
      return *(uint *)(param_1 + 0xec) & 1;
    }
  }
  else if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return *(uint *)(param_1 + 0x20) & 1;
  }
  return 0xffffffff;
}


