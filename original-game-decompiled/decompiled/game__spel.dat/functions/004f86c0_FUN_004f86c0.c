
/* ==== FUN_004f86c0 @ 004f86c0 ==== 
 * signature: undefined __fastcall FUN_004f86c0(int param_1)
 * body: 004f86c0-004f86ed
 */

void __fastcall FUN_004f86c0(int param_1)

{
  uint uVar1;
  int local_4;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xfe);
  local_4 = param_1;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x100) + uVar1 * 4))(&local_4);
  }
  return;
}


