
/* ==== FUN_004aff40 @ 004aff40 ==== 
 * signature: undefined __cdecl FUN_004aff40(float * param_1, uint param_2)
 * body: 004aff40-004b001a
 */

void __cdecl FUN_004aff40(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  iVar7 = (DAT_005b23bc & param_2) * 4;
  fVar1 = *(float *)(iVar7 + DAT_0073b530);
  fVar2 = *(float *)(iVar7 + DAT_0073b578);
  fVar3 = *param_1;
  fVar4 = param_1[3];
  fVar5 = param_1[6];
  *param_1 = fVar3 * fVar2 - param_1[2] * fVar1;
  fVar6 = param_1[9];
  param_1[2] = fVar3 * fVar1 + param_1[2] * fVar2;
  param_1[3] = fVar4 * fVar2 - param_1[5] * fVar1;
  param_1[5] = fVar4 * fVar1 + param_1[5] * fVar2;
  param_1[6] = fVar5 * fVar2 - param_1[8] * fVar1;
  param_1[8] = fVar5 * fVar1 + param_1[8] * fVar2;
  param_1[9] = fVar6 * fVar2 - param_1[0xb] * fVar1;
  param_1[0xb] = fVar6 * fVar1 + param_1[0xb] * fVar2;
  return;
}


