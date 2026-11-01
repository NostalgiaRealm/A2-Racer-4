
/* ==== FUN_004ec520 @ 004ec520 ==== 
 * signature: int __fastcall FUN_004ec520(undefined4 * param_1)
 * body: 004ec520-004ec538
 */

int __fastcall FUN_004ec520(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  return *(int *)(param_1[1] + 4) + (iVar1 + -1) * 0x3c;
}


