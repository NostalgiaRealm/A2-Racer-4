
/* ==== FUN_00506d00 @ 00506d00 ==== 
 * signature: undefined __thiscall FUN_00506d00(void * this, double * param_1)
 * body: 00506d00-0050851a
 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00506d00(void *this,double *param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  char cVar9;
  double *pdVar10;
  double *pdVar11;
  byte *pbVar12;
  int iVar13;
  uint *puVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  byte *pbVar21;
  double *pdVar22;
  short *psVar23;
  float10 fVar24;
  float10 fVar25;
  double local_7fc [16];
  double local_77c [4];
  double local_75c [9];
  undefined4 auStack_714 [6];
  double adStack_6fc [36];
  double local_5dc [12];
  double local_57c [12];
  double local_51c [2];
  undefined4 auStack_50c [20];
  double local_4bc [12];
  double local_45c [12];
  undefined8 uStack_3fc;
  double adStack_3f4 [11];
  double local_39c [12];
  float local_33c [4];
  float local_32c [4];
  float local_31c [4];
  float local_30c [4];
  double local_2fc;
  double local_2f4;
  double local_2ec;
  double local_2dc;
  double local_2d4;
  double local_2cc;
  double local_2bc [2];
  float local_2ac [4];
  float local_29c [4];
  float local_28c [4];
  double local_27c [2];
  float local_26c [4];
  float local_25c;
  float local_258;
  float local_254;
  float local_24c;
  float local_248;
  float local_244;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  double local_21c [2];
  float local_20c;
  float local_208;
  float local_204;
  double local_1fc [2];
  float local_1ec;
  float local_1e8;
  float local_1e4;
  double local_1dc [2];
  float local_1cc;
  float local_1c8;
  float local_1c4;
  double local_1bc [2];
  float local_1ac;
  float local_1a8;
  float local_1a4;
  int *local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  undefined8 local_178;
  uint local_170;
  uint local_16c;
  undefined1 *local_168;
  undefined1 *local_164;
  double *local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  double local_138 [4];
  float local_118;
  float local_114;
  float local_110;
  float local_108 [4];
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  double local_e4 [4];
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  undefined8 local_94;
  double local_8c;
  undefined8 local_84;
  undefined4 *local_74;
  undefined8 local_70;
  undefined8 local_68;
  float local_60 [4];
  double *local_50;
  double *local_4c;
  double *local_48;
  undefined8 *local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined8 local_34;
  float *local_2c;
  byte *local_28;
  double local_24;
  byte *local_1c;
  float local_18 [2];
  undefined8 local_10;
  byte *local_8;
  
  local_40 = (float)*param_1;
  if (*(int *)((int)this + 0xf0) == 0) {
    pbVar12 = (byte *)0x0;
  }
  else {
    pbVar12 = *(byte **)(*(int *)((int)this + 0xf0) + 0xa4);
  }
  if (*(int *)((int)this + 0x178) == 0) {
    pbVar21 = (byte *)0x0;
  }
  else {
    pbVar21 = *(byte **)(*(int *)((int)this + 0x178) + 0xa4);
  }
  local_19c = this;
  local_28 = pbVar21;
  local_1c = pbVar12;
  FUN_00402d00(local_7fc,0x20,3,FUN_0043e110);
  FUN_004fa010((undefined4 *)local_7fc);
  local_4c = (double *)(pbVar12 + 0x128);
  if (pbVar12 == (byte *)0x0) {
    local_4c = local_7fc;
  }
  pdVar10 = (double *)(pbVar21 + 0x128);
  if (pbVar21 == (byte *)0x0) {
    pdVar10 = local_7fc;
  }
  local_74 = (undefined4 *)((int)this + 0x70);
  local_50 = pdVar10;
  FUN_004fa910(local_74,local_4c,local_4bc);
  FUN_004fa6e0(local_4bc,pdVar10,local_75c);
  pdVar10 = *(double **)((int)this + 0xf4);
  if (pdVar10 == (double *)0x0) {
    pdVar10 = local_39c;
    puVar19 = local_74;
    pdVar11 = local_39c;
    for (iVar16 = 0x18; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(undefined4 *)pdVar11 = *puVar19;
      puVar19 = puVar19 + 1;
      pdVar11 = (double *)((int)pdVar11 + 4);
    }
  }
  pdVar11 = *(double **)((int)this + 0x17c);
  pdVar22 = local_57c;
  for (iVar16 = 0x18; iVar16 != 0; iVar16 = iVar16 + -1) {
    *(undefined4 *)pdVar22 = *(undefined4 *)pdVar10;
    pdVar10 = (double *)((int)pdVar10 + 4);
    pdVar22 = (double *)((int)pdVar22 + 4);
  }
  if (pdVar11 == (double *)0x0) {
    pdVar11 = local_39c;
    puVar19 = (undefined4 *)((int)this + 0xf8);
    pdVar10 = local_39c;
    for (iVar16 = 0x18; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(undefined4 *)pdVar10 = *puVar19;
      puVar19 = puVar19 + 1;
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
  }
  bVar2 = *(byte *)((int)this + 0x189);
  bVar3 = *(byte *)((int)this + 0x187);
  pdVar10 = local_51c;
  for (iVar16 = 0x18; iVar16 != 0; iVar16 = iVar16 + -1) {
    *(undefined4 *)pdVar10 = *(undefined4 *)pdVar11;
    pdVar11 = (double *)((int)pdVar11 + 4);
    pdVar10 = (double *)((int)pdVar10 + 4);
  }
  local_48 = local_57c;
  if ((uint)bVar2 + (uint)bVar3 == 1) {
    local_48 = adStack_6fc + 0x18;
    FUN_004fa570(local_1bc,local_51c + *(char *)((int)this + 0x183) * 4);
    pdVar10 = local_50;
    FUN_004faec0(local_50,local_1bc,local_21c);
    pdVar11 = local_4c;
    FUN_004faf30(local_4c,local_21c,local_e4);
    FUN_004fa570(&local_b4,local_57c + *(char *)((int)this + 0x183) * 4);
    FUN_004f99d0(local_27c,local_e4,(double *)&local_b4);
    local_94 = local_b4 + local_e4[0];
    local_8c = local_ac + local_e4[1];
    local_84 = local_a4 + local_e4[2];
    FUN_004fa0b0(adStack_6fc + 0x18,(undefined4 *)&local_94,(int)*(char *)((int)this + 0x183));
    FUN_004fa9e0(adStack_6fc + 0x18);
    FUN_004fa910(adStack_6fc + 0x18,pdVar11,local_5dc);
    FUN_004fa6e0(local_5dc,pdVar10,local_45c);
    FUN_004faec0(local_57c,local_27c,local_138);
    local_10 = local_138[*(char *)((int)this + 0x185)];
    local_24 = local_138[*(char *)((int)this + 0x184)];
    FUN_004faec0(pdVar11,local_27c,local_1dc);
    FUN_004faf30(pdVar10,local_1dc,local_1fc);
    FUN_004faec0(local_51c,local_1fc,local_2bc);
    iVar16 = (int)*(char *)((int)this + 0x184);
    iVar18 = (int)*(char *)((int)this + 0x185);
    fVar24 = (float10)fpatan((float10)local_2bc[iVar16],(float10)local_2bc[iVar18]);
    fVar25 = (float10)fpatan((float10)local_24,(float10)local_10);
    fVar24 = fVar24 - fVar25;
    if ((float10)3.141592653589793 < fVar24) {
      fVar24 = fVar24 - (float10)6.283185307179586;
    }
    if (fVar24 < (float10)-3.141592653589793) {
      fVar24 = fVar24 + (float10)6.283185307179586;
    }
    (&local_94)[*(char *)((int)this + 0x183)] = (double)fVar24;
    *(undefined4 *)(&local_94 + iVar16) = 0;
    *(undefined4 *)((int)&local_94 + iVar16 * 8 + 4) = 0;
    *(undefined4 *)(&local_94 + iVar18) = 0;
    *(undefined4 *)((int)&local_94 + iVar18 * 8 + 4) = 0;
  }
  else {
    FUN_004fa910(local_57c,local_4c,local_5dc);
    FUN_004fa6e0(local_5dc,local_50,local_45c);
    pdVar11 = local_4c;
    pdVar10 = local_50;
  }
  iVar16 = (uint)*(byte *)((int)this + 0x187) + (uint)*(byte *)((int)this + 0x189);
  if (iVar16 == 3) {
    FUN_004fa910(local_45c,local_51c,local_39c);
    FUN_004f8bf0(&local_b4,local_39c);
    dVar6 = local_a4 * local_a4 * local_a4;
    dVar7 = local_ac * local_ac * local_ac;
    local_8 = (byte *)(float)local_b4;
    local_2c = (float *)((float)local_8 * (float)local_8);
    local_44 = (undefined8 *)((float)local_2c * (float)local_8);
    local_94 = (double)((float)local_8 + (float)local_8 +
                       (float)local_44 * 0.24 + (float)local_44 * (float)local_2c * 0.58);
    local_8c = local_ac + local_ac +
               dVar7 * 0.23999999463558197 + dVar7 * local_ac * local_ac * 0.5799999833106995;
    local_84 = local_a4 + local_a4 +
               dVar6 * 0.23999999463558197 + dVar6 * local_a4 * local_a4 * 0.5799999833106995;
    if (local_9c < 0.0) {
      local_8c = local_8c * -1.0;
      local_84 = local_84 * -1.0;
      local_94 = local_94 * -1.0;
      local_24 = local_84;
    }
  }
  else if (iVar16 == 2) {
    FUN_004fa910(local_45c,local_51c,local_39c);
    iVar16 = (int)*(char *)((int)this + 0x185);
    cVar9 = *(char *)((int)this + 0x184);
    local_b4 = local_39c[iVar16];
    local_ac = local_39c[iVar16 + 4];
    local_a4 = local_39c[iVar16 + 8];
    local_94 = (double)((ulonglong)local_94 & 0xffffffff00000000);
    fVar24 = (float10)fpatan((float10)(double)(&local_b4)[cVar9],
                             (float10)(double)(&local_b4)[iVar16]);
    cVar4 = *(char *)((int)this + 0x183);
    local_94 = 0.0;
    local_8c = 0.0;
    local_84 = 0.0;
    (&local_94)[cVar4] = (double)-fVar24;
    fVar24 = (float10)fpatan((float10)(double)(&local_b4)[cVar4],
                             (float10)(double)(&local_b4)[iVar16]);
    (&local_94)[cVar9] = (double)fVar24;
  }
  else if (iVar16 == 0) {
    local_94 = 0.0;
    local_8c = 0.0;
    local_84 = 0.0;
  }
  local_23c = 0;
  local_238 = 0;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  FUN_004fab40(local_74,(double *)&local_23c,&local_148);
  FUN_004fab40((void *)((int)this + 0xf8),(double *)&local_23c,&local_158);
  FUN_004fadc0(pdVar11,&local_148,&local_2dc);
  FUN_004fadc0(pdVar10,&local_158,&local_2fc);
  FUN_004fabb0(pdVar10,&local_2dc,local_77c);
  pbVar12 = local_1c;
  local_24 = param_1[1];
  if (local_1c == (byte *)0x0) {
    local_f4 = 0.0;
    local_f0 = 0.0;
    local_ec = 0.0;
  }
  else {
    FUN_004f3390(local_1c,&local_148,(float *)(local_1c + 0xa4),(float *)(local_1c + 0x94),&local_f4
                );
  }
  if (local_28 == (byte *)0x0) {
    local_188 = 0.0;
    local_184 = 0.0;
    local_180 = 0.0;
  }
  else {
    FUN_004f3390(local_28,&local_158,(float *)(local_28 + 0xa4),(float *)(local_28 + 0x94),
                 &local_188);
  }
  FUN_004fae60(local_4bc,&local_f4,&local_198);
  FUN_004fae60(local_4bc,&local_188,&local_118);
  local_b4 = local_2fc - local_2dc;
  local_ac = local_2f4 - local_2d4;
  local_a4 = local_2ec - local_2cc;
  FUN_004faec0(local_4bc,(double *)&local_b4,local_138);
  iVar16 = 0;
  local_e4[0] = (double)(local_118 - local_198);
  local_e4[1] = (double)(local_114 - local_194);
  local_e4[2] = (double)(local_110 - local_190);
  dVar6 = (double)local_40;
  local_10 = dVar6 * (double)(local_114 - local_194) + local_138[1];
  local_ac = local_10;
  puVar14 = (uint *)((int)this + 0x1c);
  local_34 = dVar6 * (double)(local_110 - local_190) + local_138[2];
  local_a4 = local_34;
  local_b4 = (double)(local_118 - local_198) * dVar6 + local_138[0];
  do {
    uVar17 = *puVar14;
    if ((uVar17 & 2) != 0) {
      if ((float)puVar14[6] <= (float)*(double *)((int)&local_b4 + iVar16)) {
        if ((float)puVar14[0xc] < (float)*(double *)((int)&local_b4 + iVar16)) {
          fVar1 = (float)puVar14[0xc];
          goto LAB_00507542;
        }
        uVar17 = uVar17 & 0xfffffffe;
      }
      else {
        fVar1 = (float)puVar14[6];
LAB_00507542:
        uVar17 = uVar17 | 1;
        *(double *)((int)&local_b4 + iVar16) =
             (double)(local_40 * (float)*(double *)((int)local_e4 + iVar16) +
                     ((float)*(double *)((int)local_138 + iVar16) - fVar1) *
                     *(float *)((int)this + 100));
      }
      *puVar14 = uVar17;
    }
    iVar16 = iVar16 + 8;
    puVar14 = puVar14 + 1;
  } while (iVar16 < 0x18);
  fVar1 = -*(float *)((int)this + 0x18) * (float)local_24;
  local_10 = (double)(fVar1 * (float)local_ac);
  local_ac = local_10;
  local_34 = (double)(fVar1 * (float)local_a4);
  local_a4 = local_34;
  local_b4 = (double)((float)local_b4 * fVar1);
  if (pbVar12 == (byte *)0x0) {
    local_70._0_4_ = 0.0;
    local_70._4_4_ = 0.0;
    local_68 = (double)((ulonglong)local_68 & 0xffffffff00000000);
  }
  else {
    FUN_004fae60(local_48,(float *)(pbVar12 + 0x94),(float *)&local_70);
  }
  if (local_28 == (byte *)0x0) {
    fVar1 = 0.0;
    local_c0 = 0.0;
    local_bc = 0.0;
  }
  else {
    FUN_004fae60(local_45c,(float *)(local_28 + 0x94),&local_c4);
    fVar1 = local_c4;
  }
  iVar16 = 0;
  local_138[0] = (double)(fVar1 - (float)local_70);
  local_138[1] = (double)(local_c0 - local_70._4_4_);
  local_138[2] = (double)(local_bc - (float)local_68);
  dVar6 = (double)local_40;
  local_10 = dVar6 * (double)(local_c0 - local_70._4_4_) + local_8c;
  local_e4[1] = local_10;
  local_34 = dVar6 * (double)(local_bc - (float)local_68) + local_84;
  local_e4[2] = local_34;
  puVar14 = (uint *)((int)this + 0x28);
  local_e4[0] = (double)(fVar1 - (float)local_70) * dVar6 + local_94;
  do {
    uVar17 = *puVar14;
    if ((uVar17 & 2) != 0) {
      if ((float)puVar14[6] <= (float)*(double *)((int)local_e4 + iVar16)) {
        if ((float)puVar14[0xc] < (float)*(double *)((int)local_e4 + iVar16)) {
          fVar1 = (float)puVar14[0xc];
          goto LAB_00507702;
        }
        uVar17 = uVar17 & 0xfffffffe;
      }
      else {
        fVar1 = (float)puVar14[6];
LAB_00507702:
        uVar17 = uVar17 | 1;
        *(double *)((int)local_e4 + iVar16) =
             (double)(local_40 * (float)*(double *)((int)local_138 + iVar16) +
                     ((float)*(double *)((int)&local_94 + iVar16) - fVar1) *
                     *(float *)((int)this + 100));
      }
      *puVar14 = uVar17;
    }
    iVar16 = iVar16 + 8;
    puVar14 = puVar14 + 1;
  } while (iVar16 < 0x18);
  fVar1 = -*(float *)((int)this + 0x18) * (float)local_24;
  *(undefined1 *)((int)this + 0x18a) = 0;
  iVar16 = 6;
  local_34 = (double)(fVar1 * (float)local_e4[1]);
  local_e4[1] = (double)(fVar1 * (float)local_e4[1]);
  local_68 = (double)(fVar1 * (float)local_e4[2]);
  local_e4[2] = (double)(fVar1 * (float)local_e4[2]);
  pbVar12 = (byte *)((int)this + 0x1c);
  local_e4[0] = (double)((float)local_e4[0] * fVar1);
  do {
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 4;
    iVar16 = iVar16 + -1;
    *(byte *)((int)this + 0x18a) = *(char *)((int)this + 0x18a) + (bVar2 & 1);
  } while (iVar16 != 0);
  if (*(char *)((int)this + 0x187) == '\x01') {
    iVar16 = (int)*(char *)((int)this + 0x183);
    local_8c = local_51c[iVar16 * 4 + 1];
    uVar5 = auStack_50c[iVar16 * 8];
    local_10._4_4_ = (int)((ulonglong)local_10 >> 0x20);
    local_10 = (double)CONCAT44(local_10._4_4_,uVar5);
    local_94 = local_51c[iVar16 * 4];
    local_10 = (double)CONCAT44(auStack_50c[iVar16 * 8 + 1],uVar5);
    local_84 = (double)CONCAT44(auStack_50c[iVar16 * 8 + 1],uVar5);
    FUN_004faec0(local_50,(double *)&local_94,local_27c);
    FUN_004faf30(local_4c,local_27c,local_138);
    iVar16 = (int)*(char *)((int)this + 0x183);
    if ((float)((float10)local_57c[iVar16 * 4] * (float10)local_138[0] +
               (float10)local_138[1] * (float10)local_57c[iVar16 * 4 + 1] +
               (float10)local_138[2] * (float10)local_57c[iVar16 * 4 + 2]) < 1.0) {
      fVar24 = (float10)FUN_00558550();
    }
    else {
      fVar24 = (float10)0.0;
    }
    fVar24 = (float10)3.141592653589793 - ABS(fVar24);
    if (fVar24 < (float10)1.0) {
      local_e4[2] = (double)((float10)local_68 * fVar24);
      local_e4[0] = (double)((float10)local_e4[0] * fVar24);
      local_e4[1] = (double)((float10)local_34 * fVar24);
      local_10 = local_e4[2];
    }
  }
  pbVar12 = (byte *)((int)this + 0x1c);
  pfVar15 = local_18;
  iVar16 = 0;
  do {
    if ((*pbVar12 & 1) != 0) {
      local_18[0] = 0.0;
      local_18[1] = 0.0;
      local_10 = (double)((ulonglong)local_10 & 0xffffffff00000000);
      *pfVar15 = 1.0;
      local_188 = -local_18[0];
      local_184 = -local_18[1];
      local_180 = -(float)local_10;
      FUN_004fafa0(local_74,local_18,local_26c);
      FUN_004fafa0(local_75c,&local_188,(float *)&local_84);
      FUN_004fafa0(local_4bc,local_18,local_2ac);
      FUN_004fafa0(local_4bc,&local_188,(float *)(local_138 + 2));
      if ((local_1c == (byte *)0x0) || ((*local_1c & 0xc) != 0)) {
        local_3c = 0.0;
        local_38 = 0.0;
        local_34 = (double)((ulonglong)local_34 & 0xffffffff00000000);
        local_c4 = 0.0;
        local_c0 = 0.0;
        local_bc = 0.0;
      }
      else {
        FUN_004f42f0(local_1c,&local_148,local_26c,local_2ac,&local_3c,&local_c4);
      }
      if ((local_28 == (byte *)0x0) || ((*local_28 & 0xc) != 0)) {
        local_70._0_4_ = 0.0;
        local_70._4_4_ = 0.0;
        local_68 = (double)((ulonglong)local_68 & 0xffffffff00000000);
        local_f4 = 0.0;
        local_f0 = 0.0;
        local_ec = 0.0;
      }
      else {
        FUN_004f42f0(local_28,&local_158,(float *)&local_84,(float *)(local_138 + 2),
                     (float *)&local_70,&local_f4);
      }
      if (local_1c == (byte *)0x0) {
        local_198 = 0.0;
        local_194 = 0.0;
        local_190 = 0.0;
      }
      else {
        FUN_004f3390(local_1c,&local_148,&local_3c,&local_c4,&local_198);
      }
      if (local_28 == (byte *)0x0) {
        local_118 = 0.0;
        local_114 = 0.0;
        local_110 = 0.0;
      }
      else {
        FUN_004f3390(local_28,&local_158,(float *)&local_70,&local_f4,&local_118);
      }
      FUN_004fae60(local_4bc,&local_198,&local_1cc);
      FUN_004fae60(local_4bc,&local_118,&local_1ec);
      *(double *)((int)&uStack_3fc + iVar16) = (double)(local_1ec - local_1cc);
      *(double *)((int)adStack_3f4 + iVar16) = (double)(local_1e8 - local_1c8);
      *(double *)((int)adStack_3f4 + iVar16 + 8) = (double)(local_1e4 - local_1c4);
      FUN_004fae60(local_48,&local_c4,&local_1ac);
      FUN_004fae60(local_45c,&local_f4,&local_20c);
      *(double *)((int)adStack_6fc + iVar16) = (double)(local_20c - local_1ac);
      *(double *)((int)adStack_6fc + iVar16 + 8) = (double)(local_208 - local_1a8);
      *(double *)((int)adStack_6fc + iVar16 + 0x10) = (double)(local_204 - local_1a4);
    }
    iVar16 = iVar16 + 0x20;
    pbVar12 = pbVar12 + 4;
    pfVar15 = pfVar15 + 1;
  } while (iVar16 < 0x60);
  param_1 = (double *)&local_70;
  local_2c = (float *)((int)this + 0x28);
  iVar16 = 0;
  do {
    if ((*(byte *)local_2c & 1) != 0) {
      local_70._0_4_ = 0.0;
      local_70._4_4_ = 0.0;
      local_68 = (double)((ulonglong)local_68 & 0xffffffff00000000);
      *(undefined4 *)param_1 = 0x3f800000;
      local_1ac = -(float)local_70;
      local_1a8 = -local_70._4_4_;
      local_1a4 = -(float)local_68;
      FUN_004fafa0(local_48,(float *)&local_70,(float *)&local_84);
      FUN_004fafa0(local_45c,&local_1ac,(float *)(local_138 + 2));
      if ((local_1c == (byte *)0x0) || ((*local_1c & 0xc) != 0)) {
        local_18[0] = 0.0;
        local_18[1] = 0.0;
        local_10 = (double)((ulonglong)local_10 & 0xffffffff00000000);
      }
      else {
        FUN_004f4390((int)local_1c,(float *)&local_84,1.0,local_18);
      }
      pbVar12 = local_28;
      if ((local_28 == (byte *)0x0) || ((*local_28 & 0xc) != 0)) {
        local_3c = 0.0;
        local_38 = 0.0;
        local_34 = (double)((ulonglong)local_34 & 0xffffffff00000000);
      }
      else {
        FUN_004f4390((int)local_28,(float *)(local_138 + 2),1.0,&local_3c);
      }
      if (local_1c == (byte *)0x0) {
        local_f4 = 0.0;
        local_f0 = 0.0;
        local_ec = 0.0;
      }
      else {
        local_f4 = local_140 * local_18[1] - (float)local_10 * local_144;
        local_f0 = (float)local_10 * local_148 - local_140 * local_18[0];
        local_ec = local_144 * local_18[0] - local_18[1] * local_148;
      }
      if (pbVar12 == (byte *)0x0) {
        local_c4 = 0.0;
        local_c0 = 0.0;
        local_bc = 0.0;
      }
      else {
        local_c4 = local_150 * local_38 - (float)local_34 * local_154;
        local_c0 = (float)local_34 * local_158 - local_150 * local_3c;
        local_bc = local_154 * local_3c - local_38 * local_158;
      }
      FUN_004fae60(local_74,&local_f4,&local_1cc);
      FUN_004fae60(local_75c,&local_c4,&local_20c);
      *(double *)((int)local_39c + iVar16) = (double)(local_20c - local_1cc);
      *(double *)((int)local_39c + iVar16 + 8) = (double)(local_208 - local_1c8);
      *(double *)((int)local_39c + iVar16 + 0x10) = (double)(local_204 - local_1c4);
      FUN_004fae60(local_48,local_18,&local_118);
      FUN_004fae60(local_45c,&local_3c,&local_1ec);
      *(double *)((int)adStack_6fc + iVar16 + 0x60) = (double)(local_1ec - local_118);
      *(double *)((int)adStack_6fc + iVar16 + 0x68) = (double)(local_1e8 - local_114);
      *(double *)((int)adStack_6fc + iVar16 + 0x70) = (double)(local_1e4 - local_110);
    }
    iVar16 = iVar16 + 0x20;
    local_2c = (float *)((int)local_2c + 4);
    param_1 = (double *)((int)param_1 + 4);
  } while (iVar16 < 0x60);
  FUN_00543d90((undefined4 *)&local_178);
  local_178._0_4_ = 0xe826d695;
  local_170 = (uint)*(byte *)((int)this + 0x18a);
  local_178._4_4_ = 0x3e112e0b;
  uVar17 = local_170 + 1 & 0xfffffffe;
  local_10 = (double)(CONCAT44(local_170 + 1,(float)local_10) & 0xfffffffeffffffff);
  local_16c = uVar17;
  FUN_00559400();
  local_168 = &stack0xfffff7f8;
  local_68._4_4_ = uVar17 << 3;
  FUN_00559400();
  local_160 = (double *)&stack0xfffff7f8;
  FUN_00559400();
  local_164 = &stack0xfffff7f8;
  FUN_00543b00((int)&local_178);
  local_44 = &local_b4;
  pfVar15 = local_108 + 3;
  pbVar12 = (byte *)((int)this + 0x1c);
  param_1 = (double *)0x0;
  local_f8 = 0;
  local_2c = pfVar15;
  local_34 = (double)CONCAT44(pbVar12,(float)local_34);
  do {
    if ((*pbVar12 & 1) != 0) {
      pbVar12 = (byte *)((int)this + 0x1c);
      iVar18 = 0;
      iVar20 = (int)param_1 << 3;
      local_8 = pbVar12;
      iVar16 = 0;
      do {
        iVar13 = iVar16;
        if ((*pbVar12 & 1) != 0) {
          iVar18 = iVar18 + 1;
          *(undefined4 *)(local_168 + iVar20) = *(undefined4 *)(&uStack_3fc + local_f8 + iVar13);
          *(undefined4 *)(local_168 + iVar20 + 4) =
               *(undefined4 *)((int)&uStack_3fc + (local_f8 + iVar13) * 8 + 4);
          iVar20 = iVar20 + local_68._4_4_;
          this = local_19c;
        }
        iVar16 = iVar13 + 1;
        pbVar12 = pbVar12 + 4;
        local_8 = pbVar12;
      } while (iVar16 < 3);
      if (iVar16 < 6) {
        local_8 = (byte *)((int)this + (iVar13 + 8) * 4);
        iVar18 = (int)(iVar18 * local_10._4_4_ + (int)param_1) * 8;
        do {
          if ((*local_8 & 1) != 0) {
            *(undefined4 *)(local_168 + iVar18) = auStack_714[(local_f8 + iVar16) * 2];
            *(undefined4 *)(local_168 + iVar18 + 4) =
                 *(undefined4 *)((int)adStack_6fc + (local_f8 + iVar16) * 8 + -0x14);
            iVar18 = iVar18 + local_68._4_4_;
          }
          iVar16 = iVar16 + 1;
          local_8 = local_8 + 4;
        } while (iVar16 < 6);
      }
      if (local_f8 < 0xc) {
        uVar5 = *(undefined4 *)((int)local_44 + 4);
        *(undefined4 *)(local_164 + (int)param_1 * 8) = *(undefined4 *)local_44;
        *(undefined4 *)(local_164 + (int)param_1 * 8 + 4) = uVar5;
      }
      else {
        *(float *)(local_164 + (int)param_1 * 8) = *pfVar15;
        *(float *)(local_164 + (int)param_1 * 8 + 4) = pfVar15[1];
      }
      param_1 = (double *)((int)param_1 + 1);
    }
    local_f8 = local_f8 + 4;
    pbVar12 = (byte *)(local_34._4_4_ + 4);
    pfVar15 = pfVar15 + 2;
    local_34 = (double)CONCAT44(pbVar12,(float)local_34);
    local_44 = local_44 + 1;
    local_2c = pfVar15;
  } while (local_f8 < 0x18);
  iVar16 = FUN_00543ae0((double *)&local_178);
  if (iVar16 == 0) {
    return;
  }
  iVar16 = 0;
  pfVar15 = local_60;
  puVar14 = (uint *)((int)this + 0x1c);
  param_1 = (double *)0x3;
  pdVar10 = local_160;
  do {
    if ((*puVar14 & 1) == 0) {
      *pfVar15 = 0.0;
    }
    else {
      *pfVar15 = (float)*pdVar10;
      iVar16 = iVar16 + 1;
      pdVar10 = pdVar10 + 1;
    }
    pfVar15 = pfVar15 + 1;
    puVar14 = puVar14 + 1;
    param_1 = (double *)((int)param_1 + -1);
  } while (param_1 != (double *)0x0);
  pfVar15 = local_108;
  iVar18 = 3;
  local_160 = local_160 + iVar16;
  pbVar12 = (byte *)((int)this + 0x28);
  do {
    if ((*pbVar12 & 1) == 0) {
      *pfVar15 = 0.0;
    }
    else {
      *pfVar15 = (float)*local_160;
    }
    if ((*pbVar12 & 1) != 0) {
      local_160 = local_160 + 1;
    }
    pfVar15 = pfVar15 + 1;
    pbVar12 = pbVar12 + 4;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  pfVar15 = *(float **)((int)this + 0x68);
  local_168 = (undefined1 *)0x0;
  local_160 = (double *)0x0;
  local_164 = (undefined1 *)0x0;
  if (pfVar15 != (float *)0x0) {
    cVar9 = (char)*(int *)((int)this + 0x18c);
    if (cVar9 == '\0') {
      if (ABS(local_60[0]) / *pfVar15 +
          ABS(local_60[1]) / pfVar15[1] + ABS(local_60[2]) / pfVar15[2] < 3.0) goto LAB_005083b2;
    }
    else if (cVar9 == '\x01') {
      if (((ABS(local_60[0]) / *pfVar15) * (ABS(local_60[0]) / *pfVar15) +
          (ABS(local_60[1]) / pfVar15[1]) * (ABS(local_60[1]) / pfVar15[1]) +
          (ABS(local_60[2]) / pfVar15[2]) * (ABS(local_60[2]) / pfVar15[2])) * (float)local_24 *
          (float)local_24 < 1.0) goto LAB_005083b2;
    }
    else if (((((cVar9 == '\x02') && (ABS(local_60[0]) < *pfVar15)) &&
              (ABS(local_60[1]) < pfVar15[1])) &&
             ((ABS(local_60[2]) < pfVar15[2] && (ABS(local_108[0]) < pfVar15[3])))) &&
            ((ABS(local_108[1]) < pfVar15[4] && (ABS(local_108[2]) < pfVar15[5]))))
    goto LAB_005083b2;
    param_1 = (double *)0x3f800000;
    iVar16 = 0;
    local_38 = 9.18355e-41;
    local_34 = (double)CONCAT26(local_34._6_2_,0x100000002);
    psVar23 = (short *)((int)&local_38 + 2);
    do {
      cVar9 = (char)*(int *)((int)this + 0x18c);
      if (cVar9 == '\0') {
        fVar1 = ABS(local_60[1]) + ABS(local_60[2]);
        fVar8 = local_60[0];
LAB_005082d9:
        local_24 = (double)(ABS(fVar8) + fVar1);
      }
      else {
        if (cVar9 == '\x01') {
          fVar1 = (ABS(local_60[*psVar23]) + ABS(local_60[psVar23[1]])) * 0.41493773;
          fVar8 = local_60[psVar23[-1]];
          goto LAB_005082d9;
        }
        if (cVar9 == '\x02') {
          local_24 = (double)ABS(local_60[iVar16]);
          local_10 = (double)ABS(local_108[iVar16]);
        }
      }
      iVar18 = *(int *)((int)this + 0x68);
      if (*(float *)(iVar18 + iVar16 * 4) < (float)local_24) {
        iVar20 = *(int *)(iVar18 + 0x18 + iVar16 * 4);
        if (iVar20 == 1) {
          pdVar10 = (double *)((local_40 * *(float *)(iVar18 + iVar16 * 4)) / (float)local_24);
          if ((float)pdVar10 < (float)param_1) {
            param_1 = pdVar10;
          }
        }
        else if (iVar20 == 2) {
          if (this == (int *)0x0) {
            return;
          }
          (**(code **)(*(int *)this + 0x18))(1);
          return;
        }
      }
      if ((*(float *)(iVar18 + 0xc + iVar16 * 4) / (float)local_10 < 1.0) &&
         (*(int *)(iVar18 + 0x18 + iVar16 * 4) == 2)) {
        (**(code **)(*(int *)this + 0x48))(iVar16);
      }
      iVar16 = iVar16 + 1;
      psVar23 = psVar23 + 1;
    } while (iVar16 < 3);
    local_60[1] = local_60[1] * (float)param_1;
    local_60[2] = local_60[2] * (float)param_1;
    local_60[0] = local_60[0] * (float)param_1;
    local_108[1] = local_108[1] * (float)param_1;
    local_24 = (double)local_108[1];
    local_108[2] = local_108[2] * (float)param_1;
    local_10 = (double)local_108[2];
    local_108[0] = local_108[0] * (float)param_1;
  }
LAB_005083b2:
  local_24c = -local_60[0];
  local_248 = -local_60[1];
  local_244 = -local_60[2];
  local_25c = -local_108[0];
  local_258 = -local_108[1];
  local_254 = -local_108[2];
  FUN_004fafa0(local_74,local_60,local_29c);
  FUN_004fafa0(local_75c,&local_24c,local_28c);
  FUN_004fae60(local_4c,local_29c,local_31c);
  FUN_004fae60(local_50,local_28c,local_32c);
  FUN_004fafa0(local_48,local_108,local_30c);
  FUN_004fafa0(local_45c,&local_25c,local_33c);
  pbVar12 = local_1c;
  if ((local_1c != (byte *)0x0) && ((*local_1c & 0xc) == 0)) {
    FUN_004f3fc0(local_1c,&local_148,local_29c,local_31c);
    FUN_004f4460(pbVar12,local_30c);
  }
  pbVar12 = local_28;
  if ((local_28 != (byte *)0x0) && ((*local_28 & 0xc) == 0)) {
    FUN_004f3fc0(local_28,&local_158,local_28c,local_32c);
    FUN_004f4460(pbVar12,local_33c);
  }
  return;
}


