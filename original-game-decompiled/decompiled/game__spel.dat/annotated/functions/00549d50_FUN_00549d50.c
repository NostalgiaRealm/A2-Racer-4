
/* ==== FUN_00549d50 @ 00549d50 ==== 
 * signature: undefined __fastcall FUN_00549d50(int param_1)
 * body: 00549d50-00549d6d
 */

void __fastcall FUN_00549d50(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x2e);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_004f3d00(*(int *)(*(int *)(param_1 + 0x30) + uVar1 * 4));
  }
  return;
}


