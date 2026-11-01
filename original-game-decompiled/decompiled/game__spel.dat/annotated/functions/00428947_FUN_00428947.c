
/* ==== FUN_00428947 @ 00428947 ==== 
 * signature: undefined __stdcall FUN_00428947(int param_1, float * param_2)
 * body: 00428947-0042894f
 */

void FUN_00428947(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  iVar5 = param_1 * 0xf0;
  fVar2 = 1.0 / *(float *)(iVar5 + 0xb0 + DAT_00715e50);
  if (0.9 <= *(float *)(DAT_0073b0d0 + *(int *)(iVar5 + DAT_00715e50 + 0x24) * 0xa9 + 0x24)) {
    iVar3 = FUN_004a8c50(iVar5 + DAT_00715e50);
    iVar1 = DAT_0073b5c8 + iVar3 * 0xac;
    fStack_24 = (*(float *)(DAT_0073b5c8 + 0x1c + iVar3 * 0xac) +
                *(float *)(DAT_0073b5c8 + 0x4c + iVar3 * 0xac)) * 0.5;
    fStack_20 = (*(float *)(iVar1 + 0x20) + *(float *)(iVar1 + 0x50)) * 0.5;
    fStack_1c = (*(float *)(iVar1 + 0x24) + *(float *)(iVar1 + 0x54)) * 0.5;
    fStack_c = *(float *)(iVar1 + 0x40) + *(float *)(iVar1 + 0x10);
    fStack_8 = *(float *)(iVar1 + 0x44) + *(float *)(iVar1 + 0x14);
    fStack_4 = *(float *)(iVar1 + 0x48) + *(float *)(iVar1 + 0x18);
    fStack_18 = fStack_c * 0.5;
    fStack_14 = fStack_8 * 0.5;
    fStack_10 = fStack_4 * 0.5;
    if (0.0 < param_2[1]) {
      fStack_28 = fVar2 * 0.8;
    }
    if (0.0 < param_2[2]) {
      fStack_28 = fVar2 * -0.25;
    }
    fStack_2c = 0.0;
    fStack_30 = -(fVar2 * 0.0033333334 * *param_2) * 0.1;
    FUN_004a2000(*(void **)(iVar5 + 0x10 + DAT_00715e50),(int *)&fStack_30);
    fStack_28 = 0.0;
    fStack_30 = -(fVar2 * *(float *)(iVar5 + 0xbc + DAT_00715e50));
    pfVar4 = (float *)FUN_004b42a0(&fStack_c,&fStack_30,
                                   DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9 +
                                   0x10);
    fStack_30 = *pfVar4;
    fStack_2c = pfVar4[1];
    fStack_28 = pfVar4[2];
    FUN_004a9830(iVar5 + DAT_00715e50);
    fStack_30 = 0.0;
    fStack_28 = 0.0;
    fStack_c = 0.0;
    fStack_8 = 0.0;
    fStack_4 = 0.0;
    fStack_2c = -fVar2 * ABS(*(float *)(iVar5 + 0xc4 + DAT_00715e50)) * 0.12;
    FUN_004a9830(iVar5 + DAT_00715e50);
  }
  return;
}


