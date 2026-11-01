
/* ==== FUN_00466020 @ 00466020 ==== 
 * signature: undefined4 __cdecl FUN_00466020(undefined4 * param_1)
 * body: 00466020-004661d2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00466020(undefined4 *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c [3];
  
  iVar3 = param_1[4];
  if ((int)param_1[2] < param_1[1] + -2) {
    pfVar1 = (float *)FUN_00464540(&local_24,param_1[6],param_1[1],param_1[2],(float)param_1[3],
                                   param_1[8]);
    local_30 = *pfVar1;
    local_2c = pfVar1[1];
    local_28 = pfVar1[2];
    pfVar1 = (float *)FUN_00464540(local_c,param_1[6],param_1[1],param_1[2] + 1,(float)param_1[3],
                                   param_1[8]);
    local_24 = *pfVar1;
    local_20 = pfVar1[1];
    local_1c = pfVar1[2];
  }
  iVar3 = iVar3 * 0xf0;
  *(int *)(iVar3 + 0x34 + DAT_00715e50) = DAT_006fba7c;
  if ((int)param_1[2] < param_1[1] + -2) {
    fVar4 = (float10)fpatan((float10)local_1c - (float10)local_28,
                            (float10)local_24 - (float10)local_30);
    param_1[2] = param_1[2] + 1;
    iVar2 = *(int *)(iVar3 + DAT_00715e50 + 0x24);
    local_18 = *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8);
    local_10 = *(undefined4 *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8 + 0x7c);
    local_14 = (float)(((fVar4 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) /
                      (float10)6.2831855);
    FUN_004a7d10((void *)(iVar3 + DAT_00715e50),&local_18);
    iVar2 = DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9;
    *(float *)(iVar2 + 0x50) = local_30;
    *(float *)(iVar2 + 0x54) = local_2c;
    *(float *)(iVar2 + 0x58) = local_28;
    FUN_004b5770(DAT_0073b0d0 + *(int *)(iVar3 + 0x24 + DAT_00715e50) * 0xa9);
  }
  if ((*(int *)(&DAT_00709f0c + param_1[6] * 0x340) != 0) &&
     (*(int *)(&DAT_00709f0c + param_1[6] * 0x340) == DAT_006fba7c)) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}


