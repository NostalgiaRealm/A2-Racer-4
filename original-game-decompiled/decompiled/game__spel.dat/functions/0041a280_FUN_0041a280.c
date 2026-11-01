
/* ==== FUN_0041a280 @ 0041a280 ==== 
 * signature: undefined4 __cdecl FUN_0041a280(int param_1)
 * body: 0041a280-0041a2a7;0041a2b1-0041a2ff
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041a2a8-0041a2b0
 */

undefined4 __cdecl FUN_0041a280(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_1 < 0) || (DAT_005d2ab0 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s___s___d_Illegal_position_given___00593e30);
  }
  if (DAT_006fbaa4 == param_1) {
    return DAT_006fba58;
  }
  iVar2 = 0;
  if (DAT_005973c8 != param_1) {
    puVar3 = &DAT_005973c8;
    do {
      if (DAT_005d2ab0 <= iVar2) break;
      piVar1 = puVar3 + 0x16;
      puVar3 = puVar3 + 0x16;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != param_1);
  }
  if (iVar2 == DAT_005d2ab0) {
    return DAT_006fba58;
  }
  return (&DAT_005ce9e8)[iVar2 * 0xa5];
}


