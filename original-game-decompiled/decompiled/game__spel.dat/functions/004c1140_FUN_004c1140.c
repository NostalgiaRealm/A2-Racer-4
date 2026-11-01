
/* ==== FUN_004c1140 @ 004c1140 ==== 
 * signature: uint __fastcall FUN_004c1140(int param_1)
 * body: 004c1140-004c115c;004c1160-004c1195
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c115d-004c115f
 */

uint __fastcall FUN_004c1140(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 2) != 0) {
      return *(uint *)(param_1 + 0xd8) & 0x100;
    }
  }
  else if ((*(byte *)(param_1 + 4) & 2) != 0) {
    return *(uint *)(param_1 + 0xc) & 0x100;
  }
  return 0xffffffff;
}


