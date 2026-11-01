
/* ==== FUN_004ab8a0 @ 004ab8a0 ==== 
 * signature: undefined __fastcall FUN_004ab8a0(int param_1)
 * body: 004ab8a0-004aba2c
 */

void __fastcall FUN_004ab8a0(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  unkbyte10 extraout_ST0;
  float10 fVar8;
  longlong lVar9;
  float local_100 [16];
  float local_c0 [16];
  float local_80 [16];
  float local_40 [16];
  
  fVar1 = *(float *)(param_1 + 0x58);
  fVar2 = *(float *)(param_1 + 0x60);
  fVar7 = SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2);
  fVar1 = (float)((float10)fVar1 / fVar7);
  fpatan((float10)fVar2 / fVar7,(float10)fVar1);
  lVar9 = __ftol();
  fVar8 = (float10)fpatan((float10)fVar1,extraout_ST0);
  *(int *)(param_1 + 0x68) = (int)lVar9;
  fVar7 = (float10)*(float *)(param_1 + 0x58);
  fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x5c),
                          SQRT((float10)*(float *)(param_1 + 0x60) *
                               (float10)*(float *)(param_1 + 0x60) + fVar7 * fVar7));
  lVar9 = __ftol();
  *(int *)(param_1 + 100) = (int)lVar9;
  pfVar3 = (float *)FUN_004b3de0(local_100,-(float)fVar8);
  pfVar5 = local_c0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar3 = (float *)FUN_004b3de0(local_100,(float)fVar8);
  pfVar5 = local_80;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar3 = (float *)FUN_004b3d80(local_100,(float)fVar7);
  pfVar5 = (float *)(param_1 + 0xac);
  pfVar6 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar3 = (float *)&DAT_0073b538;
  pfVar6 = pfVar5;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar3 = (float *)FUN_004b4110(local_100,pfVar5,local_c0);
  pfVar6 = pfVar5;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar3 = (float *)FUN_004b4110(local_100,pfVar5,local_40);
  pfVar6 = pfVar5;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar3 = (float *)FUN_004b4110(local_100,pfVar5,local_80);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  return;
}


