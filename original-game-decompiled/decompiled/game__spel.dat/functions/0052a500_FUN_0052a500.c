
/* ==== FUN_0052a500 @ 0052a500 ==== 
 * signature: double * __cdecl FUN_0052a500(int * param_1)
 * body: 0052a500-0052a566
 */

double * __cdecl FUN_0052a500(int *param_1)

{
  int *piVar1;
  int iVar2;
  double *pdVar3;
  
  piVar1 = param_1;
  iVar2 = FUN_00514af0(param_1);
  param_1 = (int *)FUN_00514b50(iVar2);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    piVar1 = piVar1 + 2;
    while (iVar2 != 0) {
      FUN_00514020((int *)&param_1,*(int *)(iVar2 + 8));
      iVar2 = *piVar1;
      piVar1 = piVar1 + 1;
    }
  }
  pdVar3 = FUN_0052c820(DAT_0074c03c + -1,param_1);
  FUN_00514ba0((int *)&param_1);
  return pdVar3;
}


