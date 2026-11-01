
/* ==== FUN_005146b0 @ 005146b0 ==== 
 * signature: int __cdecl FUN_005146b0(int * param_1, int param_2)
 * body: 005146b0-005146e9
 */

int __cdecl FUN_005146b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = iVar1;
  if (param_1[iVar1 + 1] != 0) {
    iVar2 = param_1[iVar1 + 1] + -1;
  }
  if ((iVar2 <= iVar1) && (iVar1 = 0, 0 < iVar2)) {
    do {
      param_1 = param_1 + 1;
      if (*param_1 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return -1;
}


