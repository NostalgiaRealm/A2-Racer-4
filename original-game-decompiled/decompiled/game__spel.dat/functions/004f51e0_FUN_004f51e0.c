
/* ==== FUN_004f51e0 @ 004f51e0 ==== 
 * signature: undefined __fastcall FUN_004f51e0(int param_1)
 * body: 004f51e0-004f520c
 */

void __fastcall FUN_004f51e0(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x13c);
  uVar1 = (uint)*(ushort *)(param_1 + 0x4e);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_004f24b0(*(int *)(*(int *)(param_1 + 0x50) + uVar1 * 4));
  }
  return;
}


