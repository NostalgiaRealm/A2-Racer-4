
/* ==== FUN_004b1380 @ 004b1380 ==== 
 * signature: undefined __fastcall FUN_004b1380(int * param_1)
 * body: 004b1380-004b1da2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b1380(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [16];
  
  if (param_1[0x1f] == 1) {
    FUN_004c3fa0((byte *)s_FOLLOW_MODE_is_ON__005b0c0c);
    pfVar9 = (float *)(param_1 + 2);
    pfVar8 = (float *)(param_1[0x3b] + param_1[0x3a] * 0xc);
    *pfVar9 = *pfVar8;
    param_1[3] = (int)pfVar8[1];
    param_1[4] = (int)pfVar8[2];
    piVar11 = (int *)(param_1[0x3a] * 0x40 + *(int *)((int)param_1 + 0x132));
    piVar15 = param_1 + 5;
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *piVar15 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar15 = piVar15 + 1;
    }
    iVar12 = DAT_0073b0d0 + param_1[0x36] * 0xa9;
    *pfVar8 = *(float *)(iVar12 + 0x50);
    pfVar8[1] = *(float *)(iVar12 + 0x54);
    pfVar8[2] = *(float *)(iVar12 + 0x58);
    puVar14 = (undefined4 *)(DAT_0073b0d0 + param_1[0x36] * 0xa9 + 0x10);
    puVar16 = (undefined4 *)(param_1[0x3a] * 0x40 + *(int *)((int)param_1 + 0x132));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    iVar12 = param_1[0x3a];
    param_1[0x3a] = iVar12 + 1;
    if (4 < iVar12 + 1) {
      param_1[0x3a] = 0;
    }
    pfVar8 = (float *)FUN_004b42a0(&local_4c,(float *)(param_1 + 0x37),(int)(param_1 + 5));
    fVar1 = pfVar8[1];
    fVar2 = pfVar8[2];
    *pfVar9 = *pfVar8 + *pfVar9;
    param_1[3] = (int)(fVar1 + (float)param_1[3]);
    param_1[4] = (int)(fVar2 + (float)param_1[4]);
  }
  else {
    if (param_1[0x1d] == 1) {
      FUN_004c3fa0((byte *)s_POSITION_LOCK_is_ON__005b0bf4);
      if (param_1[0x2e] == -1) {
        param_1[2] = param_1[0x2f];
        param_1[3] = param_1[0x30];
        param_1[4] = param_1[0x31];
      }
      else {
        iVar12 = param_1[0x2e] * 0xa9;
        piVar11 = param_1 + 5;
        piVar15 = (int *)(iVar12 + 0x10 + DAT_0073b0d0);
        piVar17 = piVar11;
        for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
          *piVar17 = *piVar15;
          piVar15 = piVar15 + 1;
          piVar17 = piVar17 + 1;
        }
        if (*param_1 == 1) {
          pfVar9 = (float *)(*(int *)(iVar12 + 0xc + DAT_0073b0d0) * 0xf0 + 0xbc + DAT_00715e50);
          fVar1 = *pfVar9;
          local_44 = pfVar9[2];
          fVar2 = (float)param_1[0x31];
          fVar3 = local_44 * local_44 + fVar1 * fVar1;
          fVar4 = SQRT(fVar3);
          local_48 = 0.0 / fVar4;
          local_44 = local_44 / fVar4;
          local_58 = (fVar1 / fVar4) * fVar2;
          local_58 = local_58 + local_58;
          local_54 = local_48 * fVar2 + local_48 * fVar2;
          local_50 = local_44 * fVar2 + local_44 * fVar2;
          if (150.0 < fVar3) {
            _DAT_00719bb8 = local_58;
            _DAT_00719bbc = local_54;
            _DAT_00719bc0 = local_50;
          }
          fVar4 = fVar4 * 0.01;
          if (0.1 <= fVar4) {
            if (0.25 < fVar4) {
              fVar4 = 0.25;
            }
          }
          else {
            fVar4 = 0.1;
          }
          param_1[0x22] = (int)fVar4;
          param_1[0x24] = (int)(fVar4 * 2.5);
          pfVar9 = (float *)FUN_004b42a0(&local_4c,(float *)&DAT_00719bb8,(int)piVar11);
          local_64 = *pfVar9;
          local_5c = pfVar9[2];
        }
        else {
          local_4c = (float)param_1[0x2f];
          local_44 = (float)param_1[0x31];
          local_48 = 0.0;
          pfVar9 = (float *)FUN_004b42a0(&local_58,&local_4c,(int)piVar11);
          local_64 = *pfVar9;
          local_5c = pfVar9[2];
        }
        pfVar9 = (float *)(param_1 + 2);
        iVar12 = DAT_0073b0d0 + param_1[0x2e] * 0xa9;
        *pfVar9 = *(float *)(iVar12 + 0x50);
        param_1[3] = *(int *)(iVar12 + 0x54);
        param_1[4] = *(int *)(iVar12 + 0x58);
        *pfVar9 = local_64 + *pfVar9;
        param_1[3] = (int)((float)param_1[0x30] + (float)param_1[3]);
        param_1[4] = (int)(local_5c + (float)param_1[4]);
      }
    }
    pfVar9 = (float *)(param_1 + 0x15);
    pfVar10 = (float *)FUN_004b4070(&local_4c,(int)(param_1 + 5));
    pfVar8 = (float *)(param_1 + 2);
    *pfVar9 = *pfVar10;
    param_1[0x16] = (int)pfVar10[1];
    param_1[0x17] = (int)pfVar10[2];
    *pfVar9 = *pfVar9 + *pfVar8;
    param_1[0x16] = (int)((float)param_1[3] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[4] + (float)param_1[0x17]);
    if (param_1[0x1e] == 1) {
      FUN_004c3fa0((byte *)s_TARGET_LOCK_is_ON__005b0be0);
      if (param_1[0x32] == -1) {
        *pfVar9 = (float)param_1[0x33];
        param_1[0x16] = param_1[0x34];
        param_1[0x17] = param_1[0x35];
      }
      else {
        pfVar10 = (float *)FUN_004b42a0(&local_4c,(float *)(param_1 + 0x33),
                                        DAT_0073b0d0 + param_1[0x32] * 0xa9 + 0x10);
        local_58 = *pfVar10;
        iVar13 = param_1[0x32];
        local_54 = pfVar10[1];
        local_50 = pfVar10[2];
        iVar12 = DAT_0073b0d0 + iVar13 + 0x50 + iVar13 * 0xa8;
        fVar1 = *(float *)(iVar12 + 4);
        fVar2 = *(float *)(iVar12 + 8);
        *pfVar9 = local_58 + *(float *)(DAT_0073b0d0 + iVar13 + 0x50 + iVar13 * 0xa8);
        param_1[0x16] = (int)(local_54 + fVar1);
        param_1[0x17] = (int)(local_50 + fVar2);
      }
    }
    if ((DAT_00719bd6 & 1) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 1;
      FUN_005584e0(0x4b1df0);
    }
    if ((DAT_00719bd6 & 2) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 2;
      FUN_005584e0(0x4b1de0);
    }
    if ((DAT_00719bd6 & 4) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 4;
      FUN_005584e0(0x4b1dd0);
    }
    if ((DAT_00719bd6 & 8) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 8;
      FUN_005584e0(0x4b1dc0);
    }
    if ((DAT_00719bd6 & 0x10) == 0) {
      DAT_00719bd6 = DAT_00719bd6 | 0x10;
      FUN_005584e0(0x4b1db0);
    }
    if (param_1[0x1b] == 1) {
      FUN_004c3fa0((byte *)s_DAMPENING_is_ON__005b0bcc);
      _DAT_00719bc8 = *pfVar8 - (float)param_1[0x28];
      _DAT_00719bcc = (float)param_1[3] - (float)param_1[0x29];
      _DAT_00719bd0 = (float)param_1[4] - (float)param_1[0x2a];
      local_58 = _DAT_00719bc8;
      local_54 = _DAT_00719bcc;
      local_50 = _DAT_00719bd0;
      iVar12 = FUN_004b4310(local_40,(undefined4 *)(DAT_0073b0d0 + param_1[0x32] * 0xa9 + 0x10));
      pfVar10 = (float *)FUN_004b42a0(&local_4c,(float *)&DAT_00719bc8,iVar12);
      local_58 = *pfVar10;
      _DAT_00719c18 = local_58 * (float)param_1[0x22];
      local_54 = pfVar10[1];
      _DAT_00719c1c = local_54 * (float)param_1[0x23];
      local_50 = pfVar10[2];
      _DAT_00719c20 = local_50 * (float)param_1[0x24];
      pfVar10 = (float *)FUN_004b42a0(&local_4c,(float *)&DAT_00719c18,
                                      DAT_0073b0d0 + param_1[0x32] * 0xa9 + 0x10);
      _DAT_00719c08 = *pfVar10;
      _DAT_00719c0c = pfVar10[1];
      _DAT_00719c10 = pfVar10[2];
      local_58 = _DAT_00719c08 + (float)param_1[0x28];
      local_54 = _DAT_00719c0c + (float)param_1[0x29];
      local_50 = _DAT_00719c10 + (float)param_1[0x2a];
      *pfVar8 = local_58;
      param_1[3] = (int)local_54;
      param_1[4] = (int)local_50;
    }
    if (param_1[0x1c] == 1) {
      _DAT_00719bc8 = *pfVar9 - (float)param_1[0x2b];
      _DAT_00719bcc = (float)param_1[0x16] - (float)param_1[0x2c];
      _DAT_00719bd0 = (float)param_1[0x17] - (float)param_1[0x2d];
      _DAT_00719c08 = _DAT_00719bc8 * (float)param_1[0x25];
      _DAT_00719c0c = _DAT_00719bcc * (float)param_1[0x26];
      _DAT_00719c10 = _DAT_00719bd0 * (float)param_1[0x27];
      local_58 = _DAT_00719c08 + (float)param_1[0x2b];
      local_54 = _DAT_00719c0c + (float)param_1[0x2c];
      local_50 = _DAT_00719c10 + (float)param_1[0x2d];
      _DAT_00719c18 = _DAT_00719c08;
      _DAT_00719c1c = _DAT_00719c0c;
      _DAT_00719c20 = _DAT_00719c10;
      *pfVar9 = local_58;
      param_1[0x2b] = (int)local_58;
      param_1[0x2c] = (int)local_54;
      param_1[0x16] = (int)local_54;
      param_1[0x2d] = (int)local_50;
      param_1[0x17] = (int)local_50;
    }
    if (param_1[0x20] == 1) {
      piVar11 = (int *)FUN_004b4030(&local_4c,(int)(param_1 + 5));
      param_1[0x18] = *piVar11;
      param_1[0x19] = piVar11[1];
      param_1[0x1a] = piVar11[2];
    }
    else {
      param_1[0x18] = 0;
      param_1[0x19] = 0x3f800000;
      param_1[0x1a] = 0;
    }
    fVar4 = *pfVar9 - *pfVar8;
    fVar6 = (float)param_1[0x16] - (float)param_1[3];
    fVar1 = (float)param_1[0x1a];
    fVar2 = (float)param_1[0x19];
    fVar3 = (float)param_1[0x18];
    fVar7 = (float)param_1[0x17] - (float)param_1[4];
    fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4);
    fVar4 = fVar4 / fVar5;
    fVar6 = fVar6 / fVar5;
    fVar7 = fVar7 / fVar5;
    fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    local_58 = (fVar2 / fVar5) * fVar7 - (fVar1 / fVar5) * fVar6;
    fVar1 = (fVar1 / fVar5) * fVar4 - fVar7 * (fVar3 / fVar5);
    fVar3 = fVar6 * (fVar3 / fVar5) - (fVar2 / fVar5) * fVar4;
    fVar2 = SQRT(local_58 * local_58 + fVar1 * fVar1 + fVar3 * fVar3);
    fVar5 = local_58 / fVar2;
    piVar11 = param_1 + 5;
    fVar1 = fVar1 / fVar2;
    fVar3 = fVar3 / fVar2;
    local_4c = fVar3 * fVar6 - fVar1 * fVar7;
    local_54 = fVar7 * fVar5 - fVar3 * fVar4;
    local_50 = fVar1 * fVar4 - fVar6 * fVar5;
    local_44 = SQRT(local_4c * local_4c + local_54 * local_54 + local_50 * local_50);
    local_4c = local_4c / local_44;
    local_48 = local_54 / local_44;
    local_44 = local_50 / local_44;
    FUN_004b40b0(piVar11,fVar5,fVar1,fVar3);
    FUN_004b40d0((int)piVar11,local_4c,local_48,local_44);
    FUN_004b40f0((int)piVar11,fVar4,fVar6,fVar7);
  }
  param_1[0x28] = param_1[2];
  param_1[0x29] = param_1[3];
  param_1[0x2a] = param_1[4];
  return;
}


