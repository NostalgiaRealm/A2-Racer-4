
/* ==== FUN_00414470 @ 00414470 ==== 
 * signature: undefined __cdecl FUN_00414470(float param_1, int param_2, int param_3)
 * body: 00414470-00414635
 */

void __cdecl FUN_00414470(float param_1,int param_2,int param_3)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)(param_3 * 0x50 + 8 + DAT_00715eb8);
  iVar4 = (&DAT_005d1ba8)[(int)param_1 * 0xe];
  piVar2 = (int *)(iVar4 * 0xf0 + 0x24 + DAT_00715e50);
  iVar5 = *piVar2;
  local_24 = *pfVar1 - *(float *)(iVar5 + DAT_0073b0d0 + 0x50 + iVar5 * 0xa8);
  iVar5 = iVar5 + DAT_0073b0d0 + 0x50 + iVar5 * 0xa8;
  local_20 = pfVar1[1] - *(float *)(iVar5 + 4);
  local_1c = pfVar1[2] - *(float *)(iVar5 + 8);
  if (((local_24 != 0.0) || (local_20 != 0.0)) ||
     (local_18 = local_24, local_14 = local_20, local_10 = local_1c, local_1c != 0.0)) {
    local_10 = SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
    local_18 = local_24 / local_10;
    local_14 = local_20 / local_10;
    local_10 = local_1c / local_10;
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
  }
  puVar6 = (undefined4 *)FUN_004b4070(&local_24,DAT_0073b0d0 + *piVar2 * 0xa9 + 0x10);
  local_c = (float)*puVar6;
  local_8 = (float)puVar6[1];
  local_4 = (float)puVar6[2];
  fVar7 = (float10)FUN_00558550();
  pfVar1 = (float *)(&DAT_005d1bd0 + (int)param_1 * 0x38);
  fVar3 = (float)((fVar7 - (float10)1.5707964) * (float10)0.63661975 * (float10)1024.0);
  FUN_00414450(iVar4,pfVar1,fVar3);
  FUN_00414320(param_1,(int)pfVar1,param_2,fVar3);
  FUN_00428950(iVar4,pfVar1);
  return;
}


