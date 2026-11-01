
/* ==== FUN_00442cc0 @ 00442cc0 ==== 
 * signature: int __fastcall FUN_00442cc0(undefined4 * param_1)
 * body: 00442cc0-00442cde
 */

int __fastcall FUN_00442cc0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x8c;
}


