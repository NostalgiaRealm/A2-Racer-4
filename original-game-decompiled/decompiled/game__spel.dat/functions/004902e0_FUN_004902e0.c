
/* ==== FUN_004902e0 @ 004902e0 ==== 
 * signature: int __fastcall FUN_004902e0(undefined4 * param_1)
 * body: 004902e0-004902fd
 */

int __fastcall FUN_004902e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x114;
}


