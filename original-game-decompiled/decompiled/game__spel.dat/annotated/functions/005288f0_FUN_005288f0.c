
/* ==== FUN_005288f0 @ 005288f0 ==== 
 * signature: undefined __cdecl FUN_005288f0(double * param_1, int param_2, double param_3)
 * body: 005288f0-00528962
 */

void __cdecl FUN_005288f0(double *param_1,int param_2,double param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  
  piVar1 = (int *)(DAT_0074c768 + *(int *)(DAT_0074c770 + DAT_0074c5f4 * 4) * 4);
  pdVar4 = (double *)*piVar1;
  if (pdVar4 == (double *)0x0) {
    pdVar4 = FUN_0051e110(DAT_0074c5f4);
  }
  else {
    DAT_0074c78c = DAT_0074c78c + 1;
    *piVar1 = *(int *)*piVar1;
  }
  pdVar5 = *(double **)(param_2 + 0x18);
  for (iVar6 = DAT_0074c03c; iVar6 != 0; iVar6 = iVar6 + -1) {
    dVar2 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    dVar3 = *param_1;
    param_1 = param_1 + 1;
    *pdVar4 = dVar3 - param_3 * dVar2;
    pdVar4 = pdVar4 + 1;
  }
  return;
}


