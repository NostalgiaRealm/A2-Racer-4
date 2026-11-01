
/* ==== FUN_00514280 @ 00514280 ==== 
 * signature: int __cdecl FUN_00514280(int * param_1, int param_2)
 * body: 00514280-005142d9
 */

int __cdecl FUN_00514280(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[1];
    piVar3 = param_1;
    while ((piVar2 = piVar3 + 1, iVar1 != param_2 && (iVar1 != 0))) {
      iVar1 = piVar3[2];
      piVar3 = piVar2;
    }
    if (*piVar2 != 0) {
      iVar1 = param_1[*param_1 + 1];
      piVar3 = param_1 + *param_1 + 1;
      *piVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        *piVar3 = *param_1;
      }
      iVar1 = *piVar3;
      *piVar2 = param_1[iVar1];
      param_1[iVar1] = 0;
      return param_2;
    }
  }
  return 0;
}


