
/* ==== FUN_0040f9b0 @ 0040f9b0 ==== 
 * signature: int __fastcall FUN_0040f9b0(undefined4 * param_1)
 * body: 0040f9b0-0040f9c7
 */

int __fastcall FUN_0040f9b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x30;
}


