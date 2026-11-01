
/* ==== FUN_004afe30 @ 004afe30 ==== 
 * signature: undefined __cdecl FUN_004afe30(float * param_1, float * param_2, uint param_3)
 * body: 004afe30-004afe90
 */

void __cdecl FUN_004afe30(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = (DAT_005b23bc & param_3) * 4;
  fVar1 = *(float *)(iVar5 + DAT_0073b578);
  fVar2 = *param_2;
  fVar3 = *(float *)(iVar5 + DAT_0073b530);
  fVar4 = param_2[2];
  param_1[1] = 0.0;
  *param_1 = fVar1 * fVar2 - fVar3 * fVar4;
  iVar5 = (DAT_005b23bc & param_3) * 4;
  param_1[2] = *(float *)(iVar5 + DAT_0073b578) * param_2[2] +
               *(float *)(iVar5 + DAT_0073b530) * *param_2;
  return;
}


