
/* ==== FUN_0051ffe0 @ 0051ffe0 ==== 
 * signature: float10 __thiscall FUN_0051ffe0(int param_1, double * param_2)
 * body: 0051ffe0-00520046
 */

float10 __thiscall FUN_0051ffe0(int param_1,double *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)*(double *)(param_1 + 0x18) * (float10)*(double *)(param_1 + 0x18) +
          (float10)*(double *)(param_1 + 0x10) * (float10)*(double *)(param_1 + 0x10);
  if (fVar2 < (float10)1e-19) {
    fVar2 = (float10)**(double **)(param_1 + 8) - (float10)*param_2;
    fVar1 = (float10)(*(double **)(param_1 + 8))[1] - (float10)param_2[1];
    return fVar2 * fVar2 + fVar1 * fVar1;
  }
  return (((float10)**(double **)(param_1 + 8) - (float10)*param_2) *
          (float10)*(double *)(param_1 + 0x18) +
         ((float10)param_2[1] - (float10)(*(double **)(param_1 + 8))[1]) *
         (float10)*(double *)(param_1 + 0x10)) / SQRT(fVar2);
}


