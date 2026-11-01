
/* ==== FUN_004f4a60 @ 004f4a60 ==== 
 * signature: undefined __fastcall FUN_004f4a60(uint * param_1)
 * body: 004f4a60-004f4b2a
 */

void __fastcall FUN_004f4a60(uint *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0 / (float)param_1[7];
  fVar2 = 1.0 / (float)param_1[6];
  param_1[0xe] = (uint)fVar2;
  param_1[0xd] = (uint)(1.0 / (float)param_1[5]);
  param_1[0xf] = (uint)fVar1;
  param_1[0x10] = (uint)(1.0 / (float)param_1[8]);
  if ((fVar2 - fVar1) * (fVar2 - fVar1) +
      ((float)param_1[0xd] - fVar2) * ((float)param_1[0xd] - fVar2) +
      (fVar1 - (float)param_1[0xd]) * (fVar1 - (float)param_1[0xd]) <
      ((float)param_1[7] * (float)param_1[7] +
      (float)param_1[6] * (float)param_1[6] + (float)param_1[5] * (float)param_1[5]) * 0.010000001)
  {
    *param_1 = *param_1 & 0xffffff7f | 0x40;
    param_1[0x12] = (uint)(0.5 / (float)param_1[1]);
    return;
  }
  *param_1 = *param_1 & 0xffffff3f;
  param_1[0x12] = (uint)(0.5 / (float)param_1[1]);
  return;
}


