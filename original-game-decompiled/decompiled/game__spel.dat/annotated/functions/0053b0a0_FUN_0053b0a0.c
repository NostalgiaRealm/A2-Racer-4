
/* ==== FUN_0053b0a0 @ 0053b0a0 ==== 
 * signature: undefined __fastcall FUN_0053b0a0(int param_1)
 * body: 0053b0a0-0053b0b3
 */

void __fastcall FUN_0053b0a0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(short *)(param_1 + 0x18) + param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(1);
  }
  return;
}


