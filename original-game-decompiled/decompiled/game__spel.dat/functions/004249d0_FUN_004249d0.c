
/* ==== FUN_004249d0 @ 004249d0 ==== 
 * signature: int __fastcall FUN_004249d0(undefined4 * param_1)
 * body: 004249d0-004249e7
 */

int __fastcall FUN_004249d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x60;
}


