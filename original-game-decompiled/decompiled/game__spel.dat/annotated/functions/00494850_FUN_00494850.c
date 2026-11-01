
/* ==== FUN_00494850 @ 00494850 ==== 
 * signature: int __fastcall FUN_00494850(undefined4 * param_1)
 * body: 00494850-00494862
 */

int __fastcall FUN_00494850(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 4;
}


