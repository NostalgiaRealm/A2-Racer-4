
/* ==== FUN_00541610 @ 00541610 ==== 
 * signature: undefined __stdcall FUN_00541610(int param_1, undefined8 param_2, undefined * * param_3, undefined4 param_4, double param_5, double param_6)
 * body: 00541610-00541a12
 */

/* WARNING: Removing unreachable block (ram,0x005419e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541610(int param_1,undefined8 param_2,undefined **param_3,undefined4 param_4,
                 double param_5,double param_6)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  undefined **ppuVar9;
  int iVar10;
  int iVar11;
  int extraout_ECX;
  int iVar12;
  float *pfVar13;
  float10 fVar14;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 uStack0000004c;
  double dStack00000058;
  double dStack00000060;
  double dStack00000068;
  double dStack00000078;
  double dStack00000080;
  double dStack00000088;
  double dStack00000098;
  double dStack000000a0;
  
  FUN_00559400();
  FUN_00402d00(&stack0x00000bf8,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x00000b90,param_2._4_4_);
  ppuVar9 = param_3;
  piVar5 = (int *)param_3[2];
  FUN_00402d00(&stack0x00000110,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x000000a8,piVar5);
  pdVar1 = (double *)(extraout_ECX + 0x40);
  param_3 = &PTR_DAT_00578ce0;
  puVar6 = *(uint **)(param_1 + 0xa4);
  iVar11 = *(int *)(ppuVar9[3] + 0xa4);
  *(undefined4 *)pdVar1 = *(undefined4 *)(extraout_ECX + 0x30);
  *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(extraout_ECX + 0x34);
  iVar10 = *(int *)(extraout_ECX + 0x20);
  iVar12 = (*puVar6 & 0xffff) * 0x10;
  pfVar13 = (float *)(&DAT_0053ff50 + iVar12);
  uStack00000038 = 0;
  uStack0000003c = 0;
  uStack00000040 = 0;
  dStack00000058 = (double)*pfVar13;
  dStack00000060 = (double)*(float *)(&DAT_0053ff54 + iVar12);
  dStack00000068 = (double)*(float *)(FUN_0053ff58 + iVar12);
  uStack00000044 = 0;
  uStack00000048 = 0;
  uStack0000004c = 0;
  dStack00000088 = (double)(*(float *)(iVar10 + 0x70) * -1.0);
  dStack00000078 = (double)(*(float *)(iVar10 + 0x68) * -1.0);
  dStack00000080 = (double)(*(float *)(iVar10 + 0x6c) * -1.0);
  param_5 = *(double *)(extraout_ECX + 0x10);
  param_6 = 1.0 / param_5;
  dVar3 = (double)(*(float *)(iVar10 + 0x50) * 0.5 + _DAT_0074d520);
  dVar4 = (double)(*(float *)(iVar10 + 0x50) +
                  *(float *)(&DAT_0074d528 + (*(uint *)(iVar10 + 0x14) >> 0x16 & 0xff) * 4));
  iVar10 = FUN_00568e60(&param_3,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0),
                        (int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(extraout_ECX + 0x28),
                        *(undefined4 *)(extraout_ECX + 0x2c),*(undefined4 *)(extraout_ECX + 0x30),
                        *(undefined4 *)(extraout_ECX + 0x34),(undefined4 *)&stack0x00000b90,
                        (undefined4 *)&stack0x000000a8,(double *)0x0,pdVar1);
  if (iVar10 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x10;
  }
  dVar3 = (*pdVar1 - *(double *)(extraout_ECX + 0x28)) * *(double *)(extraout_ECX + 0x18) +
          (double)*(float *)(*(int *)(extraout_ECX + 0x20) + 0x54);
  fVar2 = (float)puVar6[0x6e];
  fVar14 = FUN_004f9440(pfVar13);
  fVar14 = (float10)*(float *)(iVar11 + 0x1bc) * (float10)dVar3 +
           fVar14 * (float10)*(float *)(iVar11 + 0x1bc) + (float10)*(float *)(iVar11 + 0x1b8) +
           (float10)fVar2;
  dVar4 = (double)*(float *)(&DAT_0074d528 +
                            (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4) *
          (double)*(float *)(&DAT_0074d528 +
                            (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4);
  if (dVar3 * dVar3 < dVar4) {
    dVar4 = dVar3 * dVar3;
  }
  param_2._0_4_ = SUB84((double)fVar2,0);
  dStack000000a0 = -(dVar4 * (double)*(float *)(*(int *)(param_3[3] + 0xa4) + 0x48));
  dStack00000058 = (double)*pfVar13;
  dStack00000060 = (double)*(float *)(&DAT_0053ff54 + iVar12);
  dStack00000068 = (double)*(float *)(FUN_0053ff58 + iVar12);
  param_5 = (double)fVar14;
  param_6 = (double)((float10)1.0 / fVar14);
  piVar5 = (int *)(*(int *)(&DAT_005b99cc + ((uint)param_2 & 0xc)) + (uint)param_2) +
           ((*(int *)(*(int *)(&DAT_005b99cc + ((uint)param_2 & 0xc)) + (uint)param_2) << 1) >> 0x11
           );
  uStack0000004c = 0;
  uStack00000048 = 0;
  uStack00000044 = 0;
  uStack00000040 = 0;
  uStack0000003c = 0;
  uStack00000038 = 0;
  param_3 = &PTR_FUN_00578cdc;
  iVar11 = (*(uint *)(*(int *)(&DAT_005b99bc + ((uint)piVar5 & 0xc)) + (int)piVar5) & 0xffff) * 0x10
  ;
  fVar2 = *(float *)(iVar11 + 0x53ffe4) - *(float *)(&DAT_0053ff54 + iVar12);
  fVar8 = *(float *)(FUN_0053ffe8 + iVar11) - *(float *)(FUN_0053ff58 + iVar12);
  fVar7 = *(float *)(FUN_0053ffe0 + iVar11) - *pfVar13;
  dStack00000078 = (double)fVar7;
  dStack00000080 = (double)fVar2;
  dStack00000088 = (double)fVar8;
  fVar2 = fVar2 * fVar2 + fVar8 * fVar8 + fVar7 * fVar7;
  dStack00000098 = (double)fVar2;
  fVar14 = FUN_004f9200(fVar2);
  dStack00000088 = (double)((float10)dStack00000088 * fVar14);
  dStack00000078 = (double)((float10)dStack00000078 * fVar14);
  dStack00000080 = (double)((float10)dStack00000080 * fVar14);
  dVar3 = (double)(fVar14 * (float10)dStack00000098 * (float10)dStack000000a0);
  iVar11 = FUN_00568c50(&param_3,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),
                        *(undefined4 *)(extraout_ECX + 0x28),*(undefined4 *)(extraout_ECX + 0x2c),
                        *pdVar1,0,(undefined4 *)&stack0x00000b90,(undefined4 *)&stack0x000000a8,
                        (double *)0x0,(undefined4 *)pdVar1);
  if (iVar11 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x11;
  }
  return;
}


