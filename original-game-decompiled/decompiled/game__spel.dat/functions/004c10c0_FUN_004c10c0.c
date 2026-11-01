
/* ==== FUN_004c10c0 @ 004c10c0 ==== 
 * signature: undefined4 __fastcall FUN_004c10c0(int param_1)
 * body: 004c10c0-004c10dc;004c10e0-004c10fa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c10dd-004c10df
 */

undefined4 __fastcall FUN_004c10c0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  bVar1 = FUN_004c1030(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return *(undefined4 *)(param_1 + 0xb0);
  }
  return *(undefined4 *)(param_1 + 0x17c);
}


