
/* ==== FUN_004f9870 @ 004f9870 ==== 
 * signature: undefined4 __fastcall FUN_004f9870(double * param_1)
 * body: 004f9870-004f9960
 */

undefined4 __fastcall FUN_004f9870(double *param_1)

{
  double dVar1;
  double dVar2;
  int iStack_4;
  
  dVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (dVar1 < 1e-19) {
    return 0;
  }
  iStack_4 = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = dVar1 * 0.5;
  dVar2 = (double)((ulonglong)((0x7ff00000 - iStack_4 >> 1) + 0x1ff00000) << 0x20);
  dVar2 = ((0.5 - dVar1 * dVar2 * dVar2) + 1.0) * dVar2;
  dVar2 = ((0.5 - dVar2 * dVar2 * dVar1) + 1.0) * dVar2;
  dVar2 = ((0.5 - dVar2 * dVar2 * dVar1) + 1.0) * dVar2;
  dVar2 = ((0.5 - dVar2 * dVar2 * dVar1) + 1.0) * dVar2;
  dVar2 = ((0.5 - dVar2 * dVar2 * dVar1) + 1.0) * dVar2;
  *param_1 = dVar2 * *param_1;
  param_1[1] = dVar2 * param_1[1];
  param_1[2] = dVar2 * param_1[2];
  return 1;
}


