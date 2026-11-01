
/* ==== FUN_00410d00 @ 00410d00 ==== 
 * signature: int __fastcall FUN_00410d00(undefined4 * param_1)
 * body: 00410d00-00410d15
 */

int __fastcall FUN_00410d00(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x18;
}


