
/* ==== FUN_005142e0 @ 005142e0 ==== 
 * signature: int __cdecl FUN_005142e0(int * param_1)
 * body: 005142e0-00514323
 */

int __cdecl FUN_005142e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (int *)0x0) && (param_1[1] != 0)) {
    iVar1 = *param_1;
    iVar2 = param_1[iVar1 + 1];
    if (iVar2 != 0) {
      iVar3 = param_1[iVar2 + -1];
      param_1[iVar2 + -1] = 0;
      param_1[iVar1 + 1] = param_1[iVar1 + 1] + -1;
      return iVar3;
    }
    iVar2 = param_1[iVar1];
    param_1[iVar1] = 0;
    param_1[iVar1 + 1] = iVar1;
    return iVar2;
  }
  return 0;
}


