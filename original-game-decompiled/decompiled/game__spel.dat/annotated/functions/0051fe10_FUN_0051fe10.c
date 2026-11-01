
/* ==== FUN_0051fe10 @ 0051fe10 ==== 
 * signature: undefined __thiscall FUN_0051fe10(double * param_1, float * param_2, double param_3)
 * body: 0051fe10-0051fe47
 */

void __thiscall FUN_0051fe10(double *param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  param_1[2] = (double)(param_2[2] * (float)param_3);
  *param_1 = (double)(fVar2 * (float)param_3);
  param_1[1] = (double)(fVar1 * (float)param_3);
  return;
}


