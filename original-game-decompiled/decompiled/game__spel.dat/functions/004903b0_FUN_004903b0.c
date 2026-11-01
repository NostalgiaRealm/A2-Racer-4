
/* ==== FUN_004903b0 @ 004903b0 ==== 
 * signature: int __fastcall FUN_004903b0(undefined4 * param_1)
 * body: 004903b0-004903c8
 */

int __fastcall FUN_004903b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x78;
}


