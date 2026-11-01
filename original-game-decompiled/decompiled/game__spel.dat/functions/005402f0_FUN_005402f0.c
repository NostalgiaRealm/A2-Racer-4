
/* ==== FUN_005402f0 @ 005402f0 ==== 
 * signature: undefined __stdcall FUN_005402f0(double param_1, int * param_2)
 * body: 005402f0-00540714
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005402f0(double param_1,int *param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int *piVar7;
  float10 fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  int extraout_ECX;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint *puVar18;
  float10 fVar19;
  uint *puStack00000004;
  double in_stack_00000000;
  double dStack00000018;
  double dStack00000020;
  double dStack00000028;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  undefined **ppuStack00000058;
  double dStack00000060;
  double dStack00000068;
  double dStack00000080;
  double dStack00000088;
  undefined4 uStack00000090;
  undefined4 uStack00000094;
  double dStack000000c0;
  double dStack000000c8;
  undefined4 uStack000000d0;
  undefined4 uStack000000d4;
  undefined **ppuStack000000e0;
  double dStack000000e8;
  double dStack000000f0;
  double in_stack_00000108;
  double in_stack_00000110;
  double in_stack_00000118;
  int in_stack_0000016c;
  int in_stack_00000c54;
  undefined4 local_8;
  undefined4 uVar20;
  
  FUN_00559400();
  piVar7 = (int *)param_1._4_4_[2];
  FUN_00402d00(&stack0x00000cb8,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x00000c50,piVar7);
  piVar7 = (int *)param_2[2];
  FUN_00402d00(&stack0x000001d0,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x00000168,piVar7);
  pdVar1 = (double *)(extraout_ECX + 0x40);
  fVar2 = *(float *)(in_stack_0000016c + 0x1bc);
  fVar3 = *(float *)(in_stack_00000c54 + 0x1bc);
  puStack00000004 = (uint *)((ulonglong)in_stack_00000000 >> 0x20);
  *(undefined4 *)pdVar1 = *(undefined4 *)(extraout_ECX + 0x30);
  *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(extraout_ECX + 0x34);
  dVar4 = (double)(fVar2 + fVar3);
  pfVar12 = (float *)((*puStack00000004 & 0xffff) * 0x10 + *param_1._4_4_);
  ppuStack00000058 = &PTR_FUN_00578ccc;
  uVar20 = (undefined4)((ulonglong)(double)pfVar12[2] >> 0x20);
  uStack00000094 = uVar20;
  local_8 = SUB84((double)pfVar12[2],0);
  uStack00000090 = local_8;
  dStack00000080 = (double)*pfVar12;
  dStack00000088 = (double)pfVar12[1];
  pfVar12 = (float *)((*param_1._0_4_ & 0xffff) * 0x10 + *param_2);
  dVar5 = (double)pfVar12[2];
  local_8 = SUB84(dVar5,0);
  uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
  uStack000000d0 = local_8;
  dStack000000c0 = (double)*pfVar12;
  dStack000000c8 = (double)pfVar12[1];
  uStack000000d4 = uVar20;
  _local_8 = dVar5;
  FUN_00509c90(param_1._0_4_,(int *)param_2[1],(double *)&stack0x000000a0);
  FUN_004f94a0((double *)&stack0x000000a0);
  dStack00000060 = *(double *)(extraout_ECX + 0x10);
  dStack00000068 = 1.0 / dStack00000060;
  fVar2 = *(float *)(*(int *)(extraout_ECX + 0x20) + 0x50);
  dVar5 = (double)(fVar2 + *(float *)(&DAT_0074d528 +
                                     (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff
                                     ) * 4));
  dVar6 = (double)(fVar2 * 0.5 + _DAT_0074d520);
  uVar20 = (undefined4)((ulonglong)dVar6 >> 0x20);
  uVar10 = uVar20;
  local_8 = SUB84(dVar6,0);
  param_1._4_4_ = (int *)((ulonglong)dVar5 >> 0x20);
  param_1._0_4_ = SUB84(dVar5,0);
  uVar11 = local_8;
  _local_8 = dVar6;
  iVar13 = FUN_00568e60(&stack0x00000058,param_1._0_4_,param_1._4_4_,uVar11,uVar10,
                        *(undefined4 *)(extraout_ECX + 0x28),*(undefined4 *)(extraout_ECX + 0x2c),
                        *(undefined4 *)pdVar1,*(undefined4 *)(extraout_ECX + 0x44),
                        (undefined4 *)&stack0x00000c50,(undefined4 *)&stack0x00000168,
                        (double *)&stack0x00000000,pdVar1);
  if (iVar13 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x20;
  }
  ppuStack000000e0 = &PTR_FUN_00578cc8;
  puVar16 = (undefined4 *)&stack0x000000a0;
  puVar17 = (undefined4 *)&stack0x00000128;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  iVar13 = *(int *)(extraout_ECX + 0x20);
  uVar15 = *(uint *)(iVar13 + 0x14) >> 0x16 & 0xff;
  if (*(float *)(iVar13 + 0x54) <= *(float *)(&DAT_0074d528 + uVar15 * 4)) {
    fVar2 = *(float *)(iVar13 + 0x54);
  }
  else {
    fVar2 = *(float *)(&DAT_0074d528 + uVar15 * 4);
  }
  param_2 = SUB84(dVar4,0);
  dVar6 = (double)(((*(float *)(iVar13 + 0x50) * 0.1 + fVar2) *
                   -(_DAT_0074d644 * *(float *)(*(int *)(param_2[3] + 0xa4) + 0x48))) /
                  *(float *)(&DAT_0074d528 + uVar15 * 4));
  FUN_004faec0((void *)(param_2[2] + 0x30),(double *)&stack0x00000128,(double *)&stack0x00000148);
  FUN_004faf30((void *)(param_1._4_4_[2] + 0x30),(double *)&stack0x00000148,&stack0x00000038);
  dStack000000e8 = dVar4 + 1e-19;
  puStack00000004 = (uint *)((ulonglong)dVar6 >> 0x20);
  dStack000000f0 = 1.0 / dStack000000e8;
  pfVar12 = (float *)((*puStack00000004 & 0xffff) * 0x10 + *param_1._4_4_);
  dVar4 = (*(double *)(extraout_ECX + 0x40) - *(double *)(extraout_ECX + 0x28)) * dStack000000e8;
  puVar18 = (uint *)((int *)(*(int *)(&DAT_005b99cc + ((uint)puStack00000004 & 0xc)) +
                            (int)puStack00000004) +
                    ((*(int *)(*(int *)(&DAT_005b99cc + ((uint)puStack00000004 & 0xc)) +
                              (int)puStack00000004) << 1) >> 0x11));
  param_1 = dVar5;
  while( true ) {
    piVar7 = param_1._4_4_;
    param_1 = (double)(CONCAT44(param_1._4_4_,puVar18) & 0xffffffff0000000c);
    pfVar14 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)puVar18 & 0xc)) + (int)puVar18) &
                        0xffff) * 0x10 + *piVar7);
    fVar3 = *pfVar14 - *pfVar12;
    dStack00000018 = (double)fVar3;
    fVar2 = pfVar14[1] - pfVar12[1];
    dStack00000020 = (double)fVar2;
    fVar9 = pfVar14[2] - pfVar12[2];
    dStack00000028 = (double)fVar9;
    _local_8 = (double)(fVar3 * (float)in_stack_00000038 +
                       (float)in_stack_00000040 * fVar2 + (float)in_stack_00000048 * fVar9);
    fVar19 = FUN_004f9200(fVar9 * fVar9 + fVar2 * fVar2 + fVar3 * fVar3);
    fVar8 = (float10)_local_8;
    _local_8 = (double)(fVar19 * fVar8);
    if (fVar19 * fVar8 < (float10)dVar4) {
      in_stack_00000108 = (double)((float10)dStack00000018 * fVar19);
      in_stack_00000110 = (double)((float10)dStack00000020 * fVar19);
      in_stack_00000118 = (double)((float10)dStack00000028 * fVar19);
      iVar13 = FUN_00568c50(&stack0x000000e0,SUB84(dVar6,0),puStack00000004,
                            *(undefined4 *)(extraout_ECX + 0x28),
                            *(undefined4 *)(extraout_ECX + 0x2c),*(double *)(extraout_ECX + 0x40),0,
                            (undefined4 *)&stack0x00000c50,(undefined4 *)&stack0x00000168,
                            (double *)&local_8,(undefined4 *)(extraout_ECX + 0x40));
      if (iVar13 != 0) {
        *(undefined4 *)(extraout_ECX + 0x38) = 0x21;
      }
    }
    if (puVar18 == puStack00000004) break;
    puVar18 = (uint *)((int *)(*(int *)(&DAT_005b99cc + (int)param_1._0_4_) + (int)puVar18) +
                      ((*(int *)(*(int *)(&DAT_005b99cc + (int)param_1._0_4_) + (int)puVar18) << 1)
                      >> 0x11));
  }
  return;
}


