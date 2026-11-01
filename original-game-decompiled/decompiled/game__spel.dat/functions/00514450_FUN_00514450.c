
/* ==== FUN_00514450 @ 00514450 ==== 
 * signature: int __cdecl FUN_00514450(int * param_1, int param_2)
 * body: 00514450-005144b8
 */

int __cdecl FUN_00514450(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[1];
    piVar4 = param_1;
    while ((piVar3 = piVar4 + 1, iVar1 != param_2 && (iVar1 != 0))) {
      iVar1 = piVar4[2];
      piVar4 = piVar3;
    }
    if (*piVar3 != 0) {
      piVar4 = piVar4 + 2;
      iVar1 = *piVar4;
      *piVar3 = iVar1;
      piVar3 = piVar4;
      while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar1 = *piVar3;
        *piVar4 = iVar1;
        piVar4 = piVar4 + 1;
      }
      iVar1 = *param_1;
      iVar2 = param_1[iVar1 + 1];
      param_1[iVar1 + 1] = iVar2 + -1;
      if (iVar2 != 0) {
        return param_2;
      }
      param_1[iVar1 + 1] = *param_1;
      return param_2;
    }
  }
  return 0;
}


