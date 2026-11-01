
/* ==== FUN_0042c701 @ 0042c701 ==== 
 * signature: undefined4 __stdcall FUN_0042c701(int param_1)
 * body: 0042c701-0042c70f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042c701(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  uint *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float10 fVar27;
  float10 extraout_ST0;
  float10 extraout_ST1;
  longlong lVar28;
  float fStack_dc;
  float fStack_d4;
  float fStack_bc;
  int iStack_b0;
  float fStack_ac;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  float afStack_80 [12];
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_20;
  float afStack_1c [3];
  uint auStack_10 [4];
  
  if ((DAT_006c30b4 & 1) == 0) {
    DAT_006c30b4 = DAT_006c30b4 | 1;
    FUN_005584e0(0x42d7c0);
  }
  if ((DAT_006c30b4 & 2) == 0) {
    DAT_006c30b4 = DAT_006c30b4 | 2;
    fVar27 = FUN_004a6800(0x7128b0);
    _DAT_006c3128 = (float)fVar27;
  }
  fVar27 = FUN_004a6800(0x7128b0);
  _DAT_006c3128 = (float)(((float10)_DAT_006c3128 * (float10)9.0 + fVar27) * (float10)0.1);
  if (param_1 != DAT_006fba58) {
    iVar18 = FUN_004134e0(param_1);
    if (iVar18 == -1) {
      return 0;
    }
    if (param_1 != DAT_006fba58) {
      iVar18 = FUN_004134e0(param_1);
      goto LAB_0042c7b9;
    }
  }
  iVar18 = 6;
LAB_0042c7b9:
  iVar20 = DAT_0073b0d0;
  iVar1 = iVar18 * 4;
  if (*(int *)(&DAT_006c329c + iVar1) == 0) {
    piVar3 = (int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50);
    uVar7 = *(undefined4 *)
             (*(int *)(param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x54);
    iVar25 = iVar18 * 0x30;
    iVar19 = iVar18 * 0x10;
    *(undefined4 *)(iVar25 + 0x6c3130) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c3134) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c3138) = uVar7;
    uVar7 = *(undefined4 *)(*piVar3 * 0xa9 + iVar20 + 0x54);
    *(undefined4 *)(iVar25 + 0x6c313c) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c3140) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c3144) = uVar7;
    uVar7 = *(undefined4 *)(*piVar3 * 0xa9 + iVar20 + 0x54);
    *(undefined4 *)(iVar25 + 0x6c3148) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c314c) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c3150) = uVar7;
    uVar7 = *(undefined4 *)(iVar20 + *piVar3 * 0xa9 + 0x54);
    *(undefined4 *)(iVar25 + 0x6c3154) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c3158) = uVar7;
    *(undefined4 *)(iVar25 + 0x6c315c) = uVar7;
    *(undefined4 *)(iVar19 + 0x6c30b8) = 0;
    *(undefined4 *)(iVar19 + 0x6c30bc) = 0;
    *(undefined4 *)(iVar19 + 0x6c30c0) = 0;
    *(undefined4 *)(iVar19 + 0x6c30c4) = 0;
    *(undefined4 *)(&DAT_006c329c + iVar1) = 1;
  }
  iVar20 = DAT_00715e50;
  *(undefined4 *)(&DAT_006c3098 + iVar1) = 4;
  iVar25 = param_1 * 0xf0;
  iVar20 = FUN_004a8600((void *)(iVar25 + iVar20),0);
  iVar19 = 0;
  fVar13 = ABS(*(float *)(DAT_0073b5c8 + 0x14 +
                         *(int *)(*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar20 * 0xa9 + 4) * 9 +
                                                    4 + DAT_0073b168) + 4) * 0x10 + DAT_0073b120) *
                         0xac));
  iStack_8c = *(int *)(iVar25 + 0x24 + DAT_00715e50) * 0xa9;
  do {
    iVar21 = FUN_004a8600((void *)(DAT_00715e50 + iVar25),iVar19);
    iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
    iVar26 = iVar19 * 0xc;
    iVar20 = DAT_0073b0d0 + iVar20 * 0xa9;
    pfVar4 = afStack_80 + iVar19 * 3;
    *pfVar4 = *(float *)(iVar20 + 0x50);
    afStack_80[iVar19 * 3 + 1] = *(float *)(iVar20 + 0x54);
    pfVar5 = afStack_80 + iVar19 * 3 + 1;
    afStack_80[iVar19 * 3 + 2] = *(float *)(iVar20 + 0x58);
    *pfVar5 = 0.0;
    pfVar22 = (float *)FUN_004b42a0(afStack_1c,pfVar4,iStack_8c + 0x10 + DAT_0073b0d0);
    *pfVar4 = *pfVar22;
    afStack_80[iVar19 * 3 + 1] = pfVar22[1];
    afStack_80[iVar19 * 3 + 2] = pfVar22[2];
    iVar24 = *(int *)(iVar25 + 0x24 + DAT_00715e50);
    iVar20 = DAT_0073b0d0 + iVar24 + 0x50 + iVar24 * 0xa8;
    *pfVar4 = *pfVar4 + *(float *)(DAT_0073b0d0 + iVar24 + 0x50 + iVar24 * 0xa8);
    afStack_80[iVar19 * 3 + 1] = *(float *)(iVar20 + 4) + afStack_80[iVar19 * 3 + 1];
    afStack_80[iVar19 * 3 + 2] = *(float *)(iVar20 + 8) + afStack_80[iVar19 * 3 + 2];
    iStack_50 = (iVar1 + iVar19) * 3;
    *pfVar5 = *(float *)((iVar1 + iVar19) * 0xc + 0x6c3134);
    uStack_84 = FUN_004af230(&DAT_00715250,*(int *)(iVar25 + 0x34 + DAT_00715e50),*pfVar4,
                             afStack_80[iVar19 * 3 + 1],afStack_80[iVar19 * 3 + 2]);
    FUN_004ad3d0((void *)(DAT_00715f00 + uStack_84 * 0x994),(float *)*pfVar4,
                 afStack_80[iVar19 * 3 + 1],afStack_80[iVar19 * 3 + 2],&iStack_88,&iStack_b0,
                 &iStack_a8);
    FUN_004adaf0(&uStack_84,2,(float *)*pfVar4,afStack_80[iVar19 * 3 + 1],afStack_80[iVar19 * 3 + 2]
                 ,&iStack_88,&iStack_b0,&iStack_a8);
    fVar27 = FUN_004ad640(DAT_00715f00 + uStack_84 * 0x994,*pfVar4,afStack_80[iVar19 * 3 + 1],
                          afStack_80[iVar19 * 3 + 2],iStack_b0,iStack_a8);
    fStack_bc = (float)fVar27;
    iVar20 = DAT_0073b0d0 + *(int *)(iVar25 + 0x24 + DAT_00715e50) * 0xa9;
    puVar2 = (undefined4 *)(iVar20 + 0x74);
    uStack_34 = *puVar2;
    uStack_30 = *(undefined4 *)(iVar20 + 0x78);
    uStack_2c = *(undefined4 *)(iVar20 + 0x7c);
    __ftol();
    __ftol();
    uStack_40 = *puVar2;
    uStack_3c = *(undefined4 *)(iVar20 + 0x78);
    uStack_4c = *puVar2;
    uStack_38 = *(undefined4 *)(iVar20 + 0x7c);
    uStack_48 = *(undefined4 *)(iVar20 + 0x78);
    uStack_44 = *(undefined4 *)(iVar20 + 0x7c);
    __ftol();
    uVar23 = DAT_005b23bc;
    lVar28 = __ftol();
    puVar6 = auStack_10 + iVar19;
    fStack_20 = (float)((float10)*(float *)(DAT_0073b578 + ((uint)lVar28 & uVar23) * 4) *
                        (float10)*(float *)(iVar25 + 0xc4 + DAT_00715e50) + extraout_ST0);
    *pfVar4 = (float)(extraout_ST1 * (float10)_DAT_006c3128 * (float10)10.0 + (float10)*pfVar4);
    afStack_80[iVar19 * 3 + 2] = fStack_20 * _DAT_006c3128 * 10.0 + afStack_80[iVar19 * 3 + 2];
    uVar23 = FUN_004af230(&DAT_00715250,*(int *)(iVar25 + 0x34 + DAT_00715e50),*pfVar4,
                          afStack_80[iVar19 * 3 + 1],afStack_80[iVar19 * 3 + 2]);
    *puVar6 = uVar23;
    FUN_004adaf0(puVar6,2,(float *)*pfVar4,afStack_80[iVar19 * 3 + 1],afStack_80[iVar19 * 3 + 2],
                 &iStack_88,&iStack_b0,&iStack_a8);
    fVar27 = FUN_004ad640(DAT_00715f00 + *puVar6 * 0x994,*pfVar4,afStack_80[iVar19 * 3 + 1],
                          afStack_80[iVar19 * 3 + 2],iStack_b0,iStack_a8);
    fStack_ac = (float)fVar27;
    if (((float10)*pfVar5 + (float10)25.0 < fVar27) && (DAT_006fb8a0 != 1)) {
      fStack_bc = *pfVar5 - fVar13;
      fStack_ac = fStack_bc;
    }
    iVar21 = iVar21 * 0xa9;
    pfVar4 = (float *)(iVar21 + 100 + DAT_0073b0d0);
    fVar27 = FUN_004a6800(0x7128b0);
    fVar8 = (float)(fVar27 * (float10)*pfVar4 + (float10)*pfVar5);
    fVar27 = FUN_004a6800(0x7128b0);
    *pfVar4 = (float)((float10)*pfVar4 - fVar27 * (float10)200.0);
    iVar20 = FUN_004c5e40(0x46);
    if ((iVar20 != 0) && (param_1 == DAT_006fba58)) {
      *(undefined4 *)((iVar1 + iVar19) * 4 + 0x6c30b8) = 0x3f800000;
    }
    iVar20 = iVar1 + iVar19;
    if (fVar8 - *(float *)(iVar20 * 4 + 0x6c30b8) <= fStack_ac + 0.5) {
      *(int *)(&DAT_006c3098 + iVar1) = *(int *)(&DAT_006c3098 + iVar1) + 1;
      *(float *)(iVar21 + 100 + DAT_0073b0d0) = fStack_ac - fStack_bc;
      pfVar4 = (float *)(iVar21 + 100 + DAT_0073b0d0);
      fVar27 = FUN_004a6800(0x7128b0);
      *pfVar4 = (float)((float10)*pfVar4 / fVar27);
      if ((0.0 < *(float *)(iVar21 + 100 + DAT_0073b0d0)) &&
         (*(float *)(iVar21 + 100 + DAT_0073b0d0) =
               *(float *)(iVar25 + 0xc4 + DAT_00715e50) * *(float *)(iVar21 + 100 + DAT_0073b0d0) *
               0.015384615, 60.0 < *(float *)(iVar21 + 100 + DAT_0073b0d0))) {
        *(undefined4 *)(iVar21 + 100 + DAT_0073b0d0) = 0x42700000;
      }
      pfVar4 = (float *)(iVar21 + 0x60 + DAT_0073b0d0);
      fVar8 = *(float *)(&DAT_00597114 + iVar26);
      fVar9 = *pfVar4;
      fVar10 = *(float *)(&DAT_00597118 + iVar26);
      fVar11 = *(float *)(iVar20 * 4 + 0x6c30b8);
      fVar27 = FUN_004a6800(0x7128b0);
      *pfVar4 = (float)(fVar27 * (float10)(-(fVar8 * fVar9) - fVar10 * fVar11) + (float10)*pfVar4);
      pfVar4 = (float *)(iVar21 + 0x60 + DAT_0073b0d0);
      fVar27 = FUN_004a6800(0x7128b0);
      fVar27 = fVar27 * (float10)*pfVar4 + (float10)*(float *)(iVar20 * 4 + 0x6c30b8);
      *(float *)(iVar20 * 4 + 0x6c30b8) = (float)fVar27;
      if ((float10)2.5 < fVar27) {
        *(undefined4 *)(iVar20 * 4 + 0x6c30b8) = 0x40200000;
        *pfVar4 = -*pfVar4;
      }
      iVar24 = DAT_0073b0d0;
      if (*(float *)(iVar20 * 4 + 0x6c30b8) < -2.5) {
        *(undefined4 *)(iVar20 * 4 + 0x6c30b8) = 0xc0200000;
        *(float *)(iVar21 + 0x60 + iVar24) = -*(float *)(iVar21 + 0x60 + iVar24);
      }
      *pfVar5 = fStack_ac + *(float *)(iVar20 * 4 + 0x6c30b8);
      iVar24 = FUN_004a8600((void *)(DAT_00715e50 + iVar25),iVar19);
      *(float *)(DAT_0073b0d0 + iVar24 * 0xa9 + 0x54) = fVar13 - *(float *)(iVar20 * 4 + 0x6c30b8);
      iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
      if (fVar13 + 1.11 < *(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54)) {
        iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
        *(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54) = fVar13 + 1.11;
      }
      iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
      if (*(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54) < fVar13 - 1.11) {
        iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
        *(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54) = fVar13 - 1.11;
      }
      fStack_94 = *(float *)(iVar25 + 0xd8 + DAT_00715e50) * 4.0;
      fStack_90 = *(float *)(iVar25 + 0xdc + DAT_00715e50) * 4.0;
      fStack_9c = *(float *)(iVar25 + 0xb0 + DAT_00715e50);
      fStack_a4 = *(float *)(iVar25 + 0xd4 + DAT_00715e50) * 4.0 * fStack_9c;
      fStack_a0 = fStack_94 * fStack_9c;
      fStack_9c = fStack_90 * fStack_9c;
      fVar27 = FUN_004a6800(0x7128b0);
      fStack_dc = (float)((float10)fStack_a4 * fVar27);
      fStack_d4 = (float)((float10)fStack_9c * fVar27);
      if (15.0 < fStack_dc) {
        fStack_dc = 15.0;
      }
      if (15.0 < fStack_d4) {
        fStack_d4 = 15.0;
      }
      if (fStack_dc < -15.0) {
        fStack_dc = -15.0;
      }
      if (fStack_d4 < -15.0) {
        fStack_d4 = -15.0;
      }
      if (iVar19 == 0) {
        fVar27 = FUN_004a6800(0x7128b0);
        *(float *)(iVar18 * 0x10 + 0x6c30b8) =
             (float)(((float10)fStack_d4 - (float10)fStack_dc) * fVar27 +
                    (float10)*(float *)(iVar18 * 0x10 + 0x6c30b8));
      }
      else if (iVar19 == 1) {
        fVar27 = FUN_004a6800(0x7128b0);
        *(float *)(iVar18 * 0x10 + 0x6c30bc) =
             (float)(((float10)fStack_d4 + (float10)fStack_dc) * fVar27 +
                    (float10)*(float *)(iVar18 * 0x10 + 0x6c30bc));
      }
      else if (iVar19 == 2) {
        fVar27 = FUN_004a6800(0x7128b0);
        *(float *)(iVar18 * 0x10 + 0x6c30c0) =
             (float)((-(float10)fStack_d4 - (float10)fStack_dc) * fVar27 +
                    (float10)*(float *)(iVar18 * 0x10 + 0x6c30c0));
      }
      else if (iVar19 == 3) {
        fVar27 = FUN_004a6800(0x7128b0);
        *(float *)(iVar18 * 0x10 + 0x6c30c4) =
             (float)(((float10)fStack_dc - (float10)fStack_d4) * fVar27 +
                    (float10)*(float *)(iVar18 * 0x10 + 0x6c30c4));
      }
    }
    else {
      pfVar4 = (float *)(iVar21 + 0x60 + DAT_0073b0d0);
      fVar27 = FUN_004a6800(0x7128b0);
      *pfVar4 = (float)((float10)*pfVar4 - fVar27 * (float10)200.0);
      fVar9 = *(float *)(&DAT_00597114 + iVar26);
      fVar10 = *(float *)(iVar21 + 0x60 + DAT_0073b0d0);
      pfVar4 = (float *)(iVar21 + 0x60 + DAT_0073b0d0);
      fVar11 = *(float *)(&DAT_00597118 + iVar26);
      fVar12 = *(float *)(iVar20 * 4 + 0x6c30b8);
      fVar27 = FUN_004a6800(0x7128b0);
      *pfVar4 = (float)(fVar27 * (float10)(-(fVar9 * fVar10) - fVar11 * fVar12) + (float10)*pfVar4);
      pfVar4 = (float *)(iVar21 + 0x60 + DAT_0073b0d0);
      fVar27 = FUN_004a6800(0x7128b0);
      fVar27 = (float10)*(float *)(iVar20 * 4 + 0x6c30b8) - fVar27 * (float10)*pfVar4;
      *(float *)(iVar20 * 4 + 0x6c30b8) = (float)fVar27;
      if ((float10)2.5 < fVar27) {
        *(undefined4 *)(iVar20 * 4 + 0x6c30b8) = 0x40200000;
        *pfVar4 = 0.0;
      }
      iVar24 = DAT_0073b0d0;
      if (*(float *)(iVar20 * 4 + 0x6c30b8) < -2.5) {
        *(undefined4 *)(iVar20 * 4 + 0x6c30b8) = 0xc0200000;
        *(undefined4 *)(iVar21 + 0x60 + iVar24) = 0;
      }
      *pfVar5 = fVar8;
      iVar24 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
      *(float *)(DAT_0073b0d0 + iVar24 * 0xa9 + 0x54) = fVar13 - *(float *)(iVar20 * 4 + 0x6c30b8);
      iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
      if (fVar13 + 1.11 < *(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54)) {
        iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
        *(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54) = fVar13 + 1.11;
      }
      iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
      if (*(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54) < fVar13 - 1.11) {
        iVar20 = FUN_004a8600((void *)(iVar25 + DAT_00715e50),iVar19);
        *(float *)(DAT_0073b0d0 + iVar20 * 0xa9 + 0x54) = fVar13 - 1.11;
      }
    }
    iVar19 = iVar19 + 1;
    *(float *)(iStack_50 * 4 + 0x6c3134) = *pfVar5;
  } while (iVar19 < 4);
  *(float *)(DAT_0073b0d0 + *(int *)(iVar25 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) =
       afStack_80[10] + afStack_80[7] + afStack_80[4] + afStack_80[1];
  iVar18 = *(int *)(iVar25 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar18 + 0x54 + iVar18 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar18 + 0x54 + iVar18 * 0xa8) * 0.25;
  fVar13 = (afStack_80[3] - afStack_80[9]) + (afStack_80[0] - afStack_80[6]);
  fVar16 = (afStack_80[4] - afStack_80[10]) + (afStack_80[1] - afStack_80[7]);
  fVar17 = (afStack_80[5] - afStack_80[0xb]) + (afStack_80[2] - afStack_80[8]);
  fVar15 = (afStack_80[9] - afStack_80[6]) + (afStack_80[3] - afStack_80[0]);
  fVar14 = (afStack_80[10] - afStack_80[7]) + (afStack_80[4] - afStack_80[1]);
  fVar10 = (afStack_80[0xb] - afStack_80[8]) + (afStack_80[5] - afStack_80[2]);
  fVar8 = SQRT(fVar13 * fVar13 + fVar16 * fVar16 + fVar17 * fVar17);
  fVar13 = fVar13 / fVar8;
  fVar16 = fVar16 / fVar8;
  fVar17 = fVar17 / fVar8;
  fVar8 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar10 * fVar10);
  fVar15 = fVar15 / fVar8;
  fVar14 = fVar14 / fVar8;
  fVar10 = fVar10 / fVar8;
  fVar11 = fVar10 * fVar16 - fVar14 * fVar17;
  fVar9 = fVar17 * fVar15 - fVar10 * fVar13;
  fVar8 = fVar14 * fVar13 - fVar16 * fVar15;
  fVar12 = SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar9 * fVar9);
  *(float *)(iStack_8c + 0x10 + DAT_0073b0d0) = fVar15;
  *(float *)(iStack_8c + 0x14 + DAT_0073b0d0) = fVar14;
  *(float *)(iStack_8c + 0x18 + DAT_0073b0d0) = fVar10;
  *(float *)(iStack_8c + 0x20 + DAT_0073b0d0) = fVar11 / fVar12;
  *(float *)(iStack_8c + 0x24 + DAT_0073b0d0) = fVar9 / fVar12;
  *(float *)(iStack_8c + 0x28 + DAT_0073b0d0) = fVar8 / fVar12;
  *(float *)(iStack_8c + 0x30 + DAT_0073b0d0) = fVar13;
  *(float *)(iStack_8c + 0x34 + DAT_0073b0d0) = fVar16;
  *(float *)(iStack_8c + 0x38 + DAT_0073b0d0) = fVar17;
  return 0;
}


