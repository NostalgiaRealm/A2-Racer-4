
/* ==== FUN_00549d30 @ 00549d30 ==== 
 * signature: undefined __fastcall FUN_00549d30(int param_1)
 * body: 00549d30-00549d4d
 */

void __fastcall FUN_00549d30(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x2e);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_004f44c0(*(int *)(*(int *)(param_1 + 0x30) + uVar1 * 4));
  }
  return;
}


