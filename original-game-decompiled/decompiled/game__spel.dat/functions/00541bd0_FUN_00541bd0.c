
/* ==== FUN_00541bd0 @ 00541bd0 ==== 
 * signature: undefined __stdcall FUN_00541bd0(double param_1, undefined8 param_2)
 * body: 00541bd0-005423a6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541bd0(double param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int extraout_ECX;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float10 fVar16;
  double dStack00000014;
  int iStack00000028;
  int *piStack0000002c;
  int iStack00000030;
  int *piStack00000034;
  int *piStack00000038;
  undefined **ppuStack0000003c;
  double dStack00000044;
  double dStack0000004c;
  double dStack00000064;
  double dStack0000006c;
  double in_stack_00000074;
  float fStack0000007c;
  float fStack00000080;
  double in_stack_00000084;
  double dStack0000008c;
  double dStack00000094;
  undefined4 uStack0000009c;
  undefined4 uStack000000a0;
  double in_stack_000000a4;
  double in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  double dStack000000c4;
  double dStack000000cc;
  undefined4 uStack000000d4;
  undefined4 uStack000000d8;
  double in_stack_000000e4;
  double in_stack_000000ec;
  undefined4 in_stack_000000f4;
  undefined4 in_stack_000000f8;
  double dStack00000104;
  double dStack0000010c;
  double dStack00000114;
  double dStack0000011c;
  double dStack0000012c;
  double in_stack_00000134;
  double in_stack_0000013c;
  double in_stack_00000144;
  uint *local_8;
  
  FUN_00559400();
  piVar11 = (int *)((int *)param_2)[2];
  FUN_00402d00(&stack0x00000ce4,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x00000c7c,piVar11);
  piVar11 = (int *)param_2._4_4_[2];
  FUN_00402d00(&stack0x000001fc,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x00000194,piVar11);
  ppuStack0000003c = &PTR_FUN_00578cf4;
  iStack00000030 = *(int *)(((int *)param_2)[3] + 0xa4);
  iVar12 = *(int *)(param_2._4_4_[3] + 0xa4);
  fVar1 = *(float *)(iStack00000030 + 0x1bc);
  fVar2 = *(float *)(iVar12 + 0x1bc);
  *(undefined4 *)(extraout_ECX + 0x40) = *(undefined4 *)(extraout_ECX + 0x30);
  *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(extraout_ECX + 0x34);
  pfVar14 = (float *)((*param_1._0_4_ & 0xffff) * 0x10 + *(int *)param_2);
  dStack0000012c = (double)(fVar1 + fVar2);
  pfVar9 = (float *)((*param_1._4_4_ & 0xffff) * 0x10 + *param_2._4_4_);
  piStack0000002c = (int *)(&DAT_005b99bc + ((uint)param_1._4_4_ & 0xc));
  dStack0000006c = *(double *)pfVar14;
  in_stack_00000074 = (double)CONCAT44(in_stack_00000074._4_4_,pfVar14[2]);
  fStack00000080 = pfVar9[1];
  fStack0000007c = *pfVar9;
  pfVar13 = (float *)((*(uint *)((int)param_1._4_4_ + *piStack0000002c) & 0xffff) * 0x10 +
                     *param_2._4_4_);
  in_stack_00000084 = (double)CONCAT44(in_stack_00000084._4_4_,pfVar9[2]);
  _uStack0000009c = (double)(pfVar13[2] - pfVar9[2]);
  param_1._4_4_ = (uint *)((ulonglong)_uStack0000009c >> 0x20);
  dStack0000008c = (double)(*pfVar13 - *pfVar9);
  dStack00000094 = (double)(pfVar13[1] - pfVar9[1]);
  FUN_004f94a0(&stack0x0000008c);
  dStack00000044 = *(double *)(extraout_ECX + 0x10);
  dStack0000004c = 1.0 / dStack00000044;
  fVar1 = *(float *)(*(int *)(extraout_ECX + 0x20) + 0x50);
  dStack00000064 =
       (double)((*(float *)(&DAT_0074d528 +
                           (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4) +
                fVar1) * 0.5);
  FUN_004fe850((void *)((int *)param_2)[2],(float *)&stack0x0000006c,&stack0x00000134);
  FUN_004fe850((void *)param_2._4_4_[2],&stack0x0000007c,&stack0x000000e4);
  FUN_004fe9e0((void *)param_2._4_4_[2],&stack0x0000008c,(double *)&stack0x00000174);
  dStack0000010c = in_stack_000000e4 - in_stack_00000134;
  dStack00000114 = in_stack_000000ec - in_stack_0000013c;
  dStack0000011c = (double)CONCAT44(in_stack_000000f8,in_stack_000000f4) - in_stack_00000144;
  FUN_004f99d0(&stack0x00000154,&stack0x0000010c,(double *)&stack0x00000174);
  FUN_004fe900((void *)param_2._4_4_[2],(double *)&stack0x00000154,&stack0x000000ac);
  FUN_004f9870(&stack0x000000ac);
  dVar3 = (double)(fVar1 * 0.9 + _DAT_0074d520);
  iVar10 = FUN_00568e60(&stack0x0000003c,
                        SUB84((double)(*(float *)(&DAT_0074d528 +
                                                 (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >>
                                                  0x16 & 0xff) * 4) + fVar1),0),
                        (int)((ulonglong)
                              (double)(*(float *)(&DAT_0074d528 +
                                                 (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >>
                                                  0x16 & 0xff) * 4) + fVar1) >> 0x20),SUB84(dVar3,0)
                        ,(int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(extraout_ECX + 0x28),
                        *(undefined4 *)(extraout_ECX + 0x2c),*(undefined4 *)(extraout_ECX + 0x30),
                        *(undefined4 *)(extraout_ECX + 0x34),(undefined4 *)&stack0x00000c7c,
                        (undefined4 *)&stack0x00000194,(double *)0x0,(double *)(extraout_ECX + 0x40)
                       );
  if (iVar10 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x30;
  }
  dStack00000044 = *(double *)(extraout_ECX + 0x18);
  dStack0000004c = 1.0 / dStack00000044;
  local_8 = (uint *)&stack0x00000034;
  piStack00000034 = (int *)param_1._4_4_;
  ppuStack0000003c = &PTR_FUN_00578ccc;
  iStack00000028 = 2;
  piStack00000038 = (int *)(param_1._4_4_ + ((int)(*param_1._4_4_ << 1) >> 0x11));
  dStack00000064 = (double)*pfVar14;
  dStack0000006c = (double)pfVar14[1];
  in_stack_00000074 = (double)pfVar14[2];
  while( true ) {
    puVar5 = (uint *)*local_8;
    iVar10 = *param_2._4_4_;
    pfVar15 = (float *)((*puVar5 & 0xffff) * 0x10 + iVar10);
    pfVar9 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)puVar5 & 0xc)) + (int)puVar5) &
                       0xffff) * 0x10 + iVar10);
    _in_stack_000000f4 = (double)(pfVar9[2] - pfVar15[2]);
    pfVar13 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc + ((uint)puVar5 & 0xc)) + (int)puVar5) &
                        0xffff) * 0x10 + iVar10);
    in_stack_000000e4 = (double)(*pfVar9 - *pfVar15);
    in_stack_000000ec = (double)(pfVar9[1] - pfVar15[1]);
    fVar1 = pfVar15[1];
    dStack00000104 = (double)fVar1;
    fVar2 = pfVar15[2];
    dStack00000014 = (double)fVar2;
    fVar6 = *pfVar13 - *pfVar15;
    fVar8 = pfVar13[1] - fVar1;
    fVar7 = *pfVar9 - *pfVar15;
    dStack0000010c =
         (double)((pfVar9[1] - fVar1) * (pfVar13[2] - fVar2) - (pfVar9[2] - fVar2) * fVar8);
    dStack00000114 = (double)((pfVar9[2] - fVar2) * fVar6 - fVar7 * (pfVar13[2] - fVar2));
    dStack0000011c = (double)(fVar7 * fVar8 - (pfVar9[1] - fVar1) * fVar6);
    FUN_004f99d0(&stack0x00000084,&stack0x000000e4,&stack0x0000010c);
    FUN_004f9870(&stack0x00000084);
    _in_stack_000000b4 = (double)pfVar15[2];
    in_stack_000000a4 = (double)*pfVar15;
    in_stack_000000ac = (double)pfVar15[1];
    iVar10 = FUN_00568c50(&stack0x0000003c,SUB84((double)-_DAT_0074d644,0),
                          (int)((ulonglong)(double)-_DAT_0074d644 >> 0x20),
                          *(undefined4 *)(extraout_ECX + 0x28),*(undefined4 *)(extraout_ECX + 0x2c),
                          *(double *)(extraout_ECX + 0x40),0,(undefined4 *)&stack0x00000c7c,
                          (undefined4 *)&stack0x00000194,(double *)0x0,
                          (undefined4 *)(extraout_ECX + 0x40));
    if (iVar10 != 0) {
      *(undefined4 *)(extraout_ECX + 0x38) = 0x31;
    }
    local_8 = local_8 + 1;
    iStack00000028 = iStack00000028 + -1;
    if (iStack00000028 == 0) break;
    param_2._4_4_ = (int *)((ulonglong)(double)fVar8 >> 0x20);
  }
  fVar1 = *(float *)(*(int *)(extraout_ECX + 0x20) + 0x54);
  dVar3 = (double)fVar1;
  param_1 = dVar3 - (*(double *)(extraout_ECX + 0x40) - *(double *)(extraout_ECX + 0x28)) *
                    *(double *)(extraout_ECX + 0x18);
  if (param_1 < 1e-08) {
    param_1 = 1e-08;
  }
  param_2._0_4_ = SUB84(dVar3,0);
  iVar10 = *(int *)(*(int *)((int)(int *)param_2 + 0xc) + 0xa4);
  fVar16 = FUN_004f9440(pfVar14);
  ppuStack0000003c = &PTR_FUN_00578cf0;
  param_2._4_4_ = (int *)((ulonglong)dVar3 >> 0x20);
  pfVar9 = (float *)((*param_1._4_4_ & 0xffff) * 0x10 + *param_2._4_4_);
  pfVar13 = (float *)((*(uint *)((int)param_1._4_4_ + *piStack0000002c) & 0xffff) * 0x10 +
                     *param_2._4_4_);
  dVar3 = (double)(((float10)*(float *)(*(int *)(param_2._4_4_[3] + 0xa4) + 0x1c0) *
                    (float10)*(float *)(iVar12 + 0x1bc) +
                    (float10)*(float *)(*(int *)(param_2._4_4_[3] + 0xa4) + 0x1b8) +
                   fVar16 * (float10)*(float *)(iStack00000030 + 0x1bc) +
                   (float10)*(float *)(iVar10 + 0x1b8)) / (float10)param_1 + (float10)dStack0000012c
                  );
  dStack00000064 = (double)*pfVar14;
  dStack0000006c = (double)pfVar14[1];
  in_stack_00000074 = (double)pfVar14[2];
  _in_stack_000000b4 = (double)pfVar9[2];
  in_stack_000000a4 = (double)*pfVar9;
  in_stack_000000ac = (double)pfVar9[1];
  _uStack000000d4 = (double)(pfVar13[2] - pfVar9[2]);
  dStack000000c4 = (double)(*pfVar13 - *pfVar9);
  dStack000000cc = (double)(pfVar13[1] - pfVar9[1]);
  FUN_004f94a0(&stack0x000000c4);
  dStack0000004c = 1.0 / dVar3;
  fVar2 = *(float *)(&DAT_0074d528 +
                    (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4);
  if (fVar1 < *(float *)(&DAT_0074d528 +
                        (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4)) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(*(int *)(param_2._4_4_[3] + 0xa4) + 0x48);
  dVar4 = (double)((fVar1 + fVar1) * fVar2 * -0.3);
  piVar11 = (int *)(*(int *)(&DAT_005b99cc + ((uint)param_1._0_4_ & 0xc)) + (int)param_1._0_4_) +
            ((*(int *)(*(int *)(&DAT_005b99cc + ((uint)param_1._0_4_ & 0xc)) + (int)param_1._0_4_)
             << 1) >> 0x11);
  dStack00000044 = dVar3;
  while( true ) {
    param_2._0_4_ = SUB84(dVar4,0);
    pfVar9 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)piVar11 & 0xc)) + (int)piVar11) &
                       0xffff) * 0x10 + *(int *)param_2);
    dStack00000094 = (double)(pfVar9[2] - pfVar14[2]);
    in_stack_00000084 = (double)(*pfVar9 - *pfVar14);
    dStack0000008c = (double)(pfVar9[1] - pfVar14[1]);
    FUN_004f94a0(&stack0x00000084);
    param_2._4_4_ = (int *)((ulonglong)dVar4 >> 0x20);
    iVar12 = FUN_00568c50(&stack0x0000003c,(int *)param_2,param_2._4_4_,
                          *(undefined4 *)(extraout_ECX + 0x28),*(undefined4 *)(extraout_ECX + 0x2c),
                          *(double *)(extraout_ECX + 0x40),0,(undefined4 *)&stack0x00000c7c,
                          (undefined4 *)&stack0x00000194,(double *)0x0,
                          (undefined4 *)(extraout_ECX + 0x40));
    if (iVar12 != 0) {
      *(undefined4 *)(extraout_ECX + 0x38) = 0x32;
    }
    if ((uint *)piVar11 == param_1._0_4_) break;
    piVar11 = (int *)(*(int *)(&DAT_005b99cc + ((uint)piVar11 & 0xc)) + (int)piVar11) +
              ((*(int *)(*(int *)(&DAT_005b99cc + ((uint)piVar11 & 0xc)) + (int)piVar11) << 1) >>
              0x11);
  }
  return;
}


