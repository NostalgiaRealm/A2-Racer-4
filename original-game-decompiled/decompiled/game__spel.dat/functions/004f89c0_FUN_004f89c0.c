
/* ==== FUN_004f89c0 @ 004f89c0 ==== 
 * signature: undefined __thiscall FUN_004f89c0(double * param_1, float * param_2, double param_3)
 * body: 004f89c0-004f8a41
 */

void __thiscall FUN_004f89c0(double *param_1,float *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_3 * 0.5;
  dVar2 = (double)*param_2 * dVar1;
  dVar2 = dVar2 - dVar2 * dVar2 * dVar2 * 0.1666666716337204;
  *param_1 = dVar2;
  dVar3 = (double)param_2[1] * dVar1;
  dVar3 = dVar3 - dVar3 * dVar3 * dVar3 * 0.1666666716337204;
  param_1[1] = dVar3;
  dVar1 = dVar1 * (double)param_2[2];
  dVar1 = dVar1 - dVar1 * dVar1 * dVar1 * 0.1666666716337204;
  param_1[2] = dVar1;
  param_1[3] = SQRT(1.0 - (dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1));
  return;
}


