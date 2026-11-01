
/* ==== FUN_004f9780 @ 004f9780 ==== 
 * signature: undefined4 __fastcall FUN_004f9780(float * param_1)
 * body: 004f9780-004f9860
 */

undefined4 __fastcall FUN_004f9780(float *param_1)

{
  float fVar1;
  float fVar2;
  int iStack_4;
  
  fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (fVar1 < 1e-19) {
    return 0;
  }
  iStack_4 = (int)((ulonglong)(double)fVar1 >> 0x20);
  fVar1 = fVar1 * 0.5;
  fVar2 = (float)(double)((ulonglong)((0x7ff00000 - iStack_4 >> 1) + 0x1ff00000) << 0x20);
  fVar2 = ((0.5 - fVar1 * fVar2 * fVar2) + 1.0) * fVar2;
  fVar2 = ((0.5 - fVar2 * fVar2 * fVar1) + 1.0) * fVar2;
  fVar2 = ((0.5 - fVar2 * fVar2 * fVar1) + 1.0) * fVar2;
  fVar2 = ((0.5 - fVar2 * fVar2 * fVar1) + 1.0) * fVar2;
  *param_1 = *param_1 * fVar2;
  param_1[1] = param_1[1] * fVar2;
  param_1[2] = param_1[2] * fVar2;
  return 1;
}


