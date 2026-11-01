
/* ==== FUN_0043a690 @ 0043a690 ==== 
 * signature: undefined __stdcall FUN_0043a690(void)
 * body: 0043a690-0043a90a
 */

void FUN_0043a690(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  iVar9 = DAT_006c3530 * 0x178;
  FUN_004b1290((void *)(DAT_00719b50 + iVar9),
               *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50),0,0x41a00000,0);
  iVar6 = FUN_004072b0(DAT_006fba58);
  if (iVar6 == -1) {
    iVar5 = *(int *)(DAT_00715254 + 4 + *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50) * 4);
    iVar6 = DAT_00715f00 + 0x34 + iVar5 * 0x994;
    fVar10 = *(float *)(DAT_00715f00 + 0x34 + iVar5 * 0x994);
    fVar11 = *(float *)(iVar6 + 8);
    local_8 = *(float *)(iVar6 + 4) + 20.0;
  }
  else {
    iVar8 = *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
    iVar5 = *(int *)(iVar6 * 0xf0 + 0x24 + DAT_00715e50);
    fVar10 = *(float *)(DAT_0073b0d0 + iVar5 + 0x50 + iVar5 * 0xa8);
    fVar11 = *(float *)(iVar8 + 0x50);
    iVar5 = DAT_0073b0d0 + iVar5 + 0x50 + iVar5 * 0xa8;
    fVar1 = *(float *)(iVar5 + 4);
    fVar2 = *(float *)(iVar8 + 0x54);
    fVar3 = *(float *)(iVar5 + 8);
    fVar4 = *(float *)(iVar8 + 0x58);
    fVar12 = (float10)FUN_0041e120();
    fVar12 = SQRT(fVar12);
    pfVar7 = (float *)FUN_004066c0(local_c,(float)((float10)(fVar10 - fVar11) / fVar12),
                                   (float)((float10)(fVar1 - fVar2) / fVar12),
                                   (float)((float10)(fVar3 - fVar4) / fVar12));
    iVar6 = *(int *)(iVar6 * 0xf0 + 0x24 + DAT_00715e50);
    local_4 = pfVar7[2] * 40.0;
    fVar10 = *pfVar7 * 40.0 + *(float *)(DAT_0073b0d0 + iVar6 + 0x50 + iVar6 * 0xa8);
    iVar6 = DAT_0073b0d0 + iVar6 + 0x50 + iVar6 * 0xa8;
    fVar11 = local_4 + *(float *)(iVar6 + 8);
    local_8 = pfVar7[1] * 40.0 + *(float *)(iVar6 + 4) + 30.0;
  }
  if (*(int *)(DAT_00719b50 + 0x74 + iVar9) != 0) {
    FUN_004b1260(DAT_00719b50 + iVar9);
  }
  FUN_004b1060((void *)(DAT_00719b50 + iVar9),fVar10,local_8,fVar11);
  FUN_004b1380((int *)(DAT_00719b50 + iVar9));
  change_active_camera(6);
  return;
}


