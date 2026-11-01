
/* ==== FUN_004f8a50 @ 004f8a50 ==== 
 * signature: undefined __thiscall FUN_004f8a50(double * param_1, float * param_2, double param_3)
 * body: 004f8a50-004f8af3
 */

void __thiscall FUN_004f8a50(double *param_1,float *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)param_3 * (float10)0.5;
  fVar4 = (float10)fsin((float10)*param_2 * fVar3);
  *param_1 = (double)fVar4;
  fVar4 = (float10)fsin((float10)param_2[1] * fVar3);
  param_1[1] = (double)fVar4;
  fVar3 = (float10)fsin(fVar3 * (float10)param_2[2]);
  param_1[2] = (double)fVar3;
  fVar3 = fVar3 * fVar3 +
          (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1;
  if ((float10)1.0 < fVar3) {
    fVar3 = (float10)0.99999999 / SQRT(fVar3);
    dVar1 = (double)(fVar3 * (float10)*param_1);
    *param_1 = (double)(fVar3 * (float10)*param_1);
    dVar2 = (double)(fVar3 * (float10)param_1[1]);
    param_1[1] = (double)(fVar3 * (float10)param_1[1]);
    fVar3 = fVar3 * (float10)param_1[2];
    param_1[2] = (double)fVar3;
    fVar3 = (float10)dVar1 * (float10)dVar1 + (float10)dVar2 * (float10)dVar2 + fVar3 * fVar3;
  }
  param_1[3] = (double)SQRT((float10)1.0 - fVar3);
  return;
}


