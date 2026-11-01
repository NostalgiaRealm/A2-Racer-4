
/* ==== FUN_0042f5a0 @ 0042f5a0 ==== 
 * signature: int __fastcall FUN_0042f5a0(undefined4 * param_1)
 * body: 0042f5a0-0042f5b6
 */

int __fastcall FUN_0042f5a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x10;
}


