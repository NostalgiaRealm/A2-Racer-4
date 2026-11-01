
/* ==== FUN_0050d4c0 @ 0050d4c0 ==== 
 * signature: undefined __fastcall FUN_0050d4c0(int param_1)
 * body: 0050d4c0-0050d4e3
 */

void __fastcall FUN_0050d4c0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x92);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x94) + uVar1 * 4))(param_1);
  }
  return;
}


