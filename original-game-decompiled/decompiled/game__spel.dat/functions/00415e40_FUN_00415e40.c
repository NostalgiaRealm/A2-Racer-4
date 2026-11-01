
/* ==== FUN_00415e40 @ 00415e40 ==== 
 * signature: undefined __cdecl FUN_00415e40(int param_1, float * param_2)
 * body: 00415e40-004161c5
 */

void __cdecl FUN_00415e40(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  float local_c [3];
  
  iVar5 = param_1 * 0xf0;
  if (0.9 < *(float *)(DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 + 0x24)) {
    iVar2 = FUN_004a8c50(iVar5 + DAT_00715e50);
    iVar2 = iVar2 * 0xac;
    pfVar3 = (float *)FUN_004066c0(local_18,*(float *)(iVar2 + 0x4c + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar2 + 0x50 + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar2 + 0x54 + DAT_0073b5c8) * 0.5);
    local_30 = *pfVar3;
    local_2c = pfVar3[1];
    local_28 = pfVar3[2];
    iVar4 = FUN_004066c0(&local_24,local_30 + *(float *)(iVar2 + 0x1c + DAT_0073b5c8),
                         local_2c + *(float *)(iVar2 + 0x20 + DAT_0073b5c8),
                         local_28 + *(float *)(iVar2 + 0x24 + DAT_0073b5c8));
    local_10 = *(undefined4 *)(iVar4 + 8);
    pfVar3 = (float *)FUN_004066c0(local_c,*(float *)(iVar2 + 0x40 + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar2 + 0x44 + DAT_0073b5c8) * 0.5,
                                   *(float *)(iVar2 + 0x48 + DAT_0073b5c8) * 0.5);
    local_30 = *pfVar3;
    local_2c = pfVar3[1];
    local_28 = pfVar3[2];
    local_24 = local_30 + *(float *)(iVar2 + 0x10 + DAT_0073b5c8);
    pfVar3 = (float *)(iVar2 + 0x10 + DAT_0073b5c8);
    local_20 = local_2c + pfVar3[1];
    local_1c = local_28 + pfVar3[2];
    FUN_004066c0(local_c,*(float *)(iVar2 + 0x1c + DAT_0073b5c8) * 0.5 + *pfVar3,
                 *(float *)(iVar2 + 0x20 + DAT_0073b5c8) * 0.5 + pfVar3[1],
                 *(float *)(iVar2 + 0x24 + DAT_0073b5c8) * 0.5 + pfVar3[2]);
    local_38 = 0.0;
    local_34 = 0.0;
    fVar1 = 1.0 / *(float *)(iVar5 + 0xb0 + DAT_00715e50);
    if (0.0 < param_2[1]) {
      local_34 = fVar1 * 0.013 * param_2[1];
    }
    if (0.0 < param_2[2]) {
      local_34 = -(param_2[2] * 0.013 * fVar1);
    }
    local_3c = -(fVar1 * 0.0033333334 * *param_2) * 0.1;
    FUN_004a2000(*(void **)(iVar5 + 0x10 + DAT_00715e50),(int *)&local_3c);
    local_34 = 0.0;
    local_3c = -(fVar1 * *(float *)(iVar5 + 0xbc + DAT_00715e50));
    pfVar3 = (float *)FUN_004b42a0(local_c,&local_3c,
                                   DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 +
                                   0x10);
    local_3c = *pfVar3;
    local_38 = pfVar3[1];
    local_34 = pfVar3[2];
    FUN_004a9830(iVar5 + DAT_00715e50);
    local_3c = 0.0;
    local_34 = 0.0;
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    local_38 = -fVar1 * ABS(*(float *)(iVar5 + 0xc4 + DAT_00715e50)) * 0.12;
    FUN_004a9830(iVar5 + DAT_00715e50);
  }
  return;
}


