
/* ==== FUN_0040fae0 @ 0040fae0 ==== 
 * signature: int __fastcall FUN_0040fae0(undefined4 * param_1)
 * body: 0040fae0-0040faf5
 */

int __fastcall FUN_0040fae0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x14;
}


