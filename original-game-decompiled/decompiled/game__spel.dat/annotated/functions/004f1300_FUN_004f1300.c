
/* ==== FUN_004f1300 @ 004f1300 ==== 
 * signature: int __fastcall FUN_004f1300(undefined4 * param_1)
 * body: 004f1300-004f1315
 */

int __fastcall FUN_004f1300(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x28;
}


