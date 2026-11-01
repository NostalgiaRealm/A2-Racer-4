
/* ==== FUN_004fd390 @ 004fd390 ==== 
 * signature: undefined __thiscall FUN_004fd390(void * this, double * param_1)
 * body: 004fd390-004fdd70
 */

void __thiscall FUN_004fd390(void *this,double *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  short sVar8;
  double *pdVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float *pfVar15;
  void *unaff_ESI;
  float *pfVar16;
  undefined1 *puVar17;
  int iVar18;
  int *piVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float fVar23;
  undefined8 local_e9c;
  undefined8 uStack_e94;
  undefined8 local_e8c;
  undefined8 uStack_e7c;
  float fStack_e74;
  undefined8 uStack_e6c;
  double dStack_e64;
  double dStack_e5c;
  float afStack_e4c [12];
  float afStack_e1c [5];
  undefined1 local_e08 [28];
  undefined1 auStack_dec [60];
  undefined1 auStack_db0 [56];
  float fStack_d78;
  float fStack_d74;
  float fStack_d70;
  double dStack_d14;
  float fStack_cb4;
  undefined1 auStack_ca4 [12];
  float fStack_c98;
  float fStack_c94;
  float fStack_c90;
  double dStack_bcc;
  float fStack_b6c;
  undefined4 auStack_b58 [4];
  float local_b48 [3];
  double dStack_b3c;
  double dStack_b34;
  double dStack_b2c;
  float afStack_b18 [4];
  float local_b08 [7];
  float afStack_aec [11];
  float afStack_ac0 [7];
  double dStack_aa4;
  undefined8 uStack_a9c;
  undefined8 uStack_a94;
  float afStack_a54 [18];
  double adStack_a0c [19];
  double adStack_974 [169];
  float fStack_42c;
  undefined1 local_428 [380];
  undefined8 uStack_2ac;
  undefined4 local_280 [159];
  
  pfVar12 = local_b48;
  iVar18 = 0xc;
  do {
    FUN_0043e110(pfVar12);
    pfVar12 = pfVar12 + 0x26;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  local_e9c = (double)((ulonglong)local_e9c & 0xffffffff00000000);
  uStack_e94 = CONCAT44(*(undefined4 *)(*(int *)((int)this + 0x600) + 0xa4),(float)uStack_e94);
  if (0 < *(short *)((int)this + 0x10)) {
    local_e8c = CONCAT44(local_e8c._4_4_,local_b08);
    puVar10 = local_280;
    pfVar12 = (float *)((int)this + 0x50);
    do {
      FUN_004fadc0((void *)(uStack_e94._4_4_ + 0x128),pfVar12 + -0xe,(double *)(puVar10 + -10));
      FUN_004fae60((void *)(uStack_e94._4_4_ + 0x128),pfVar12 + -10,(float *)local_e8c);
      iVar18 = (int)(float)local_e9c + 1;
      puVar10[-2] = *(float *)local_e8c;
      puVar10[-1] = ((float *)local_e8c)[1];
      *puVar10 = ((float *)local_e8c)[2];
      fVar14 = pfVar12[-5];
      fVar1 = *pfVar12;
      puVar10[3] = 0;
      local_e8c = CONCAT44(local_e8c._4_4_,(float *)local_e8c + 0x26);
      sVar8 = *(short *)((int)this + 0x10);
      puVar10[2] = fVar14 + fVar1;
      local_e9c = (double)CONCAT44(local_e9c._4_4_,iVar18);
      puVar10 = puVar10 + 0xe;
      pfVar12 = pfVar12 + 0x1f;
    } while (iVar18 < sVar8);
  }
  (**(code **)(*(int *)((int)this + -4) + 0x4c))
            (param_1,(int)*(short *)((int)this + 0x10),(int)&uStack_2ac + 4,local_428,local_e08);
  iVar18 = 0;
  if (0 < *(short *)((int)this + 0x10)) {
    pfVar13 = afStack_e1c;
    pdVar9 = (double *)&uStack_2ac;
    pfVar15 = &fStack_42c;
    pfVar16 = local_b48;
    pfVar12 = (float *)((int)this + 0x50);
    do {
      fVar14 = *pfVar15;
      uStack_e7c = (double)CONCAT44(uStack_e7c._4_4_,fVar14);
      if (fVar14 == 0.0) {
        fVar14 = pfVar12[-5];
        fVar1 = *pfVar12;
        pfVar16[0x20] = 1.0;
        pfVar16[-3] = 0.0;
        pfVar12[0xf] = 0.0;
        pfVar12[0x10] = fVar14 + fVar1;
        pfVar16[-2] = pfVar16[0xb] * -1.0;
        pfVar16[-1] = pfVar16[0xc] * -1.0;
        *pfVar16 = pfVar16[0xd] * -1.0;
      }
      else {
        if (*(int *)((int)fVar14 + 0x40) == 0) {
          puVar10 = FUN_004fe470(*(void **)(*(int *)((int)fVar14 + 0x18) + 0xa4),(int)fVar14);
          *(undefined4 **)((int)(float)uStack_e7c + 0x40) = puVar10;
          fVar14 = (float)uStack_e7c;
        }
        if ((*(int *)((int)fVar14 + 0x80) * 0x1000000 < 0x8000000) &&
           (**(int **)((int)fVar14 + 0x40) < *(int *)(*(int *)((int)fVar14 + 0x18) + 0x138))) {
          FUN_004fe580(*(int **)((int)fVar14 + 0x40));
          fVar14 = (float)uStack_e7c;
        }
        FUN_004fea50(*(void **)((int)fVar14 + 0x40),pfVar15 + -4,pfVar16 + -2);
        fVar14 = pfVar16[-1];
        fVar1 = pfVar16[0xc];
        fVar23 = *pfVar16;
        fVar2 = pfVar16[0xd];
        fVar3 = pfVar16[-2];
        fVar4 = pfVar16[0xb];
        pfVar12[0x10] = pfVar15[3];
        pfVar16[0x20] = 1.1 / (ABS(fVar3 * fVar4 + fVar23 * fVar2 + fVar14 * fVar1) + 0.1);
      }
      pfVar16[-5] = pfVar12[2] * *pfVar13;
      fVar14 = pfVar12[0x10];
      dVar5 = (double)(pfVar16[0xc] * fVar14 + (float)pdVar9[-1]);
      uStack_e7c._0_4_ = SUB84(dVar5,0);
      dVar6 = (double)(pfVar16[0xd] * fVar14 + (float)*pdVar9);
      pfVar16[5] = (float)uStack_e7c;
      local_e9c._0_4_ = SUB84(dVar6,0);
      pfVar16[7] = (float)local_e9c;
      dVar7 = pdVar9[-2];
      uStack_e7c._4_4_ = (float)((ulonglong)dVar5 >> 0x20);
      pfVar16[6] = uStack_e7c._4_4_;
      local_e9c._4_4_ = (float)((ulonglong)dVar6 >> 0x20);
      pfVar16[8] = local_e9c._4_4_;
      *(double *)(pfVar16 + 3) = (double)(pfVar16[0xb] * fVar14 + (float)dVar7);
      local_e9c = dVar6;
      uStack_e7c = dVar5;
      FUN_004f34b0(unaff_ESI,(double *)(pfVar16 + 3),pfVar16 + 0xf);
      FUN_004f9970(pfVar16 + 0x13,pfVar16 + 0xf,pfVar16 + -2);
      FUN_004fae60((void *)((int)unaff_ESI + 0x128),pfVar12 + 5,pfVar16 + 0x17);
      FUN_004f9970(pfVar16 + 0x1b,pfVar16 + 0x17,pfVar16 + -2);
      iVar11 = FUN_004f9780(pfVar16 + 0x1b);
      if (iVar11 == 0) {
        return;
      }
      pfVar15 = pfVar15 + 8;
      pdVar9 = pdVar9 + 7;
      iVar18 = iVar18 + 1;
      pfVar12 = pfVar12 + 0x1f;
      pfVar16 = pfVar16 + 0x26;
      pfVar13 = pfVar13 + 1;
    } while (iVar18 < *(short *)((int)this + 0x10));
  }
  if (*(short *)((int)this + 0x14) == 2) {
    iVar18 = (int)*(short *)((int)this + 0x12);
    if (iVar18 != 0) {
      pfVar12 = (float *)((int)this + 0xb8);
      pfVar13 = afStack_ac0;
      pfVar15 = (float *)((int)this + 0x5e8);
      do {
        iVar18 = iVar18 + -1;
        fVar14 = (((pfVar12[0x15] - *pfVar12) - pfVar12[5]) -
                 ((pfVar12[-10] - pfVar12[-0x1f]) - pfVar12[-0x1a])) * *pfVar15;
        pfVar13[-0x26] = fVar14;
        *pfVar13 = -fVar14;
        pfVar12 = pfVar12 + 0x3e;
        pfVar13 = pfVar13 + 0x4c;
        pfVar15 = pfVar15 + 1;
      } while (iVar18 != 0);
    }
  }
  else {
    iVar18 = (int)*(short *)((int)this + 0x10);
    if (iVar18 != 0) {
      puVar10 = auStack_b58;
      do {
        *puVar10 = 0;
        puVar10 = puVar10 + 0x26;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
  }
  FUN_004fe070((void *)((int)unaff_ESI + 0xa4),(void *)((int)unaff_ESI + 0xa4),
               (float *)((int)this + 0x608),
               (double)(*(float *)((int)unaff_ESI + 0x40) * *(float *)((int)this + 0x62c) *
                       (float)*param_1));
  iVar18 = 0;
  if (0 < *(short *)((int)this + 0x10)) {
    pfVar13 = &fStack_42c;
    pfVar15 = local_b08;
    pfVar12 = (float *)((int)this + 0x3c);
    do {
      if ((*pfVar13 != 0.0) &&
         (fVar20 = ((float10)pfVar12[0x15] - (float10)*pfVar12) - (float10)pfVar12[5],
         fVar20 < (float10)0.0)) {
        fVar21 = ((float10)pfVar15[5] - (float10)pfVar15[1]) * (float10)pfVar15[-3] +
                 ((float10)pfVar15[4] - (float10)*pfVar15) * (float10)pfVar15[-4] +
                 ((float10)pfVar15[3] - (float10)pfVar15[-1]) * (float10)pfVar15[-5];
        if (fVar21 <= (float10)0.0) {
          fVar14 = pfVar12[3];
        }
        else {
          fVar14 = pfVar12[2];
        }
        fVar20 = ((float10)pfVar15[-0x14] - (float10)pfVar12[1] * fVar20) * (float10)pfVar15[0x10] -
                 (float10)fVar14 * fVar21;
        if (fVar20 < (float10)0.0) {
          fVar20 = (float10)0.0;
        }
        pfVar12[0x14] = (float)fVar20;
        fVar20 = fVar20 * (float10)*param_1;
        local_e9c = (double)CONCAT44((float)((float10)pfVar15[-0x11] * fVar20),
                                     (float)((float10)pfVar15[-0x12] * fVar20));
        uStack_e94 = CONCAT44(uStack_e94._4_4_,(float)((float10)pfVar15[-0x10] * fVar20));
        FUN_004f4050(unaff_ESI,(double *)(pfVar15 + -0xd),(float *)&local_e9c);
      }
      iVar18 = iVar18 + 1;
      pfVar12 = pfVar12 + 0x1f;
      pfVar13 = pfVar13 + 8;
      pfVar15 = pfVar15 + 0x26;
    } while (iVar18 < *(short *)((int)this + 0x10));
  }
  if (0.0 < *(float *)((int)this + 0x640)) {
    *(float *)((int)this + 0x640) = *(float *)((int)this + 0x640) - (float)*param_1;
  }
  if ((0.0 < *(float *)((int)this + 0x63c)) &&
     (fVar14 = *(float *)((int)this + 0x63c) - (float)*param_1,
     *(float *)((int)this + 0x63c) = fVar14, fVar14 <= 0.0)) {
    *(undefined4 *)((int)this + 0x638) = 0;
  }
  if (*(float *)((int)this + 0x638) != 0.0) {
    iVar18 = *(int *)((int)this + 0x624);
    fVar14 = (float)*(double *)((int)unaff_ESI + iVar18 * 8 + 0x148);
    uStack_e6c = (double)CONCAT44(fVar14,(float)uStack_e6c);
    dVar5 = *(double *)((int)unaff_ESI + iVar18 * 8 + 0x168);
    fVar1 = *(float *)((int)this + 0x638) * (float)*param_1;
    *(float *)((int)unaff_ESI + 0xa4) =
         (float)*(double *)((int)unaff_ESI + iVar18 * 8 + 0x128) * fVar1 +
         *(float *)((int)unaff_ESI + 0xa4);
    *(float *)((int)unaff_ESI + 0xa8) = fVar14 * fVar1 + *(float *)((int)unaff_ESI + 0xa8);
    *(float *)((int)unaff_ESI + 0xac) = (float)dVar5 * fVar1 + *(float *)((int)unaff_ESI + 0xac);
  }
  puVar17 = auStack_db0;
  iVar18 = 2;
  do {
    FUN_00402d00(puVar17 + -0x30,0x10,3,FUN_0043e110);
    FUN_00402d00(puVar17,0x10,3,FUN_0043e110);
    FUN_00402d00(puVar17 + 0x38,0x10,3,FUN_0043e110);
    FUN_00402d00(puVar17 + 0x68,0x10,3,FUN_0043e110);
    FUN_00402d00(puVar17 + 0x9c,0x20,3,FUN_0043e110);
    puVar17 = puVar17 + 0x148;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  iVar18 = 2;
  if (*(short *)((int)this + 0x14) == 2) {
    FUN_004f9360(&uStack_e6c,&dStack_b3c,&dStack_aa4,0.5);
    FUN_004f9360(&local_e9c,adStack_a0c,adStack_974,0.5);
  }
  else {
    uStack_e6c = dStack_b3c;
    dStack_e64 = dStack_b34;
    dStack_e5c = dStack_b2c;
    local_e9c = dStack_aa4;
    uStack_e94 = uStack_a9c;
    local_e8c = uStack_a94;
    iVar18 = 1;
  }
  FUN_00543430(auStack_dec,(int)unaff_ESI,0,(double *)&uStack_e6c,afStack_aec,0,0);
  FUN_00543430(auStack_ca4,(int)unaff_ESI,0,(double *)&local_e9c,afStack_aec + iVar18 * 0x26,0,0);
  fVar14 = fStack_c90 * fStack_d70 + fStack_c94 * fStack_d74 + fStack_c98 * fStack_d78 +
           (afStack_aec[0] * afStack_aec[iVar18 * 0x26] +
           afStack_aec[2] * afStack_aec[iVar18 * 0x26 + 2] +
           afStack_aec[1] * afStack_aec[iVar18 * 0x26 + 1]) * *(float *)((int)unaff_ESI + 0x40);
  fVar20 = -(float10)fStack_cb4 * (float10)param_1[1] * (float10)1.2000000476837158;
  fVar21 = -(float10)fStack_b6c * (float10)param_1[1] * (float10)1.2000000476837158;
  fVar22 = (float10)dStack_d14 * (float10)dStack_bcc - (float10)fVar14 * (float10)fVar14;
  if (fVar22 * fVar22 < (float10)1e-38) {
    afStack_e4c[0] = 0.0;
    afStack_e4c[1] = 0.0;
  }
  else {
    fVar22 = (float10)1.0 / fVar22;
    uStack_e6c = (double)((float10)dStack_bcc * fVar22);
    dStack_e64 = (double)-(fVar22 * (float10)fVar14);
    dStack_e5c = (double)-(fVar22 * (float10)fVar14);
    afStack_e4c[0] = (float)((float10)uStack_e6c * fVar20 + (float10)dStack_e64 * fVar21);
    afStack_e4c[1] = (float)((float10)dStack_e5c * fVar20 + (float10)dStack_d14 * fVar22 * fVar21);
  }
  iVar18 = 0;
  if (0 < *(short *)((int)this + 0x10)) {
    piVar19 = (int *)((int)this + 0x60);
    pfVar12 = afStack_b18;
    do {
      fVar14 = pfVar12[-0x11] * (float)piVar19[0xb] * 1.2;
      local_e9c._0_4_ = pfVar12[0x10] * pfVar12[1] - *pfVar12 * pfVar12[0x11];
      local_e9c._4_4_ = pfVar12[0x11] * pfVar12[-1] - pfVar12[1] * pfVar12[0xf];
      uStack_e94 = CONCAT44(uStack_e94._4_4_,*pfVar12 * pfVar12[0xf] - pfVar12[0x10] * pfVar12[-1]);
      FUN_004f9780((float *)&local_e9c);
      fVar1 = local_e9c._4_4_ * *(float *)((int)unaff_ESI + 0xa8) +
              (float)uStack_e94 * *(float *)((int)unaff_ESI + 0xac) +
              (float)local_e9c * *(float *)((int)unaff_ESI + 0xa4);
      if (*piVar19 == 0) {
        fVar23 = (float)piVar19[-1] * (float)piVar19[-3];
        piVar19[6] = (int)(fVar1 * (float)piVar19[-3]);
      }
      else {
        fVar23 = *(float *)((int)unaff_ESI + 0x20) * fVar1 * -0.5 * (float)param_1[1];
        piVar19[6] = 0;
      }
      iVar11 = iVar18 / (int)*(short *)((int)this + 0x14);
      fStack_e74 = afStack_e4c[iVar11];
      fVar1 = fStack_e74 * fStack_e74 + fVar23 * fVar23;
      if (fVar14 * fVar14 < fVar1) {
        fVar14 = SQRT((fVar14 * fVar14) / fVar1);
        fVar23 = fVar14 * fVar23;
        fStack_e74 = fVar14 * fStack_e74;
      }
      afStack_e4c[iVar11] = afStack_e4c[iVar11] - fStack_e74;
      piVar19[5] = (int)((float)piVar19[5] - (float)piVar19[6] * (float)*param_1);
      fStack_e74 = fStack_e74 * (float)*param_1;
      uStack_e7c = (double)CONCAT44(pfVar12[0x10] * fStack_e74,pfVar12[0xf] * fStack_e74);
      fStack_e74 = pfVar12[0x11] * fStack_e74;
      FUN_004f4050(unaff_ESI,(double *)(pfVar12 + -9),(float *)&uStack_e7c);
      fVar23 = fVar23 * (float)*param_1;
      uStack_e6c = (double)CONCAT44(local_e9c._4_4_ * fVar23,(float)local_e9c * fVar23);
      dStack_e64 = (double)CONCAT44(dStack_e64._4_4_,(float)uStack_e94 * fVar23);
      FUN_004f4050(unaff_ESI,(double *)(pfVar12 + -9),(float *)&uStack_e6c);
      piVar19 = piVar19 + 0x1f;
      iVar18 = iVar18 + 1;
      pfVar12 = pfVar12 + 0x26;
    } while (iVar18 < *(short *)((int)this + 0x10));
  }
  return;
}


