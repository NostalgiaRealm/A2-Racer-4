
/* ==== FUN_0042d820 @ 0042d820 ==== 
 * signature: undefined4 __cdecl FUN_0042d820(int param_1)
 * body: 0042d820-0042dd5f
 */

undefined4 __cdecl FUN_0042d820(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float *pfVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  float10 fVar23;
  float local_7c;
  float local_78;
  float local_74;
  float local_70 [6];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  int local_3c;
  int local_38;
  float local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar21 = param_1 * 0xf0;
  iVar18 = FUN_004a8c50(iVar21 + DAT_00715e50);
  iVar18 = DAT_0073b5c8 + iVar18 * 0xac;
  local_34[0] = *(float *)(iVar18 + 0x10);
  local_34[1] = *(float *)(iVar18 + 0x14);
  local_34[2] = *(float *)(iVar18 + 0x60);
  local_34[3] = *(float *)(iVar18 + 0x58);
  local_24 = *(undefined4 *)(iVar18 + 0x14);
  local_20 = *(undefined4 *)(iVar18 + 0x60);
  local_1c = *(undefined4 *)(iVar18 + 0x10);
  local_18 = *(undefined4 *)(iVar18 + 0x14);
  local_14 = *(undefined4 *)(iVar18 + 0x18);
  local_10 = *(undefined4 *)(iVar18 + 0x58);
  local_c = *(undefined4 *)(iVar18 + 0x14);
  local_8 = *(undefined4 *)(iVar18 + 0x18);
  iVar22 = 0;
  iVar18 = *(int *)(iVar21 + 0x24 + DAT_00715e50) * 0xa9;
  do {
    pfVar1 = (float *)((int)local_70 + iVar22);
    pfVar19 = (float *)FUN_004b42a0(&local_7c,(float *)((int)local_34 + iVar22),
                                    DAT_0073b0d0 + 0x10 + iVar18);
    *pfVar1 = *pfVar19;
    fVar3 = pfVar19[2];
    *(float *)((int)local_70 + iVar22 + 4) = pfVar19[1];
    *(float *)((int)local_70 + iVar22 + 8) = fVar3;
    iVar4 = *(int *)(iVar21 + 0x24 + DAT_00715e50);
    iVar2 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
    *pfVar1 = *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8) + *pfVar1;
    *(float *)((int)local_70 + iVar22 + 4) =
         *(float *)(iVar2 + 4) + *(float *)((int)local_70 + iVar22 + 4);
    *(float *)((int)local_70 + iVar22 + 8) =
         *(float *)(iVar2 + 8) + *(float *)((int)local_70 + iVar22 + 8);
    local_40 = FUN_004af230(&DAT_00715250,*(int *)(iVar21 + 0x34 + DAT_00715e50),*pfVar1,
                            *(undefined4 *)((int)local_70 + iVar22 + 4),
                            *(float *)((int)local_70 + iVar22 + 8));
    FUN_004adaf0(&local_40,2,(float *)*pfVar1,*(undefined4 *)((int)local_70 + iVar22 + 4),
                 *(undefined4 *)((int)local_70 + iVar22 + 8),&local_4,&local_38,&local_3c);
    fVar23 = FUN_004ad640(DAT_00715f00 + local_40 * 0x994,*pfVar1,
                          *(undefined4 *)((int)local_70 + iVar22 + 4),
                          *(float *)((int)local_70 + iVar22 + 8),local_38,local_3c);
    if ((fVar23 <= (float10)*(float *)((int)local_70 + iVar22 + 4)) ||
       (fVar23 < (float10)*(float *)((int)local_70 + iVar22 + 4) + (float10)25.0)) {
      *(float *)((int)local_70 + iVar22 + 4) = (float)fVar23;
    }
    iVar22 = iVar22 + 0xc;
  } while (iVar22 < 0x30);
  *(float *)(DAT_0073b0d0 + *(int *)(iVar21 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) =
       local_48 + local_54 + local_70[4] + local_70[1];
  iVar21 = *(int *)(iVar21 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar21 + 0x54 + iVar21 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar21 + 0x54 + iVar21 * 0xa8) * 0.25;
  fVar3 = (local_70[3] - local_4c) + (local_70[0] - local_58);
  fVar13 = (local_70[4] - local_48) + (local_70[1] - local_54);
  fVar14 = (local_70[5] - local_44) + (local_70[2] - local_50);
  local_78 = local_48 - local_54;
  local_74 = local_44 - local_50;
  fVar15 = (local_4c - local_58) + (local_70[3] - local_70[0]);
  fVar16 = local_78 + (local_70[4] - local_70[1]);
  fVar17 = local_74 + (local_70[5] - local_70[2]);
  fVar23 = (float10)FUN_0041e120();
  fVar23 = SQRT(fVar23);
  puVar20 = (undefined4 *)
            FUN_004066c0(&local_7c,(float)((float10)fVar3 / fVar23),
                         (float)((float10)fVar13 / fVar23),(float)((float10)fVar14 / fVar23));
  uVar5 = *puVar20;
  uVar6 = puVar20[1];
  uVar7 = puVar20[2];
  fVar23 = (float10)FUN_0041e120();
  fVar23 = SQRT(fVar23);
  puVar20 = (undefined4 *)
            FUN_004066c0(&local_7c,(float)((float10)(fVar13 * fVar17 - fVar14 * fVar16) / fVar23),
                         (float)((float10)(fVar14 * fVar15 - fVar3 * fVar17) / fVar23),
                         (float)((float10)(fVar3 * fVar16 - fVar13 * fVar15) / fVar23));
  uVar8 = *puVar20;
  uVar9 = puVar20[1];
  uVar10 = puVar20[2];
  fVar23 = (float10)FUN_0041e120();
  fVar23 = SQRT(fVar23);
  puVar20 = (undefined4 *)
            FUN_004066c0(&local_7c,(float)((float10)fVar15 / fVar23),
                         (float)((float10)fVar16 / fVar23),(float)((float10)fVar17 / fVar23));
  uVar11 = puVar20[1];
  uVar12 = puVar20[2];
  *(undefined4 *)(DAT_0073b0d0 + 0x10 + iVar18) = *puVar20;
  *(undefined4 *)(DAT_0073b0d0 + 0x14 + iVar18) = uVar11;
  *(undefined4 *)(DAT_0073b0d0 + 0x18 + iVar18) = uVar12;
  *(undefined4 *)(DAT_0073b0d0 + 0x20 + iVar18) = uVar8;
  *(undefined4 *)(DAT_0073b0d0 + 0x24 + iVar18) = uVar9;
  *(undefined4 *)(DAT_0073b0d0 + 0x28 + iVar18) = uVar10;
  *(undefined4 *)(DAT_0073b0d0 + 0x30 + iVar18) = uVar5;
  *(undefined4 *)(DAT_0073b0d0 + 0x34 + iVar18) = uVar6;
  *(undefined4 *)(DAT_0073b0d0 + 0x38 + iVar18) = uVar7;
  return 0;
}


