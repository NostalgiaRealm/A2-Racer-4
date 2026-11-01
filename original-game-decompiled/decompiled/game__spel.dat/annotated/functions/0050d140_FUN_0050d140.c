
/* ==== FUN_0050d140 @ 0050d140 ==== 
 * signature: undefined __fastcall FUN_0050d140(int param_1)
 * body: 0050d140-0050d15d
 */

void __fastcall FUN_0050d140(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xe);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x10) + uVar1 * 4))(param_1);
  }
  return;
}


