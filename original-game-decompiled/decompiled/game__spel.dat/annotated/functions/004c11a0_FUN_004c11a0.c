
/* ==== FUN_004c11a0 @ 004c11a0 ==== 
 * signature: uint __fastcall FUN_004c11a0(int param_1)
 * body: 004c11a0-004c11bc;004c11c0-004c11f5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c11bd-004c11bf
 */

uint __fastcall FUN_004c11a0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 2) != 0) {
      return *(uint *)(param_1 + 0xd8) & 0x200;
    }
  }
  else if ((*(byte *)(param_1 + 4) & 2) != 0) {
    return *(uint *)(param_1 + 0xc) & 0x200;
  }
  return 0xffffffff;
}


