
/* ==== FUN_00529ff0 @ 00529ff0 ==== 
 * signature: float10 __cdecl FUN_00529ff0(int param_1, int param_2, double * param_3, double * param_4)
 * body: 00529ff0-0052a015
 */

float10 __cdecl FUN_00529ff0(int param_1,int param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)*param_4;
  if (param_1 != 0) {
    iVar3 = param_2 - (int)param_3;
    do {
      pdVar1 = (double *)(iVar3 + (int)param_3);
      dVar2 = *param_3;
      param_3 = param_3 + 1;
      param_1 = param_1 + -1;
      fVar4 = (float10)*pdVar1 * (float10)dVar2 + fVar4;
    } while (param_1 != 0);
  }
  return fVar4;
}


