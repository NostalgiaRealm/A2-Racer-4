
/* ==== FUN_00416880 @ 00416880 ==== 
 * signature: int __fastcall FUN_00416880(undefined4 * param_1)
 * body: 00416880-00416896
 */

int __fastcall FUN_00416880(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x20;
}


