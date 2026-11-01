
/* ==== FUN_004c14d0 @ 004c14d0 ==== 
 * signature: uint __fastcall FUN_004c14d0(int param_1)
 * body: 004c14d0-004c14ef;004c14f3-004c1524
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c14f0-004c14f2
 */

uint __fastcall FUN_004c14d0(int param_1)

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
      return *(uint *)(param_1 + 0xec) & 8;
    }
  }
  else if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return *(uint *)(param_1 + 0x20) & 8;
  }
  return 0xffffffff;
}


