
/* ==== FUN_004f53c0 @ 004f53c0 ==== 
 * signature: undefined __fastcall FUN_004f53c0(int param_1)
 * body: 004f53c0-004f53dd
 */

void __fastcall FUN_004f53c0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x4e);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_004f32e0(*(int *)(*(int *)(param_1 + 0x50) + uVar1 * 4));
  }
  return;
}


