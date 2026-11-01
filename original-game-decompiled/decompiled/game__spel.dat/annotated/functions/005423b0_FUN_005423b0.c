
/* ==== FUN_005423b0 @ 005423b0 ==== 
 * signature: undefined __stdcall FUN_005423b0(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, int * param_5, int * param_6, double param_7, double param_8, double param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, double param_14, undefined * * param_15, undefined4 param_16, double param_17, double param_18)
 * body: 005423b0-0054287d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005423b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,int *param_6,double param_7,double param_8,double param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 double param_14,undefined **param_15,undefined4 param_16,double param_17,
                 double param_18)

{
  float fVar1;
  double dVar2;
  int *piVar3;
  float fVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  int extraout_ECX;
  float *pfVar11;
  float *pfVar12;
  double dStack0000007c;
  undefined4 uStack00000084;
  undefined4 uStack00000088;
  undefined4 uStack0000008c;
  undefined4 uStack00000090;
  float fStack00000094;
  float fStack00000098;
  float fStack0000009c;
  double dStack000000a4;
  double dStack000000ac;
  undefined4 uStack000000b4;
  undefined4 uStack000000b8;
  double in_stack_000000bc;
  double in_stack_000000c4;
  undefined4 in_stack_000000cc;
  undefined4 in_stack_000000d0;
  double dStack000000e4;
  double dStack000000ec;
  double dStack000000f4;
  int **local_8;
  
  FUN_00559400();
  FUN_00402d00(&stack0x00000c94,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x00000c2c,(int *)param_2);
  piVar3 = (int *)param_2._4_4_[2];
  FUN_00402d00(&stack0x000001ac,0x80,0x15,FUN_0043e110);
  FUN_00542c90(&stack0x00000144,piVar3);
  *(undefined4 *)(extraout_ECX + 0x40) = *(undefined4 *)(extraout_ECX + 0x30);
  *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(extraout_ECX + 0x34);
  param_15 = &PTR_FUN_00578cf4;
  pfVar9 = (float *)((*param_1._4_4_ & 0xffff) * 0x10 + *param_2._4_4_);
  uStack00000084 = 0;
  uStack00000088 = 0;
  uStack0000008c = 0;
  fStack00000098 = pfVar9[1];
  fStack0000009c = pfVar9[2];
  fStack00000094 = *pfVar9;
  pfVar11 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_1._4_4_ & 0xc)) +
                                (int)param_1._4_4_) & 0xffff) * 0x10 + *param_2._4_4_);
  _uStack000000b4 = (double)(pfVar11[2] - pfVar9[2]);
  param_1._4_4_ = (uint *)((ulonglong)_uStack000000b4 >> 0x20);
  dStack000000a4 = (double)(*pfVar11 - *pfVar9);
  dStack000000ac = (double)(pfVar11[1] - pfVar9[1]);
  FUN_004f94a0(&stack0x000000a4);
  param_17 = *(double *)(extraout_ECX + 0x10);
  param_18 = 1.0 / param_17;
  fVar4 = *(float *)(*(int *)(extraout_ECX + 0x20) + 0x50);
  dStack0000007c =
       (double)((*(float *)(&DAT_0074d528 +
                           (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >> 0x16 & 0xff) * 4) +
                fVar4) * 0.5);
  FUN_004fe850((void *)param_2._4_4_[2],&stack0x00000094,&param_8);
  FUN_004fe9e0((void *)param_2._4_4_[2],&stack0x000000a4,(double *)&stack0x00000124);
  dStack000000e4 = param_8 - *(double *)((int *)param_2 + 0x24);
  dStack000000ec = param_9 - *(double *)((int *)param_2 + 0x26);
  dStack000000f4 = (double)CONCAT44(param_11,param_10) - *(double *)((int *)param_2 + 0x28);
  FUN_004f99d0(&stack0x00000104,&stack0x000000e4,(double *)&stack0x00000124);
  FUN_004fe900((void *)param_2._4_4_[2],(double *)&stack0x00000104,&stack0x000000c4);
  FUN_004f9870(&stack0x000000c4);
  dVar2 = (double)(fVar4 * 0.9 + _DAT_0074d520);
  iVar10 = FUN_00568e60(&param_15,
                        SUB84((double)(*(float *)(&DAT_0074d528 +
                                                 (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >>
                                                  0x16 & 0xff) * 4) + fVar4),0),
                        (int)((ulonglong)
                              (double)(*(float *)(&DAT_0074d528 +
                                                 (*(uint *)(*(int *)(extraout_ECX + 0x20) + 0x14) >>
                                                  0x16 & 0xff) * 4) + fVar4) >> 0x20),SUB84(dVar2,0)
                        ,(int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(extraout_ECX + 0x28),
                        *(undefined4 *)(extraout_ECX + 0x2c),*(undefined4 *)(extraout_ECX + 0x30),
                        *(undefined4 *)(extraout_ECX + 0x34),(undefined4 *)&stack0x00000c2c,
                        (undefined4 *)&stack0x00000144,(double *)0x0,(double *)(extraout_ECX + 0x40)
                       );
  if (iVar10 != 0) {
    *(undefined4 *)(extraout_ECX + 0x38) = 0x30;
  }
  param_17 = *(double *)(extraout_ECX + 0x18);
  param_18 = 1.0 / param_17;
  local_8 = &param_5;
  param_5 = (int *)param_1._4_4_;
  param_15 = &PTR_FUN_00578ccc;
  dStack0000007c = 0.0;
  uStack00000084 = 0;
  param_6 = (int *)(param_1._4_4_ + ((int)(*param_1._4_4_ << 1) >> 0x11));
  uStack00000088 = 0;
  uStack0000008c = 0;
  uStack00000090 = 0;
  param_1._0_4_ = 2;
  while( true ) {
    puVar5 = (uint *)*local_8;
    iVar10 = *param_2._4_4_;
    pfVar12 = (float *)((*puVar5 & 0xffff) * 0x10 + iVar10);
    pfVar9 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)puVar5 & 0xc)) + (int)puVar5) &
                       0xffff) * 0x10 + iVar10);
    pfVar11 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc + ((uint)puVar5 & 0xc)) + (int)puVar5) &
                        0xffff) * 0x10 + iVar10);
    param_2._0_4_ = SUB84((double)(pfVar9[2] - pfVar12[2]),0);
    param_2._4_4_ = (int *)((ulonglong)(double)(pfVar9[2] - pfVar12[2]) >> 0x20);
    param_10 = (int *)param_2;
    param_11 = param_2._4_4_;
    param_8 = (double)(*pfVar9 - *pfVar12);
    param_9 = (double)(pfVar9[1] - pfVar12[1]);
    fVar4 = pfVar12[1];
    param_14 = (double)fVar4;
    fVar1 = pfVar12[2];
    fVar6 = *pfVar11 - *pfVar12;
    fVar8 = pfVar11[2] - fVar1;
    param_7 = (double)fVar8;
    fVar7 = *pfVar9 - *pfVar12;
    dStack000000e4 =
         (double)((pfVar9[1] - fVar4) * fVar8 - (pfVar9[2] - fVar1) * (pfVar11[1] - fVar4));
    dStack000000ec = (double)((pfVar9[2] - fVar1) * fVar6 - fVar7 * fVar8);
    dStack000000f4 = (double)(fVar7 * (pfVar11[1] - fVar4) - (pfVar9[1] - fVar4) * fVar6);
    FUN_004f99d0(&stack0x0000009c,&param_8,&stack0x000000e4);
    FUN_004f9870((double *)&stack0x0000009c);
    _in_stack_000000cc = (double)pfVar12[2];
    in_stack_000000bc = (double)*pfVar12;
    in_stack_000000c4 = (double)pfVar12[1];
    iVar10 = FUN_00568c50(&param_15,SUB84((double)-_DAT_0074d644,0),
                          (int)((ulonglong)(double)-_DAT_0074d644 >> 0x20),
                          *(undefined4 *)(extraout_ECX + 0x28),*(undefined4 *)(extraout_ECX + 0x2c),
                          *(double *)(extraout_ECX + 0x40),0,(undefined4 *)&stack0x00000c2c,
                          (undefined4 *)&stack0x00000144,(double *)0x0,
                          (undefined4 *)(extraout_ECX + 0x40));
    if (iVar10 != 0) {
      *(undefined4 *)(extraout_ECX + 0x38) = 0x31;
    }
    local_8 = local_8 + 1;
    param_1._0_4_ = (int)param_1 + -1;
    if ((int)param_1 == 0) break;
    param_2._4_4_ = (int *)((ulonglong)(double)fVar1 >> 0x20);
  }
  return;
}


