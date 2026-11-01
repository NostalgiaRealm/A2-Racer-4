
/* ==== FUN_0042d81d @ 0042d81d ==== 
 * signature: undefined4 __stdcall FUN_0042d81d(int param_1)
 * body: 0042d81d-0042d81f
 */

undefined4 FUN_0042d81d(int param_1)

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
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float afStack_70 [6];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  float afStack_34 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar21 = param_1 * 0xf0;
  iVar18 = FUN_004a8c50(iVar21 + DAT_00715e50);
  iVar18 = DAT_0073b5c8 + iVar18 * 0xac;
  afStack_34[0] = *(float *)(iVar18 + 0x10);
  afStack_34[1] = *(float *)(iVar18 + 0x14);
  afStack_34[2] = *(float *)(iVar18 + 0x60);
  afStack_34[3] = *(float *)(iVar18 + 0x58);
  uStack_24 = *(undefined4 *)(iVar18 + 0x14);
  uStack_20 = *(undefined4 *)(iVar18 + 0x60);
  uStack_1c = *(undefined4 *)(iVar18 + 0x10);
  uStack_18 = *(undefined4 *)(iVar18 + 0x14);
  uStack_14 = *(undefined4 *)(iVar18 + 0x18);
  uStack_10 = *(undefined4 *)(iVar18 + 0x58);
  uStack_c = *(undefined4 *)(iVar18 + 0x14);
  uStack_8 = *(undefined4 *)(iVar18 + 0x18);
  iVar22 = 0;
  iVar18 = *(int *)(iVar21 + 0x24 + DAT_00715e50) * 0xa9;
  do {
    pfVar1 = (float *)((int)afStack_70 + iVar22);
    pfVar19 = (float *)FUN_004b42a0(&fStack_7c,(float *)((int)afStack_34 + iVar22),
                                    DAT_0073b0d0 + 0x10 + iVar18);
    *pfVar1 = *pfVar19;
    fVar3 = pfVar19[2];
    *(float *)((int)afStack_70 + iVar22 + 4) = pfVar19[1];
    *(float *)((int)afStack_70 + iVar22 + 8) = fVar3;
    iVar4 = *(int *)(iVar21 + 0x24 + DAT_00715e50);
    iVar2 = DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8;
    *pfVar1 = *(float *)(DAT_0073b0d0 + iVar4 + 0x50 + iVar4 * 0xa8) + *pfVar1;
    *(float *)((int)afStack_70 + iVar22 + 4) =
         *(float *)(iVar2 + 4) + *(float *)((int)afStack_70 + iVar22 + 4);
    *(float *)((int)afStack_70 + iVar22 + 8) =
         *(float *)(iVar2 + 8) + *(float *)((int)afStack_70 + iVar22 + 8);
    uStack_40 = FUN_004af230(&DAT_00715250,*(int *)(iVar21 + 0x34 + DAT_00715e50),*pfVar1,
                             *(undefined4 *)((int)afStack_70 + iVar22 + 4),
                             *(float *)((int)afStack_70 + iVar22 + 8));
    FUN_004adaf0(&uStack_40,2,(float *)*pfVar1,*(undefined4 *)((int)afStack_70 + iVar22 + 4),
                 *(undefined4 *)((int)afStack_70 + iVar22 + 8),&iStack_4,&iStack_38,&iStack_3c);
    fVar23 = FUN_004ad640(DAT_00715f00 + uStack_40 * 0x994,*pfVar1,
                          *(undefined4 *)((int)afStack_70 + iVar22 + 4),
                          *(float *)((int)afStack_70 + iVar22 + 8),iStack_38,iStack_3c);
    if ((fVar23 <= (float10)*(float *)((int)afStack_70 + iVar22 + 4)) ||
       (fVar23 < (float10)*(float *)((int)afStack_70 + iVar22 + 4) + (float10)25.0)) {
      *(float *)((int)afStack_70 + iVar22 + 4) = (float)fVar23;
    }
    iVar22 = iVar22 + 0xc;
  } while (iVar22 < 0x30);
  *(float *)(DAT_0073b0d0 + *(int *)(iVar21 + 0x24 + DAT_00715e50) * 0xa9 + 0x54) =
       fStack_48 + fStack_54 + afStack_70[4] + afStack_70[1];
  iVar21 = *(int *)(iVar21 + 0x24 + DAT_00715e50);
  *(float *)(DAT_0073b0d0 + iVar21 + 0x54 + iVar21 * 0xa8) =
       *(float *)(DAT_0073b0d0 + iVar21 + 0x54 + iVar21 * 0xa8) * 0.25;
  fVar3 = (afStack_70[3] - fStack_4c) + (afStack_70[0] - fStack_58);
  fVar13 = (afStack_70[4] - fStack_48) + (afStack_70[1] - fStack_54);
  fVar14 = (afStack_70[5] - fStack_44) + (afStack_70[2] - fStack_50);
  fStack_78 = fStack_48 - fStack_54;
  fStack_74 = fStack_44 - fStack_50;
  fVar15 = (fStack_4c - fStack_58) + (afStack_70[3] - afStack_70[0]);
  fVar16 = fStack_78 + (afStack_70[4] - afStack_70[1]);
  fVar17 = fStack_74 + (afStack_70[5] - afStack_70[2]);
  fVar23 = (float10)FUN_0041e120();
  fVar23 = SQRT(fVar23);
  puVar20 = (undefined4 *)
            FUN_004066c0(&fStack_7c,(float)((float10)fVar3 / fVar23),
                         (float)((float10)fVar13 / fVar23),(float)((float10)fVar14 / fVar23));
  uVar5 = *puVar20;
  uVar6 = puVar20[1];
  uVar7 = puVar20[2];
  fVar23 = (float10)FUN_0041e120();
  fVar23 = SQRT(fVar23);
  puVar20 = (undefined4 *)
            FUN_004066c0(&fStack_7c,(float)((float10)(fVar13 * fVar17 - fVar14 * fVar16) / fVar23),
                         (float)((float10)(fVar14 * fVar15 - fVar3 * fVar17) / fVar23),
                         (float)((float10)(fVar3 * fVar16 - fVar13 * fVar15) / fVar23));
  uVar8 = *puVar20;
  uVar9 = puVar20[1];
  uVar10 = puVar20[2];
  fVar23 = (float10)FUN_0041e120();
  fVar23 = SQRT(fVar23);
  puVar20 = (undefined4 *)
            FUN_004066c0(&fStack_7c,(float)((float10)fVar15 / fVar23),
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


