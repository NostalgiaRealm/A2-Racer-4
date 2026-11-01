
/* ==== FUN_004b2a10 @ 004b2a10 ==== 
 * signature: undefined __cdecl FUN_004b2a10(float * param_1, float param_2, undefined4 param_3, float param_4, uint param_5)
 * body: 004b2a10-004b2a78
 */

void __cdecl
FUN_004b2a10(float *param_1,float param_2,undefined4 param_3,float param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_8;
  
  iVar3 = (DAT_005b23bc & param_5) * 4;
  fVar1 = *(float *)(iVar3 + DAT_0073b530);
  fVar2 = *(float *)(iVar3 + DAT_0073b578);
  *param_1 = param_2 * fVar2 - param_4 * fVar1;
  param_1[1] = local_8;
  param_1[2] = param_2 * fVar1 + param_4 * fVar2;
  return;
}


