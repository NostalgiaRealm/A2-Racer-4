
/* ==== FUN_0040fb90 @ 0040fb90 ==== 
 * signature: int __fastcall FUN_0040fb90(undefined4 * param_1)
 * body: 0040fb90-0040fbae
 */

int __fastcall FUN_0040fb90(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x54;
}


