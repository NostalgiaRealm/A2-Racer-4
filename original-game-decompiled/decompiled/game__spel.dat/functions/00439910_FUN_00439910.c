
/* ==== FUN_00439910 @ 00439910 ==== 
 * signature: undefined __stdcall FUN_00439910(void)
 * body: 00439910-0043a394
 */

void FUN_00439910(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  longlong lVar13;
  float afStackY_22c [5];
  undefined4 uStackY_218;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184 [12];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float afStack_144 [17];
  float local_100 [15];
  float fStack_c4;
  float local_c0 [15];
  float afStack_84 [16];
  float afStack_44 [17];
  
  iVar10 = (&DAT_006c3518)[DAT_006c3568];
  iVar5 = FUN_004c5e40(0x55);
  if (iVar5 != 0) {
    iVar5 = FUN_004c5e40(0x55);
    while (iVar5 != 0) {
      iVar5 = FUN_004c5e40(0x55);
    }
    DAT_00599c88 = DAT_00599c88 ^ 1;
    if (DAT_00599c88 == 0) {
      iVar5 = DAT_00719b50 + 8 + iVar10 * 0x178;
      DAT_006c3590 = *(float *)(DAT_00719b50 + 8 + iVar10 * 0x178);
      DAT_006c3594 = *(float *)(iVar5 + 4);
      DAT_006c3598 = *(float *)(iVar5 + 8);
    }
    else {
      iVar5 = DAT_00719b50 + 8 + iVar10 * 0x178;
      local_1b0 = *(float *)(DAT_00719b50 + 8 + iVar10 * 0x178);
      local_1ac = *(float *)(iVar5 + 4);
      local_1a8 = *(float *)(iVar5 + 8);
      DAT_006c3590 = local_1b0 -
                     *(float *)(DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8);
      iVar5 = DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8;
      DAT_006c3594 = local_1ac - *(float *)(iVar5 + 4);
      DAT_006c3598 = local_1a8 - *(float *)(iVar5 + 8);
      local_198 = DAT_006c3590;
      local_194 = DAT_006c3594;
      local_190 = DAT_006c3598;
    }
  }
  local_1cc = DAT_006c3590;
  iVar10 = iVar10 * 0x178;
  local_1a0 = DAT_006c3594;
  pfVar6 = (float *)(iVar10 + 0x14 + DAT_00719b50);
  pfVar8 = local_c0;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar8 = pfVar8 + 1;
  }
  local_19c = DAT_006c3598;
  local_1a4 = DAT_006c3590;
  pfVar6 = (float *)FUN_004b3ff0(&local_1bc,local_c0);
  local_198 = *pfVar6;
  local_194 = pfVar6[1];
  local_190 = pfVar6[2];
  pfVar6 = (float *)FUN_004b4030(&local_1bc,(int)local_c0);
  local_1b0 = *pfVar6;
  local_1ac = pfVar6[1];
  local_1a8 = pfVar6[2];
  pfVar6 = (float *)FUN_004b4070(&local_1bc,(int)local_c0);
  local_18c = *pfVar6;
  local_188 = pfVar6[1];
  local_1c8 = local_1a0;
  local_184[0] = pfVar6[2];
  FUN_004a6800(0x7128b0);
  fVar3 = DAT_00599720;
  lVar13 = __ftol();
  uVar7 = (uint)lVar13;
  iVar5 = FUN_004c5e40(0x49);
  if (iVar5 != 0) {
    local_1b8 = local_188 * fVar3;
    local_1b4 = local_184[0] * fVar3;
    local_1cc = local_1a4 + local_18c * fVar3;
    local_1c8 = local_1a0 + local_1b8;
    local_1d0 = local_19c + local_1b4;
  }
  iVar5 = FUN_004c5e40(0x4a);
  if (iVar5 != 0) {
    fVar2 = -fVar3;
    local_1bc = local_198 * fVar2;
    local_1b8 = local_194 * fVar2;
    local_1cc = local_1bc + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = fVar2 * local_190 + local_19c;
  }
  iVar5 = FUN_004c5e40(0x4b);
  if (iVar5 != 0) {
    fVar2 = -fVar3;
    local_1bc = local_18c * fVar2;
    local_1b8 = local_188 * fVar2;
    local_1cc = local_1bc + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = fVar2 * local_184[0] + local_19c;
  }
  iVar5 = FUN_004c5e40(0x4c);
  if (iVar5 != 0) {
    local_1b8 = local_194 * fVar3;
    local_1b4 = local_190 * fVar3;
    local_1cc = local_198 * fVar3 + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = local_1b4 + local_19c;
  }
  iVar5 = FUN_004c5e40(0x41);
  if (iVar5 != 0) {
    local_1b8 = local_1ac * fVar3;
    local_1b4 = local_1a8 * fVar3;
    local_1cc = local_1b0 * fVar3 + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = local_1b4 + local_19c;
  }
  iVar5 = FUN_004c5e40(0x5a);
  if (iVar5 != 0) {
    fVar3 = -fVar3;
    local_1bc = local_1b0 * fVar3;
    local_1b8 = local_1ac * fVar3;
    local_1cc = local_1bc + local_1a4;
    local_1c8 = local_1b8 + local_1a0;
    local_1d0 = fVar3 * local_1a8 + local_19c;
  }
  iVar5 = FUN_004c5e40(0x21);
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_004b3ea0(afStack_144 + 1,uVar7);
    pfVar8 = local_100;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar8 = (float *)FUN_004b4110(afStack_144 + 1,local_c0,local_100);
    pfVar6 = local_184;
    pfVar11 = pfVar8;
    for (iVar5 = 0x10; pfVar6 = pfVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar11;
      pfVar11 = pfVar11 + 1;
    }
    pfVar6 = afStackY_22c + 1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar6 = pfVar6 + 1;
    }
    afStackY_22c[0] = 6.209586e-39;
    FUN_004b10b0(iVar10 + DAT_00719b50);
  }
  iVar5 = FUN_004c5e40(0x22);
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_004b3ea0(afStack_144 + 1,-uVar7);
    pfVar8 = local_100;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar8 = (float *)FUN_004b4110(afStack_144 + 1,local_c0,local_100);
    pfVar6 = local_184;
    pfVar11 = pfVar8;
    for (iVar5 = 0x10; pfVar6 = pfVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar11;
      pfVar11 = pfVar11 + 1;
    }
    pfVar6 = afStackY_22c + 1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar6 = pfVar6 + 1;
    }
    afStackY_22c[0] = 6.209752e-39;
    FUN_004b10b0(iVar10 + DAT_00719b50);
  }
  iVar5 = FUN_004c5e40(0x24);
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_004b3f10(afStack_144 + 1,uVar7);
    pfVar8 = local_100;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar8 = (float *)FUN_004b4110(afStack_144 + 1,local_c0,local_100);
    pfVar6 = local_184;
    pfVar11 = pfVar8;
    for (iVar5 = 0x10; pfVar6 = pfVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar11;
      pfVar11 = pfVar11 + 1;
    }
    pfVar6 = afStackY_22c + 1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar6 = pfVar6 + 1;
    }
    afStackY_22c[0] = 6.20991e-39;
    FUN_004b10b0(DAT_00719b50 + iVar10);
  }
  iVar5 = FUN_004c5e40(0x23);
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_004b3f10(afStack_144 + 1,-uVar7);
    pfVar8 = local_100;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar8 = (float *)FUN_004b4110(afStack_144 + 1,local_c0,local_100);
    pfVar6 = local_184;
    pfVar11 = pfVar8;
    for (iVar5 = 0x10; pfVar6 = pfVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar11;
      pfVar11 = pfVar11 + 1;
    }
    pfVar6 = afStackY_22c + 1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar6 = pfVar6 + 1;
    }
    afStackY_22c[0] = 6.210074e-39;
    FUN_004b10b0(DAT_00719b50 + iVar10);
  }
  iVar5 = FUN_004c5e40(0x2d);
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_004b3f80(afStack_144 + 1,uVar7);
    pfVar8 = local_100;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar8 = (float *)FUN_004b4110(afStack_144 + 1,local_c0,local_100);
    pfVar6 = local_184;
    pfVar11 = pfVar8;
    for (iVar5 = 0x10; pfVar6 = pfVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar11;
      pfVar11 = pfVar11 + 1;
    }
    pfVar6 = afStackY_22c + 1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar6 = pfVar6 + 1;
    }
    afStackY_22c[0] = 6.210232e-39;
    FUN_004b10b0(iVar10 + DAT_00719b50);
  }
  iVar5 = FUN_004c5e40(0x2e);
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_004b3f80(afStack_144 + 1,-uVar7);
    pfVar8 = local_100;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar8 = (float *)FUN_004b4110(afStack_144 + 1,local_c0,local_100);
    pfVar6 = local_184;
    pfVar11 = pfVar8;
    for (iVar5 = 0x10; pfVar6 = pfVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar11;
      pfVar11 = pfVar11 + 1;
    }
    pfVar6 = afStackY_22c + 1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar6 = pfVar6 + 1;
    }
    afStackY_22c[0] = 6.210395e-39;
    FUN_004b10b0(iVar10 + DAT_00719b50);
  }
  piVar9 = (int *)FUN_00469fa0();
  pfVar6 = (float *)FUN_004701d0(piVar9);
  local_1b4 = *pfVar6;
  local_1b0 = pfVar6[1];
  local_1ac = pfVar6[2];
  fVar12 = FUN_004a6800(0x7128b0);
  local_1b4 = (float)(fVar12 * (float10)3000.0 * (float10)local_1b4);
  fVar12 = FUN_004a6800(0x7128b0);
  if ((local_1b4 != 0.0) || (fVar12 * (float10)1400.0 * (float10)local_1b0 != (float10)0.0)) {
    lVar13 = __ftol();
    pfVar6 = (float *)FUN_004b3ea0(afStack_84,(uint)lVar13);
    pfVar8 = afStack_144;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    lVar13 = __ftol();
    pfVar6 = (float *)FUN_004b3f10(afStack_84,(uint)lVar13);
    pfVar8 = afStack_44;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar6 = (float *)FUN_004b4110(afStack_84,afStack_144,afStack_44);
    pfVar8 = local_184;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    uStackY_218 = 0x43a117;
    pfVar6 = (float *)FUN_004b4110(afStack_84,&fStack_c4,local_184);
    pfVar8 = pfVar6;
    pfVar11 = local_184;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar11 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    }
    pfVar8 = afStackY_22c;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_004b10b0(iVar10 + DAT_00719b50);
  }
  DAT_006c3590 = local_1d0;
  DAT_006c3594 = local_1cc;
  DAT_006c3598 = local_1c8;
  if (DAT_00599c88 != 0) {
    local_1d0 = local_1d0 + *(float *)(DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8);
    iVar5 = DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8;
    local_1cc = local_1cc + *(float *)(iVar5 + 4);
    local_1c8 = local_1c8 + *(float *)(iVar5 + 8);
  }
  FUN_004b1060((void *)(iVar10 + DAT_00719b50),local_1d0,local_1cc,local_1c8);
  iVar5 = FUN_004c5e40(0x52);
  if (iVar5 != 0) {
    pfVar6 = (float *)FUN_00437b10(afStack_84);
    pfVar8 = local_184;
    for (iVar5 = 0x10; fVar4 = fStack_14c, fVar2 = fStack_150, fVar3 = fStack_154, iVar5 != 0;
        iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    fStack_154 = 0.0;
    fStack_150 = 0.0;
    fStack_14c = 0.0;
    if (DAT_00599c88 == 0) {
      DAT_006c3590 = fVar3;
      DAT_006c3594 = fVar2;
      DAT_006c3598 = fVar4;
    }
    else {
      DAT_006c3590 = fVar3 - *(float *)(DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8);
      iVar5 = DAT_0073b0d0 + DAT_006c359c + 0x50 + DAT_006c359c * 0xa8;
      DAT_006c3594 = fVar2 - *(float *)(iVar5 + 4);
      DAT_006c3598 = fVar4 - *(float *)(iVar5 + 8);
    }
    pfVar6 = local_184;
    pfVar8 = afStackY_22c;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_004b10b0(iVar10 + DAT_00719b50);
    FUN_004b1060((void *)(iVar10 + DAT_00719b50),fVar3,fVar2,fVar4);
  }
  iVar5 = FUN_004c5e40(0x54);
  if (iVar5 != 0) {
    pfVar6 = (float *)(iVar10 + 0x14 + DAT_00719b50);
    pfVar8 = local_184;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    puVar1 = (undefined4 *)(iVar10 + 8 + DAT_00719b50);
    fStack_154 = (float)*puVar1;
    fStack_14c = (float)puVar1[2];
    fStack_150 = (float)puVar1[1];
    pfVar6 = local_184;
    pfVar8 = afStackY_22c;
    for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_00437d60();
  }
  return;
}


