
/* ==== FUN_004afea0 @ 004afea0 ==== 
 * signature: undefined __cdecl FUN_004afea0(float * param_1, float * param_2)
 * body: 004afea0-004aff3b
 */

void __cdecl FUN_004afea0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (DAT_005b23bc & (uint)param_2[0x11]) * 4;
  fVar1 = *(float *)(iVar3 + DAT_0073b578);
  fVar2 = *(float *)(iVar3 + DAT_0073b530);
  *param_1 = fVar1 * *param_2 - fVar2 * param_2[2];
  param_1[2] = fVar1 * param_2[2] + fVar2 * *param_2;
  param_1[3] = fVar1 * param_2[3] - fVar2 * param_2[5];
  param_1[5] = fVar1 * param_2[5] + fVar2 * param_2[3];
  param_1[6] = fVar1 * param_2[6] - fVar2 * param_2[8];
  param_1[8] = fVar1 * param_2[8] + fVar2 * param_2[6];
  param_1[9] = fVar1 * param_2[9] - fVar2 * param_2[0xb];
  param_1[0xb] = fVar1 * param_2[0xb] + fVar2 * param_2[9];
  return;
}


