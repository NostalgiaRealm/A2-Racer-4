
/* ==== FUN_00508e40 @ 00508e40 ==== 
 * signature: undefined __cdecl FUN_00508e40(int * param_1, int * param_2)
 * body: 00508e40-00508e8a
 */

void __cdecl FUN_00508e40(int *param_1,int *param_2)

{
  int iVar1;
  
  for (; iVar1 = *param_1, iVar1 != 0; param_1 = (int *)((int)param_1 + iVar1)) {
    FUN_00508e40(param_1 + 7,param_2);
  }
  iVar1 = param_1[1];
  if (*param_2 <= param_2[1]) {
    FUN_0050a360(param_2);
  }
  *(int *)(param_2[2] + param_2[1] * 4) = iVar1 + (int)param_1;
  param_2[1] = param_2[1] + 1;
  return;
}


