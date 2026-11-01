
/* ==== FUN_0052b770 @ 0052b770 ==== 
 * signature: float10 __cdecl FUN_0052b770(double * param_1, double * param_2, int param_3)
 * body: 0052b770-0052b7b1
 */

float10 __cdecl FUN_0052b770(double *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)0.0;
  iVar3 = param_3;
  if (param_3 < 1) {
    iVar3 = -param_3;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    dVar1 = *param_1;
    dVar2 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    fVar4 = ((float10)dVar1 - (float10)dVar2) * ((float10)dVar1 - (float10)dVar2) + fVar4;
  }
  if (0 < param_3) {
    fVar4 = SQRT(fVar4);
  }
  return fVar4;
}


