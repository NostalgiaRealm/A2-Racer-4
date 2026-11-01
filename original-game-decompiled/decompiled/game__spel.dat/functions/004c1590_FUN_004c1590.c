
/* ==== FUN_004c1590 @ 004c1590 ==== 
 * signature: uint __fastcall FUN_004c1590(int param_1)
 * body: 004c1590-004c15af;004c15b3-004c15e4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c15b0-004c15b2
 */

uint __fastcall FUN_004c1590(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 8) != 0) {
      return *(uint *)(param_1 + 0xec) & 2;
    }
  }
  else if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return *(uint *)(param_1 + 0x20) & 2;
  }
  return 0xffffffff;
}


