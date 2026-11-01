
/* ==== FUN_00428950 @ 00428950 ==== 
 * signature: undefined __cdecl FUN_00428950(int param_1, float * param_2)
 * body: 00428950-00428c61
 */

void __cdecl FUN_00428950(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  iVar5 = param_1 * 0xf0;
  fVar2 = 1.0 / *(float *)(iVar5 + 0xb0 + DAT_00715e50);
  if (0.9 <= *(float *)(DAT_0073b0d0 + *(int *)(iVar5 + DAT_00715e50 + 0x24) * 0xa9 + 0x24)) {
    iVar3 = FUN_004a8c50(iVar5 + DAT_00715e50);
    iVar1 = DAT_0073b5c8 + iVar3 * 0xac;
    local_24 = (*(float *)(DAT_0073b5c8 + 0x1c + iVar3 * 0xac) +
               *(float *)(DAT_0073b5c8 + 0x4c + iVar3 * 0xac)) * 0.5;
    local_20 = (*(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x50)) * 0.5;
    local_1c = (*(float *)(iVar1 + 0x24) + *(float *)(iVar1 + 0x54)) * 0.5;
    local_c = *(float *)(iVar1 + 0x40) + *(float *)(iVar1 + 0x10);
    local_8 = *(float *)(iVar1 + 0x44) + *(float *)(iVar1 + 0x14);
    local_4 = *(float *)(iVar1 + 0x48) + *(float *)(iVar1 + 0x18);
    local_18 = local_c * 0.5;
    local_14 = local_8 * 0.5;
    local_10 = local_4 * 0.5;
    if (0.0 < param_2[1]) {
      local_28 = fVar2 * 0.8;
    }
    if (0.0 < param_2[2]) {
      local_28 = fVar2 * -0.25;
    }
    local_2c = 0.0;
    local_30 = -(fVar2 * 0.0033333334 * *param_2) * 0.1;
    FUN_004a2000(*(void **)(iVar5 + 0x10 + DAT_00715e50),(int *)&local_30);
    local_28 = 0.0;
    local_30 = -(fVar2 * *(float *)(iVar5 + 0xbc + DAT_00715e50));
    pfVar4 = (float *)FUN_004b42a0(&local_c,&local_30,
                                   DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 +
                                   0x10);
    local_30 = *pfVar4;
    local_2c = pfVar4[1];
    local_28 = pfVar4[2];
    FUN_004a9830(iVar5 + DAT_00715e50);
    local_30 = 0.0;
    local_28 = 0.0;
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0.0;
    local_2c = -fVar2 * ABS(*(float *)(iVar5 + 0xc4 + DAT_00715e50)) * 0.12;
    FUN_004a9830(iVar5 + DAT_00715e50);
  }
  return;
}


