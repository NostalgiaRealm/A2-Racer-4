
/* ==== FUN_004f8f80 @ 004f8f80 ==== 
 * signature: undefined __fastcall FUN_004f8f80(double * param_1)
 * body: 004f8f80-004f902d
 */

void __fastcall FUN_004f8f80(double *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1[3] * param_1[3] +
          param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (1e-12 < ABS(1.0 - dVar1)) {
    dVar2 = 1.5 - dVar1 * 0.5;
    do {
      dVar2 = (1.0 - dVar2 * dVar2 * dVar1) * 0.5 + dVar2;
    } while (1e-12 < ABS(1.0 - dVar2 * dVar2 * dVar1));
    *param_1 = dVar2 * *param_1;
    param_1[1] = dVar2 * param_1[1];
    param_1[2] = dVar2 * param_1[2];
    param_1[3] = dVar2 * param_1[3];
  }
  return;
}


