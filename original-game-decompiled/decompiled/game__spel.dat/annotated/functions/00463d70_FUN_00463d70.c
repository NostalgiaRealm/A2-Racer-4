
/* ==== FUN_00463d70 @ 00463d70 ==== 
 * signature: undefined4 __cdecl FUN_00463d70(undefined4 * param_1)
 * body: 00463d70-004640e4
 */

undefined4 __cdecl FUN_00463d70(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = param_1[4];
  if ((int)param_1[2] < param_1[1] + -2) {
    pfVar5 = (float *)FUN_00464540(&local_c,param_1[6],param_1[1],param_1[2],(float)param_1[3],
                                   param_1[8]);
    local_24 = *pfVar5;
    local_20 = pfVar5[1];
    local_1c = pfVar5[2];
    pfVar5 = (float *)FUN_00464540(&local_c,param_1[6],param_1[1],param_1[2] + 1,(float)param_1[3],
                                   param_1[8]);
    local_18 = *pfVar5;
    local_14 = pfVar5[1];
    local_10 = pfVar5[2];
  }
  iVar7 = iVar1 * 0xf0;
  *(int *)(iVar7 + 0x34 + DAT_00715e50) = DAT_006fba7c;
  if ((int)param_1[2] < param_1[1] + -2) {
    fVar2 = local_18 - local_24;
    fVar3 = local_14 - local_20;
    iVar6 = *(int *)(iVar7 + 0x24 + DAT_00715e50);
    fVar4 = local_10 - local_1c;
    local_c = fVar2;
    local_8 = fVar3;
    local_4 = fVar4;
    fVar8 = (float10)FUN_0041e120();
    fVar8 = SQRT(fVar8);
    pfVar5 = (float *)FUN_004066c0(&local_c,(float)((float10)fVar2 / fVar8),
                                   (float)((float10)fVar3 / fVar8),(float)((float10)fVar4 / fVar8));
    fVar2 = *pfVar5;
    fVar3 = pfVar5[1];
    fVar4 = pfVar5[2];
    fVar8 = (float10)FUN_0041e120();
    fVar8 = SQRT(fVar8);
    pfVar5 = (float *)FUN_004066c0(&local_18,(float)((float10)fVar4 / fVar8),
                                   (float)((float10)0.0 / fVar8),(float)((float10)-fVar2 / fVar8));
    local_c = fVar3 * pfVar5[2] - pfVar5[1] * fVar4;
    local_8 = *pfVar5 * fVar4 - pfVar5[2] * fVar2;
    iVar6 = iVar6 * 0xa9;
    local_4 = fVar2 * pfVar5[1] - fVar3 * *pfVar5;
    FUN_004b40b0((undefined4 *)(iVar6 + 0x10 + DAT_0073b0d0),*pfVar5,pfVar5[1],pfVar5[2]);
    FUN_004b40d0(iVar6 + 0x10 + DAT_0073b0d0,local_c,local_8,local_4);
    FUN_004b40f0(iVar6 + 0x10 + DAT_0073b0d0,fVar2,fVar3,fVar4);
    *(float *)(iVar6 + 0x40 + DAT_0073b0d0) = local_24;
    *(float *)(iVar6 + 0x44 + DAT_0073b0d0) = local_20;
    *(float *)(iVar6 + 0x48 + DAT_0073b0d0) = local_1c;
    iVar6 = DAT_0073b0d0 + *(int *)(iVar7 + 0x24 + DAT_00715e50) * 0xa9;
    *(float *)(iVar6 + 0x50) = local_24;
    *(float *)(iVar6 + 0x54) = local_20;
    *(float *)(iVar6 + 0x58) = local_1c;
    param_1[2] = param_1[2] + 1;
    iVar6 = FUN_004a8600((void *)(iVar7 + DAT_00715e50),0);
    *(float *)(DAT_0073b0d0 + iVar6 + 0x78 + iVar6 * 0xa8) =
         *(float *)(DAT_0073b0d0 + iVar6 + 0x78 + iVar6 * 0xa8) + 512.0;
    iVar7 = FUN_004a8600((void *)(iVar7 + DAT_00715e50),1);
    *(float *)(DAT_0073b0d0 + iVar7 + 0x74 + iVar7 * 0xa8) =
         *(float *)(DAT_0073b0d0 + iVar7 + 0x74 + iVar7 * 0xa8) + 512.0;
  }
  FUN_00450b30(iVar1,1);
  if ((*(int *)(&DAT_00709f0c + param_1[6] * 0x340) != 0) &&
     (*(int *)(&DAT_00709f0c + param_1[6] * 0x340) == DAT_006fba7c)) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}


