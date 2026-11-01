
/* ==== FUN_00459680 @ 00459680 ==== 
 * signature: undefined __stdcall FUN_00459680(float * param_1, float * param_2)
 * body: 00459680-0045979c
 */

void FUN_00459680(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar9 = FUN_00558625();
  uVar10 = FUN_00558625();
  lVar13 = __ftol();
  uVar12 = (100 - (int)uVar9 % 200) + (int)lVar13;
  iVar11 = (uVar12 & DAT_005b23bc) * 4;
  fVar1 = *(float *)(iVar11 + DAT_0073b578);
  fVar2 = *param_2;
  fVar3 = *(float *)(iVar11 + DAT_0073b530);
  fVar4 = param_2[2];
  uVar9 = FUN_00558625();
  iVar11 = (uVar12 & DAT_005b23bc) * 4;
  fVar5 = *(float *)(iVar11 + DAT_0073b530);
  fVar6 = *param_2;
  fVar7 = *(float *)(iVar11 + DAT_0073b578);
  fVar8 = param_2[2];
  uVar12 = FUN_00558625();
  *param_1 = ((fVar1 * fVar2 - fVar3 * fVar4) + 15.0) - (float)((int)uVar9 % 0x1e);
  param_1[1] = (float)((int)uVar10 % 0x14) + 20.0;
  param_1[2] = (fVar7 * fVar8 + fVar5 * fVar6 + 15.0) - (float)((int)uVar12 % 0x1e);
  return;
}


