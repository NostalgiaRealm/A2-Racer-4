
/* ==== FUN_004f8f20 @ 004f8f20 ==== 
 * signature: undefined __fastcall FUN_004f8f20(double * param_1)
 * body: 004f8f20-004f8f7d
 */

void __fastcall FUN_004f8f20(double *param_1)

{
  double dVar1;
  
  dVar1 = param_1[3] * param_1[3] +
          param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (1e-19 < dVar1) {
    dVar1 = 1.0 / SQRT(dVar1);
    *param_1 = dVar1 * *param_1;
    param_1[1] = dVar1 * param_1[1];
    param_1[2] = dVar1 * param_1[2];
    param_1[3] = dVar1 * param_1[3];
    return;
  }
  return;
}


