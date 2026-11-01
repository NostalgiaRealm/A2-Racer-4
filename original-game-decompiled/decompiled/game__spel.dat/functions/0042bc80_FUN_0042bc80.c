
/* ==== FUN_0042bc80 @ 0042bc80 ==== 
 * signature: undefined4 __cdecl FUN_0042bc80(int param_1)
 * body: 0042bc80-0042c6f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0042bc80(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  undefined4 *puVar22;
  int iVar23;
  int iVar24;
  float10 fVar25;
  float10 extraout_ST0;
  float10 extraout_ST1;
  longlong lVar26;
  float local_9c;
  float local_84;
  int local_7c;
  int *local_78;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int *local_30;
  int local_2c;
  float local_28 [3];
  float local_1c [2];
  float local_14;
  int local_10 [4];
  
  if ((DAT_006c30b5 & 1) == 0) {
    DAT_006c30b5 = DAT_006c30b5 | 1;
    FUN_005584e0(0x42c700);
  }
  if ((DAT_006c30b5 & 2) == 0) {
    DAT_006c30b5 = DAT_006c30b5 | 2;
    fVar25 = FUN_004a6800(0x7128b0);
    _DAT_006c312c = (float)fVar25;
  }
  fVar25 = FUN_004a6800(0x7128b0);
  _DAT_006c312c = (float)(((float10)_DAT_006c312c * (float10)9.0 + fVar25) * (float10)0.1);
  if (param_1 != DAT_006fba58) {
    iVar16 = FUN_004134e0(param_1);
    if (iVar16 == -1) {
      return 0;
    }
    if (param_1 != DAT_006fba58) {
      iVar16 = FUN_004134e0(param_1);
      goto LAB_0042bd33;
    }
  }
  iVar16 = 6;
LAB_0042bd33:
  local_30 = (int *)(&DAT_006c3098 + iVar16 * 4);
  *local_30 = 0;
  iVar24 = param_1 * 0xf0;
  iVar17 = FUN_004a8600((void *)(iVar24 + DAT_00715e50),0);
  iVar1 = *(int *)(iVar24 + 0x24 + DAT_00715e50);
  fVar3 = ABS(*(float *)(DAT_0073b5c8 + 0x14 +
                        *(int *)(*(int *)(*(int *)(*(int *)(DAT_0073b0d0 + iVar17 * 0xa9 + 4) * 9 +
                                                   4 + DAT_0073b168) + 4) * 0x10 + DAT_0073b120) *
                        0xac));
  if (*(int *)(&DAT_006c3280 + iVar16 * 4) == 0) {
    *(undefined4 *)(&DAT_006c3280 + iVar16 * 4) = 1;
    iVar17 = 0;
    pfVar21 = (float *)(&DAT_006c2f48 + iVar16 * 0x30);
    do {
      iVar18 = FUN_004a8600((void *)(iVar24 + DAT_00715e50),iVar17);
      iVar23 = DAT_0073b0d0 + iVar18 * 0xa9;
      *pfVar21 = *(float *)(iVar23 + 0x50);
      pfVar21[1] = *(float *)(iVar23 + 0x54);
      iVar18 = DAT_0073b0d0;
      pfVar21[2] = *(float *)(iVar23 + 0x58);
      pfVar19 = (float *)FUN_004b42a0(local_1c,pfVar21,iVar1 * 0xa9 + 0x10 + iVar18);
      *pfVar21 = *pfVar19;
      pfVar21[1] = pfVar19[1];
      pfVar21[2] = pfVar19[2];
      iVar23 = *(int *)(iVar24 + 0x24 + DAT_00715e50);
      iVar17 = iVar17 + 1;
      iVar18 = DAT_0073b0d0 + iVar23 + 0x50 + iVar23 * 0xa8;
      *pfVar21 = *pfVar21 + *(float *)(DAT_0073b0d0 + iVar23 + 0x50 + iVar23 * 0xa8);
      pfVar21[1] = *(float *)(iVar18 + 4) + pfVar21[1];
      pfVar21[2] = *(float *)(iVar18 + 8) + pfVar21[2];
      pfVar21 = pfVar21 + 3;
    } while (iVar17 < 4);
  }
  local_7c = 0;
  iVar1 = iVar1 * 0xa9;
  local_78 = local_10;
  pfVar21 = (float *)(&DAT_006c2f48 + iVar16 * 0x30);
  pfVar19 = &local_60;
  do {
    iVar18 = FUN_004a8600((void *)(DAT_00715e50 + iVar24),local_7c);
    iVar16 = FUN_004a8600((void *)(iVar24 + DAT_00715e50),local_7c);
    iVar16 = iVar16 * 0xa9 + DAT_0073b0d0;
    *pfVar19 = *(float *)(iVar16 + 0x50);
    pfVar19[1] = *(float *)(iVar16 + 0x54);
    pfVar19[2] = *(float *)(iVar16 + 0x58);
    pfVar20 = (float *)FUN_004b42a0(local_28,pfVar19,iVar1 + 0x10 + DAT_0073b0d0);
    *pfVar19 = *pfVar20;
    pfVar19[1] = pfVar20[1];
    pfVar19[2] = pfVar20[2];
    iVar17 = *(int *)(iVar24 + 0x24 + DAT_00715e50);
    fVar2 = pfVar21[1];
    iVar16 = DAT_0073b0d0 + iVar17 + 0x50 + iVar17 * 0xa8;
    *pfVar19 = *(float *)(DAT_0073b0d0 + iVar17 + 0x50 + iVar17 * 0xa8) + *pfVar19;
    pfVar19[1] = *(float *)(iVar16 + 4) + pfVar19[1];
    pfVar19[2] = *(float *)(iVar16 + 8) + pfVar19[2];
    pfVar19[1] = fVar2;
    iVar16 = FUN_004af230(&DAT_00715250,*(int *)(iVar24 + 0x34 + DAT_00715e50),*pfVar19,pfVar19[1],
                          pfVar19[2]);
    FUN_004ad3d0((void *)(iVar16 * 0x994 + DAT_00715f00),(float *)*pfVar19,pfVar19[1],pfVar19[2],
                 &local_2c,&local_64,&local_68);
    fVar25 = FUN_004ad640(DAT_00715f00 + iVar16 * 0x994,*pfVar19,pfVar19[1],pfVar19[2],local_64,
                          local_68);
    iVar16 = DAT_00715e50;
    local_84 = (float)fVar25;
    __ftol();
    __ftol();
    __ftol();
    uVar15 = DAT_005b23bc;
    lVar26 = __ftol();
    local_14 = (float)((float10)*(float *)(DAT_0073b578 + ((uint)lVar26 & uVar15) * 4) *
                       (float10)*(float *)(iVar24 + 0xc4 + iVar16) + extraout_ST0);
    *pfVar19 = (float)(extraout_ST1 * (float10)_DAT_006c312c * (float10)10.0 + (float10)*pfVar19);
    pfVar19[2] = local_14 * _DAT_006c312c * 10.0 + pfVar19[2];
    iVar16 = FUN_004af230(&DAT_00715250,*(int *)(iVar24 + 0x34 + iVar16),*pfVar19,pfVar19[1],
                          pfVar19[2]);
    *local_78 = iVar16;
    FUN_004ad3d0((void *)(DAT_00715f00 + iVar16 * 0x994),(float *)*pfVar19,pfVar19[1],pfVar19[2],
                 &local_2c,&local_64,&local_68);
    fVar25 = FUN_004ad640(iVar16 * 0x994 + DAT_00715f00,*pfVar19,pfVar19[1],pfVar19[2],local_64,
                          local_68);
    local_9c = (float)fVar25;
    if ((float10)pfVar19[1] + (float10)25.0 < fVar25) {
      local_9c = pfVar19[1] - fVar3;
      local_84 = local_9c;
    }
    if (local_84 < pfVar19[1] - fVar3) {
      *(float *)(DAT_0073b0d0 + iVar18 + 0x60 + iVar18 * 0xa8) =
           *(float *)(DAT_0073b0d0 + iVar18 + 0x60 + iVar18 * 0xa8) - _DAT_006c312c * 200.0;
    }
    iVar16 = DAT_0073b0d0;
    iVar18 = iVar18 * 0xa9;
    fVar2 = _DAT_006c312c * *(float *)(iVar18 + 0x60 + DAT_0073b0d0) + pfVar19[1];
    if (fVar2 - fVar3 <= local_9c) {
      *local_30 = *local_30 + 1;
      *(float *)(iVar18 + 0x60 + iVar16) = local_9c - local_84;
      *(float *)(iVar18 + 0x60 + DAT_0073b0d0) =
           *(float *)(iVar18 + 0x60 + DAT_0073b0d0) / _DAT_006c312c;
      if (0.0 <= *(float *)(iVar18 + 0x60 + DAT_0073b0d0)) {
        fVar2 = *(float *)(iVar18 + 0x60 + DAT_0073b0d0);
        if (local_9c < local_84 + 1.8) {
          fVar2 = fVar2 * 0.25;
        }
        else {
          if (10.0 < fVar2) {
            *(undefined4 *)(iVar18 + 0x60 + DAT_0073b0d0) = 0x41200000;
          }
          fVar2 = *(float *)(iVar24 + 0xc4 + DAT_00715e50) * 0.015 *
                  *(float *)(iVar18 + 0x60 + DAT_0073b0d0);
        }
        *(float *)(iVar18 + 0x60 + DAT_0073b0d0) = fVar2;
      }
      fVar2 = local_9c + fVar3;
    }
    iVar16 = DAT_0073b0d0;
    pfVar19[1] = fVar2;
    *pfVar21 = *pfVar19;
    fVar2 = pfVar19[2];
    pfVar21[1] = pfVar19[1];
    pfVar21[2] = fVar2;
    local_7c = local_7c + 1;
    local_78 = local_78 + 1;
    pfVar21 = pfVar21 + 3;
    pfVar19 = pfVar19 + 3;
  } while (local_7c < 4);
  *(float *)(iVar16 + *(int *)(iVar24 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) =
       local_38 + local_44 + local_50 + local_5c;
  iVar16 = *(int *)(iVar24 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar16 + 0x54 + iVar16 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar16 + 0x54 + iVar16 * 0xa8) * 0.25;
  iVar16 = *(int *)(iVar24 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar16 + 0x54 + iVar16 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar16 + 0x54 + iVar16 * 0xa8) - fVar3;
  fVar3 = (local_54 - local_3c) + (local_60 - local_48);
  fVar5 = (local_50 - local_38) + (local_5c - local_44);
  fVar4 = (local_4c - local_34) + (local_58 - local_40);
  fVar6 = (local_3c - local_48) + (local_54 - local_60);
  fVar7 = (local_38 - local_44) + (local_50 - local_5c);
  fVar11 = (local_34 - local_40) + (local_4c - local_58);
  fVar2 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  pfVar21 = (float *)FUN_004066c0(local_28,fVar3 / fVar2,fVar5 / fVar2,fVar4 / fVar2);
  fVar3 = *pfVar21;
  fVar2 = pfVar21[1];
  fVar4 = pfVar21[2];
  fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar11 * fVar11);
  pfVar21 = (float *)FUN_004066c0(local_28,fVar6 / fVar5,fVar7 / fVar5,fVar11 / fVar5);
  fVar5 = *pfVar21;
  fVar6 = pfVar21[1];
  fVar7 = pfVar21[2];
  fVar11 = fVar2 * fVar7 - fVar4 * fVar6;
  fVar14 = fVar4 * fVar5 - fVar3 * fVar7;
  fVar13 = fVar3 * fVar6 - fVar2 * fVar5;
  fVar12 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar13 * fVar13);
  puVar22 = (undefined4 *)FUN_004066c0(local_28,fVar11 / fVar12,fVar14 / fVar12,fVar13 / fVar12);
  uVar8 = *puVar22;
  uVar9 = puVar22[1];
  uVar10 = puVar22[2];
  *(float *)(iVar1 + 0x10 + DAT_0073b0d0) = fVar5;
  *(float *)(iVar1 + 0x14 + DAT_0073b0d0) = fVar6;
  *(float *)(iVar1 + 0x18 + DAT_0073b0d0) = fVar7;
  *(undefined4 *)(iVar1 + 0x20 + DAT_0073b0d0) = uVar8;
  *(undefined4 *)(iVar1 + 0x24 + DAT_0073b0d0) = uVar9;
  *(undefined4 *)(iVar1 + 0x28 + DAT_0073b0d0) = uVar10;
  *(float *)(iVar1 + 0x30 + DAT_0073b0d0) = fVar3;
  *(float *)(iVar1 + 0x34 + DAT_0073b0d0) = fVar2;
  *(float *)(iVar1 + 0x38 + DAT_0073b0d0) = fVar4;
  return 0;
}


