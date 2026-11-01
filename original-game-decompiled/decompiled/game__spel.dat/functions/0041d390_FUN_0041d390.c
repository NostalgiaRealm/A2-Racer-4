
/* ==== FUN_0041d390 @ 0041d390 ==== 
 * signature: undefined __stdcall FUN_0041d390(int param_1, int param_2, int param_3, int param_4)
 * body: 0041d390-0041d737
 */

void FUN_0041d390(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar15;
  longlong lVar16;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_c [12];
  
  iVar6 = (&DAT_005ce9e8)[param_3 * 0xa5];
  iVar13 = iVar6 * 0xf0;
  iVar1 = iVar13 + DAT_00715e50;
  iVar13 = DAT_0073b0d0 + *(int *)(iVar13 + 0x24 + DAT_00715e50) * 0xa9;
  fVar7 = *(float *)(iVar13 + 0x50);
  fVar8 = *(float *)(iVar13 + 0x54);
  fVar9 = *(float *)(iVar13 + 0x58);
  if (param_4 == 0) {
    param_4 = -0x14;
  }
  else if (param_4 == 1) {
    param_4 = 0x14;
  }
  else if (param_4 == 2) {
    param_4 = 0;
  }
  local_24 = *(float *)(iVar13 + 0x74);
  local_20 = *(float *)(iVar13 + 0x78);
  local_1c = *(float *)(iVar13 + 0x7c);
  __ftol();
  uVar14 = DAT_005b23bc;
  lVar16 = __ftol();
  fVar2 = *(float *)(DAT_0073b530 + ((uint)lVar16 & uVar14) * 4);
  fVar3 = *(float *)(iVar1 + 0xc4);
  iVar13 = DAT_0073b0d0 + *(int *)(iVar1 + 0x24) * 0xa9;
  local_24 = *(float *)(iVar13 + 0x74);
  local_1c = *(float *)(iVar13 + 0x7c);
  local_20 = *(float *)(iVar13 + 0x78);
  __ftol();
  lVar16 = __ftol();
  fVar4 = *(float *)(DAT_0073b530 + ((uint)lVar16 & uVar14) * 4);
  fVar5 = *(float *)(iVar1 + 0xbc);
  fVar15 = (float10)FUN_0041e120();
  fVar15 = SQRT(fVar15);
  pfVar11 = (float *)FUN_004066c0(&local_18,
                                  (float)((float10)(float)(extraout_ST0 -
                                                          (float10)fVar2 * (float10)fVar3) / fVar15)
                                  ,(float)((float10)0.0 / fVar15),
                                  (float)((float10)(float)((float10)fVar4 * (float10)fVar5 +
                                                          extraout_ST0_00) / fVar15));
  fVar3 = -*pfVar11;
  local_1c = (float)param_4;
  fVar2 = pfVar11[2];
  fVar5 = *pfVar11 * 200.0;
  local_18 = fVar5 + local_1c * fVar2;
  local_20 = 0.0;
  fVar10 = fVar7 + local_18;
  fVar4 = fVar9 + local_1c * fVar3 + fVar2 * 200.0;
  local_14 = fVar8 + pfVar11[1] * 200.0 + 0.0 + 5.0;
  local_24 = local_1c * fVar2;
  local_1c = local_1c * fVar3;
  pfVar11 = (float *)FUN_004066c0(local_c,fVar5 + fVar7,pfVar11[1] * 200.0 + fVar8,
                                  fVar2 * 200.0 + fVar9);
  puVar12 = (undefined4 *)
            FUN_004066c0(&local_24,*pfVar11 + local_24,pfVar11[1] + local_20,pfVar11[2] + local_1c);
  *(undefined4 *)(param_2 + 8) = *puVar12;
  *(undefined4 *)(param_2 + 0xc) = puVar12[1];
  *(undefined4 *)(param_2 + 0x10) = puVar12[2];
  lVar16 = FUN_004031f0(iVar6,fVar10,local_14,fVar4);
  uVar14 = (int)(uint)lVar16 >> 0x1f;
  param_4 = ((uint)lVar16 ^ uVar14) - uVar14;
  if (500 < param_4) {
    param_4 = 500;
  }
  fVar15 = FUN_00403440(param_3,(float)param_4);
  fVar2 = *(float *)(param_1 + 0x24);
  if ((float)fVar15 < *(float *)(param_1 + 0x24)) {
    fVar2 = (float)fVar15;
  }
  *(float *)(param_2 + 0x18) = fVar2;
  FUN_0040a360(fVar7,fVar8,fVar9,fVar10,local_14,fVar4);
  return;
}


