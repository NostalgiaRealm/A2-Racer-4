
/* ==== FUN_004f9580 @ 004f9580 ==== 
 * signature: float10 __fastcall FUN_004f9580(double * param_1)
 * body: 004f9580-004f9675
 */

float10 __fastcall FUN_004f9580(double *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int iStack_4;
  
  fVar3 = (float10)param_1[2] * (float10)param_1[2] +
          (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1;
  if (fVar3 < (float10)1e-19) {
    return (float10)0.0;
  }
  iStack_4 = (int)((ulonglong)(double)fVar3 >> 0x20);
  fVar1 = fVar3 * (float10)0.5;
  fVar2 = (float10)(double)((ulonglong)((0x7ff00000 - iStack_4 >> 1) + 0x1ff00000) << 0x20);
  fVar2 = (((float10)0.5 - fVar1 * fVar2 * fVar2) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  fVar2 = (((float10)0.5 - fVar2 * fVar2 * fVar1) + (float10)1.0) * fVar2;
  *param_1 = (double)(fVar2 * (float10)*param_1);
  param_1[1] = (double)(fVar2 * (float10)param_1[1]);
  param_1[2] = (double)(fVar2 * (float10)param_1[2]);
  return fVar2 * fVar3;
}


