
/* ==== FUN_0053f080 @ 0053f080 ==== 
 * signature: undefined __fastcall FUN_0053f080(int param_1)
 * body: 0053f080-0053f09d
 */

void __fastcall FUN_0053f080(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x36);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_0053f0c0(*(int *)(*(int *)(param_1 + 0x38) + uVar1 * 4));
  }
  return;
}


