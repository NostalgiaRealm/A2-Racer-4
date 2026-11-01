
/* ==== FUN_00540a40 @ 00540a40 ==== 
 * signature: undefined __stdcall FUN_00540a40(undefined4 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5, undefined1 * param_6, undefined1 * param_7, undefined1 * param_8, undefined8 * param_9, undefined8 * param_10, undefined8 * param_11, undefined8 * param_12, int * param_13, int * param_14, uint * param_15, uint * param_16, double param_17, undefined4 param_18, undefined4 param_19, int * param_20, int param_21, int * param_22, int param_23)
 * body: 00540a40-00541097
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540a40(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,
                 undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                 int *param_13,int *param_14,uint *param_15,uint *param_16,double param_17,
                 undefined4 param_18,undefined4 param_19,int *param_20,int param_21,int *param_22,
                 int param_23)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int *piVar5;
  double *pdVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *extraout_ECX;
  float *pfVar10;
  undefined1 *puVar11;
  float *pfVar12;
  bool bVar13;
  int *piStack00000078;
  int *piStack0000007c;
  int iStack00000080;
  int iStack00000084;
  undefined **ppuStack00000098;
  double dStack000000a0;
  double dStack000000a8;
  double dStack000000c0;
  double dStack000000c8;
  undefined4 uStack000000d0;
  undefined4 uStack000000d4;
  double dStack000000e0;
  double dStack000000e8;
  undefined4 uStack000000f0;
  undefined4 uStack000000f4;
  double dStack00000100;
  double dStack00000108;
  undefined4 uStack00000110;
  undefined4 uStack00000114;
  double dStack00000120;
  double dStack00000128;
  undefined4 uStack00000130;
  undefined4 uStack00000134;
  undefined4 uStack00000140;
  undefined4 uStack00000144;
  undefined **ppuStack00000148;
  double dStack00000150;
  double dStack00000158;
  double dStack00000170;
  double dStack00000178;
  undefined4 uStack00000180;
  undefined4 uStack00000184;
  undefined **ppuStack000001b0;
  double dStack000001b8;
  double dStack000001c0;
  double dStack000001d8;
  double dStack000001e0;
  undefined8 uStack000001e8;
  undefined4 local_8;
  
  FUN_00559400();
  piVar5 = (int *)param_2._4_4_[2];
  puVar11 = &stack0x00000d68;
  param_2._0_4_ = (uint *)0x15;
  do {
    FUN_0043e110(puVar11);
    puVar11 = puVar11 + 0x80;
    param_2._0_4_ = (uint *)((int)(uint *)param_2 + -1);
  } while ((uint *)param_2 != (uint *)0x0);
  FUN_00542c90(&stack0x00000d00,piVar5);
  param_2._0_4_ = (uint *)&stack0x00000280;
  param_1 = (int *)0x15;
  piVar5 = (int *)extraout_ECX[2];
  do {
    FUN_0043e110((uint *)param_2);
    param_2._0_4_ = (uint *)((int)(uint *)param_2 + 0x80);
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  FUN_00542c90(&stack0x00000218,piVar5);
  ppuStack00000098 = &PTR_FUN_00578cd8;
  fVar2 = *(float *)(*(int *)(param_2._4_4_[3] + 0xa4) + 0x1bc);
  fVar3 = *(float *)(*(int *)(extraout_ECX[3] + 0xa4) + 0x1bc);
  extraout_ECX[0x10] = extraout_ECX[0xc];
  extraout_ECX[0x11] = extraout_ECX[0xd];
  dVar4 = (double)(fVar2 + fVar3);
  pfVar10 = (float *)((_DAT_00000000 & 0xffff) * 0x10 + *param_2._4_4_);
  pfVar7 = (float *)((*_DAT_005b99bc & 0xffff) * 0x10 + *param_2._4_4_);
  param_2._0_4_ = SUB84(dVar4,0);
  uStack000000f4 = (undefined4)((ulonglong)(double)(pfVar7[2] - pfVar10[2]) >> 0x20);
  local_8 = SUB84((double)(pfVar7[2] - pfVar10[2]),0);
  dStack000000e0 = (double)(*pfVar7 - *pfVar10);
  dStack000000e8 = (double)(pfVar7[1] - pfVar10[1]);
  pfVar12 = (float *)((*(uint *)param_2 & 0xffff) * 0x10 + *extraout_ECX);
  pfVar7 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)(uint *)param_2 & 0xc)) +
                               (int)(uint *)param_2) & 0xffff) * 0x10 + *extraout_ECX);
  uStack000000f0 = local_8;
  FUN_004f94a0(&stack0x000000e0);
  local_8 = SUB84((double)(pfVar7[2] - pfVar12[2]),0);
  uStack00000134 = (undefined4)((ulonglong)(double)(pfVar7[2] - pfVar12[2]) >> 0x20);
  uStack00000130 = local_8;
  dStack00000120 = (double)(*pfVar7 - *pfVar12);
  dStack00000128 = (double)(pfVar7[1] - pfVar12[1]);
  FUN_004f94a0(&stack0x00000120);
  dStack000000c0 = (double)*pfVar10;
  local_8 = SUB84((double)pfVar10[2],0);
  uStack000000d4 = (undefined4)((ulonglong)(double)pfVar10[2] >> 0x20);
  dStack000000c8 = (double)pfVar10[1];
  uStack000000d0 = local_8;
  dStack00000100 = (double)*pfVar12;
  local_8 = SUB84((double)pfVar12[2],0);
  uStack00000114 = (undefined4)((ulonglong)(double)pfVar12[2] >> 0x20);
  dStack00000108 = (double)pfVar12[1];
  dStack000000a0 = *(double *)(extraout_ECX + 4);
  dStack000000a8 = 1.0 / dStack000000a0;
  uStack00000110 = local_8;
  FUN_004faec0((void *)(extraout_ECX[2] + 0x30),&stack0x00000120,(double *)&stack0x00000078);
  param_2._4_4_ = (int *)((ulonglong)dVar4 >> 0x20);
  FUN_004faec0((void *)(*(int *)((int)param_2._4_4_ + 8) + 0x30),&stack0x000000e0,
               (double *)&param_20);
  FUN_004f99d0(&param_13,(double *)&param_20,(double *)&stack0x00000078);
  iVar8 = extraout_ECX[8];
  bVar13 = -(*(float *)(iVar8 + 0x68) * (float)(double)CONCAT44(param_14,param_13) +
            *(float *)(iVar8 + 0x70) * (float)param_17 +
            *(float *)(iVar8 + 0x6c) * (float)(double)CONCAT44(param_16,param_15)) <= 0.0;
  if (bVar13) {
    uStack00000144 = 0x3ff00000;
  }
  else {
    uStack00000144 = 0xbff00000;
  }
  uStack00000140 = 0;
  param_1 = (int *)(uint)bVar13;
  pdVar1 = (double *)(extraout_ECX + 0x10);
  iVar8 = FUN_00568e60(&stack0x00000098,
                       SUB84((double)*(float *)(&DAT_0074d528 +
                                               (*(uint *)(iVar8 + 0x14) >> 0x16 & 0xff) * 4),0),
                       (int)((ulonglong)
                             (double)*(float *)(&DAT_0074d528 +
                                               (*(uint *)(iVar8 + 0x14) >> 0x16 & 0xff) * 4) >> 0x20
                            ),SUB84((double)_DAT_0074d520,0),
                       (int)((ulonglong)(double)_DAT_0074d520 >> 0x20),extraout_ECX[10],
                       extraout_ECX[0xb],*(undefined4 *)pdVar1,extraout_ECX[0x11],
                       (undefined4 *)&stack0x00000d00,(undefined4 *)&stack0x00000218,(double *)0x0,
                       pdVar1);
  if ((double)iVar8 != 0.0) {
    extraout_ECX[0xe] = 0x40;
  }
  dStack000001d8 = dStack000000e0;
  dStack000001e0 = dStack000000e8;
  uStack000001e8 = CONCAT44(uStack000000f4,uStack000000f0);
  dStack000001b8 = dVar4 + dVar4 + 1e-19;
  dStack000001c0 = 1.0 / dStack000001b8;
  ppuStack000001b0 = &PTR_FUN_00578cd4;
  iVar8 = FUN_00568c50(&stack0x000001b0,0x4fb6d2ac,0x3bfd83c9,extraout_ECX[10],extraout_ECX[0xb],
                       *pdVar1,0,(undefined4 *)&stack0x00000d00,(undefined4 *)&stack0x00000218,
                       (double *)0x0,(undefined4 *)pdVar1);
  if ((double)iVar8 != 0.0) {
    extraout_ECX[0xe] = 0x41;
  }
  piStack00000078 = extraout_ECX;
  param_14 = param_1;
  piStack0000007c = extraout_ECX;
  ppuStack00000148 = &PTR_FUN_00578cd0;
  dStack00000150 = dVar4 + 1e-19;
  param_13 = param_1 + ((*param_1 << 1) >> 0x11);
  param_16 = (uint *)param_2;
  param_9 = &stack0x00000120;
  param_10 = &stack0x00000120;
  param_12 = &stack0x000000e0;
  param_15 = (uint *)param_2 + ((int)(*(uint *)param_2 << 1) >> 0x11);
  param_20 = param_1;
  param_21 = 1 - (int)param_1;
  param_22 = param_1;
  param_23 = 1 - (int)param_1;
  param_11 = &stack0x000000e0;
  param_5 = &stack0x00000218;
  param_7 = &stack0x00000d00;
  iVar8 = 0;
  param_6 = &stack0x00000218;
  param_8 = &stack0x00000d00;
  iStack00000080 = (int)param_2._4_4_;
  iStack00000084 = (int)param_2._4_4_;
  param_2._0_4_ = (uint *)0x0;
  dStack00000158 = 1.0 / (dVar4 + 1e-19);
  do {
    pdVar6 = *(double **)((int)&param_9 + iVar8);
    if (*(int *)((int)&param_20 + iVar8) == 0) {
      dVar4 = pdVar6[2] * -1.0;
      _uStack00000180 = dVar4;
      dStack00000170 = *pdVar6 * -1.0;
      dStack00000178 = pdVar6[1] * -1.0;
    }
    else {
      dVar4 = pdVar6[2];
      dStack00000170 = *pdVar6;
      dStack00000178 = pdVar6[1];
      uStack00000180 = *(undefined4 *)(pdVar6 + 2);
      uStack00000184 = *(undefined4 *)((int)pdVar6 + 0x14);
    }
    _uStack00000180 = dVar4;
    FUN_00509c90(*(uint **)((int)&param_13 + iVar8),
                 *(int **)(*(int *)((int)&stack0x00000084 + (int)(uint *)param_2) + 4),
                 (double *)&stack0x00000190);
    FUN_004f94a0((double *)&stack0x00000190);
    dVar4 = (double)-(_DAT_0074d644 *
                     *(float *)((*(undefined4 **)((int)&param_5 + iVar8))[1] + 0x48));
    iVar9 = FUN_00568c50(&stack0x00000148,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
                         extraout_ECX[10],extraout_ECX[0xb],*pdVar1,0,
                         *(undefined4 **)((int)&param_5 + iVar8),
                         *(undefined4 **)((int)&param_8 + (int)(uint *)param_2),(double *)0x0,
                         (undefined4 *)pdVar1);
    if (iVar9 != 0) {
      extraout_ECX[0xe] = 0x42;
    }
    iVar8 = iVar8 + 4;
    param_2._0_4_ = (uint *)((int)(uint *)param_2 + -4);
  } while (-0xd < (int)(uint *)param_2);
  return;
}


