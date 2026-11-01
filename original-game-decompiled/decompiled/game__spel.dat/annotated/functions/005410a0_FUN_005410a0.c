
/* ==== FUN_005410a0 @ 005410a0 ==== 
 * signature: undefined __stdcall FUN_005410a0(uint * param_1, double * param_2, double param_3, int param_4, int * param_5, double param_6, undefined4 param_7, float * param_8, float * param_9, undefined4 * param_10, undefined4 * param_11, int * param_12, undefined4 param_13, uint * param_14, int * param_15, int param_16, undefined * * param_17, undefined4 param_18, double param_19, double param_20)
 * body: 005410a0-00541601
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005410a0(uint *param_1,double *param_2,double param_3,int param_4,int *param_5,
                 double param_6,undefined4 param_7,float *param_8,float *param_9,
                 undefined4 *param_10,undefined4 *param_11,int *param_12,undefined4 param_13,
                 uint *param_14,int *param_15,int param_16,undefined **param_17,undefined4 param_18,
                 double param_19,double param_20)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int extraout_ECX;
  int iVar11;
  undefined1 *puVar12;
  float *pfVar13;
  float10 fVar14;
  uint *puStack00000004;
  undefined8 in_stack_00000000;
  double dStack00000078;
  double dStack00000080;
  double dStack00000088;
  double dStack00000098;
  double dStack000000a0;
  double dStack000000a8;
  double dStack000000b8;
  double dStack000000c0;
  double dStack000000c8;
  double dStack000000d8;
  double dStack000000e0;
  double dStack000000e8;
  double dStack000000f0;
  int local_8;
  
  FUN_00559400();
  puVar12 = &stack0x00000160;
  piVar5 = *(int **)(param_2 + 1);
  iVar11 = 0x15;
  do {
    FUN_0043e110(puVar12);
    puVar12 = puVar12 + 0x80;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  FUN_00542c90(&stack0x000000f8,piVar5);
  puVar12 = &stack0x00000c48;
  local_8 = 0x15;
  piVar5 = *(int **)((int)param_3._0_4_ + 8);
  do {
    FUN_0043e110(puVar12);
    puVar12 = puVar12 + 0x80;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_00542c90(&stack0x00000be0,piVar5);
  pdVar1 = (double *)(extraout_ECX + 0x40);
  param_17 = &PTR_DAT_00578ce0;
  iVar11 = *(int *)(*(int *)((int)param_2 + 0xc) + 0xa4);
  piVar5 = *(int **)(param_3._0_4_[3] + 0xa4);
  puStack00000004 = (uint *)((ulonglong)in_stack_00000000 >> 0x20);
  *(undefined4 *)pdVar1 = *(undefined4 *)(extraout_ECX + 0x30);
  *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(extraout_ECX + 0x34);
  pfVar13 = (float *)((*puStack00000004 & 0xffff) * 0x10 + *piVar5);
  dStack00000078 = (double)*pfVar13;
  dStack00000080 = (double)pfVar13[1];
  pfVar8 = (float *)((*param_1 & 0xffff) * 0x10 + *param_3._0_4_);
  dStack00000088 = (double)pfVar13[2];
  dStack00000098 = (double)*pfVar8;
  dStack000000a0 = (double)pfVar8[1];
  iVar9 = *(int *)(extraout_ECX + 0x20);
  dStack000000a8 = (double)pfVar8[2];
  param_3 = (double)(*(float *)(iVar9 + 0x70) * -1.0);
  dStack000000b8 = (double)(*(float *)(iVar9 + 0x68) * -1.0);
  dStack000000c0 = (double)(*(float *)(iVar9 + 0x6c) * -1.0);
  param_19 = *(double *)(extraout_ECX + 0x10);
  param_20 = 1.0 / param_19;
  dVar3 = (double)(*(float *)(iVar9 + 0x50) * 0.5 + _DAT_0074d520);
  dVar4 = (double)(*(float *)(iVar9 + 0x50) +
                  *(float *)(&DAT_0074d528 + (*(uint *)(iVar9 + 0x14) >> 0x16 & 0xff) * 4));
  param_8 = pfVar13;
  param_9 = pfVar8;
  dStack000000c8 = param_3;
  iVar9 = FUN_00568e60(&param_17,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0),
                       (int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(extraout_ECX + 0x28),
                       *(undefined4 *)(extraout_ECX + 0x2c),*(undefined4 *)(extraout_ECX + 0x30),
                       *(undefined4 *)(extraout_ECX + 0x34),(undefined4 *)&stack0x000000f8,
                       (undefined4 *)&stack0x00000be0,(double *)0x0,pdVar1);
  if (iVar9 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x10;
  }
  dVar3 = (*pdVar1 - *(double *)(extraout_ECX + 0x28)) * *(double *)(extraout_ECX + 0x18) +
          (double)*(float *)(*(int *)(extraout_ECX + 0x20) + 0x54);
  fVar14 = FUN_004f9440(pfVar13);
  param_3 = (double)(fVar14 * (float10)*(float *)(iVar11 + 0x1bc) +
                    (float10)*(float *)(iVar11 + 0x1b8));
  fVar14 = FUN_004f9440(pfVar8);
  fVar14 = fVar14 * (float10)(float)piVar5[0x6f] + (float10)(float)piVar5[0x6e];
  dStack000000e8 =
       (double)((float10)(float)piVar5[0x6f] * (float10)dVar3 + fVar14 + (float10)param_3);
  param_16 = (int)param_3._0_4_;
  iVar9 = *(int *)(*(int *)((int)param_3._0_4_ + 0xc) + 0xa4);
  dStack000000f0 =
       (double)((float10)*(float *)(iVar11 + 0x1bc) * (float10)dVar3 + fVar14 + (float10)param_3);
  if (*(float *)(*(int *)(piVar5[3] + 0xa4) + 4) <= *(float *)(iVar9 + 4)) {
    fVar2 = *(float *)(iVar9 + 4);
  }
  else {
    fVar2 = *(float *)(*(int *)(piVar5[3] + 0xa4) + 4);
  }
  dVar4 = (double)*(float *)(&DAT_0074d528 +
                            (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4) *
          (double)*(float *)(&DAT_0074d528 +
                            (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4);
  param_6 = dVar3 * dVar3;
  if (param_6 < dVar4) {
    dVar4 = param_6;
  }
  param_15 = piVar5;
  param_2 = &stack0x000000e8;
  puStack00000004 = (uint *)((ulonglong)dVar3 >> 0x20);
  param_3 = (double)CONCAT44(&stack0x00000be0,&stack0x000000f8);
  param_13 = puStack00000004;
  param_14 = param_1;
  local_8 = 0;
  param_4 = 0;
  dStack000000e0 = (dVar4 * -0.5) / (double)fVar2;
  do {
    piVar5 = *(int **)((int)&param_14 + local_8);
    param_17 = &PTR_FUN_00578cdc;
    pfVar8 = *(float **)((int)&param_8 + param_4);
    pfVar13 = *(float **)((int)&param_9 + local_8);
    dStack00000078 = (double)*pfVar8;
    dStack00000088 = (double)pfVar8[2];
    dStack00000080 = (double)pfVar8[1];
    dStack00000098 = (double)*pfVar13;
    dStack000000a0 = (double)pfVar13[1];
    param_19 = *param_2;
    dStack000000a8 = (double)pfVar13[2];
    param_20 = 1.0 / *param_2;
    param_5 = (int *)(*(int *)(&DAT_005b99cc + ((uint)piVar5 & 0xc)) + (int)piVar5) +
              ((*(int *)(*(int *)(&DAT_005b99cc + ((uint)piVar5 & 0xc)) + (int)piVar5) << 1) >> 0x11
              );
    param_12 = *(int **)((int)&param_16 + local_8);
    param_11 = *(undefined4 **)((int)&param_3 + local_8 + 4);
    param_10 = *(undefined4 **)((int)&param_3 + param_4);
    while( true ) {
      uVar10 = (uint)param_5 & 0xc;
      pfVar8 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + uVar10) + (int)param_5) & 0xffff) *
                         0x10 + *param_12);
      fVar7 = pfVar8[1] - pfVar13[1];
      fVar6 = pfVar8[2] - pfVar13[2];
      fVar2 = *pfVar8 - *pfVar13;
      dStack000000b8 = (double)fVar2;
      dStack000000c0 = (double)fVar7;
      dStack000000c8 = (double)fVar6;
      fVar2 = fVar7 * fVar7 + fVar6 * fVar6 + fVar2 * fVar2;
      dStack000000d8 = (double)fVar2;
      fVar14 = FUN_004f9200(fVar2);
      param_6 = (double)((float10)dStack000000c8 * fVar14);
      dStack000000b8 = (double)((float10)dStack000000b8 * fVar14);
      dStack000000c0 = (double)((float10)dStack000000c0 * fVar14);
      dVar3 = (double)(fVar14 * (float10)dStack000000d8 * (float10)dStack000000e0);
      dStack000000c8 = param_6;
      iVar11 = FUN_00568c50(&param_17,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
                            *(undefined4 *)(extraout_ECX + 0x28),
                            *(undefined4 *)(extraout_ECX + 0x2c),*pdVar1,0,param_10,param_11,
                            (double *)0x0,(undefined4 *)pdVar1);
      if (iVar11 != 0) {
        *(undefined4 *)(extraout_ECX + 0x38) = 0x11;
      }
      if (param_5 == piVar5) break;
      param_5 = (int *)(*(int *)(&DAT_005b99cc + uVar10) + (int)param_5) +
                ((*(int *)(*(int *)(&DAT_005b99cc + uVar10) + (int)param_5) << 1) >> 0x11);
    }
    param_2 = param_2 + 1;
    local_8 = local_8 + -4;
    param_4 = param_4 + 4;
  } while (-8 < local_8);
  return;
}


