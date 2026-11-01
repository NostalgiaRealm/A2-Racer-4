
/* ==== FUN_0050af20 @ 0050af20 ==== 
 * signature: bool __stdcall FUN_0050af20(int * param_1, int * param_2, byte param_3)
 * body: 0050af20-0050afa7
 */

bool FUN_0050af20(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1 << (param_3 & 0x1f);
  iVar3 = param_1[1] << (param_3 & 0x1f);
  iVar4 = param_1[2] << (param_3 & 0x1f);
  iVar1 = (2 << (param_3 & 0x1f)) + -2;
  if (*param_2 < iVar2) {
    return false;
  }
  if (param_2[1] < iVar3) {
    return false;
  }
  if (param_2[2] < iVar4) {
    return false;
  }
  if (iVar2 + iVar1 < *param_2) {
    return false;
  }
  if (iVar1 + iVar3 < param_2[1]) {
    return false;
  }
  return param_2[2] <= iVar1 + iVar4;
}


