
/* ==== FUN_004f9e10 @ 004f9e10 ==== 
 * signature: undefined __fastcall FUN_004f9e10(double * param_1)
 * body: 004f9e10-004f9e3b
 */

void __fastcall FUN_004f9e10(double *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_004f9470(param_1);
  fVar1 = (float10)1.0 / fVar1;
  *param_1 = (double)(fVar1 * (float10)*param_1);
  param_1[1] = (double)(fVar1 * (float10)param_1[1]);
  param_1[2] = (double)(fVar1 * (float10)param_1[2]);
  param_1[3] = (double)(fVar1 * (float10)param_1[3]);
  return;
}


