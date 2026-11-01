
/* ==== FUN_00405e90 @ 00405e90 ==== 
 * signature: undefined __cdecl FUN_00405e90(int param_1)
 * body: 00405e90-004060c8
 */

void __cdecl FUN_00405e90(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float10 fVar18;
  undefined4 auStack_18 [3];
  undefined1 auStack_c [12];
  
  iVar10 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  puVar14 = FUN_0040ebe0();
  if ((iVar10 < 0) || (iVar15 = (*(code *)**(undefined4 **)(puVar14 + 0x24))(), iVar15 <= iVar10)) {
    iVar15 = 0;
  }
  else {
    iVar15 = 1;
  }
  FUN_004a6980(iVar15,(byte *)s__s__d____Invalid_object_index____0058fd14);
  fVar2 = *(float *)(*(int *)(*(int *)(puVar14 + 0x28) + 4) + 0x30 + iVar10 * 0x54);
  iVar10 = (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1;
  fVar3 = *(float *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0xc4 + DAT_00715e50);
  if (*(int *)(&DAT_005cec0c + iVar1) < -2) {
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
  }
  else {
    pfVar16 = (float *)FUN_004b4070(auStack_18,
                                    DAT_0073b0d0 +
                                    *(int *)(*(int *)(&DAT_005ceac0 + iVar10 + 4) * 0xf0 + 0x24 +
                                            DAT_00715e50) * 0xa9 + 0x10);
    fVar4 = SQRT(pfVar16[2] * pfVar16[2] + pfVar16[1] * pfVar16[1] + *pfVar16 * *pfVar16);
    pfVar16 = (float *)FUN_004066c0(auStack_c,*pfVar16 / fVar4,pfVar16[1] / fVar4,pfVar16[2] / fVar4
                                   );
    fVar11 = *pfVar16;
    fVar12 = pfVar16[1];
    fVar13 = pfVar16[2];
    iVar15 = *(int *)(*(int *)(&DAT_005ceac0 + iVar10 + 4) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
             DAT_0073b0d0;
    iVar10 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
    iVar17 = DAT_0073b0d0 + iVar10;
    fVar4 = *(float *)(iVar17 + 0x50 + iVar10 * 0xa8);
    fVar5 = *(float *)(iVar15 + 0x50);
    fVar6 = *(float *)(iVar17 + 0x54 + iVar10 * 0xa8);
    fVar7 = *(float *)(iVar15 + 0x54);
    fVar8 = *(float *)(iVar17 + iVar10 * 0xa8 + 0x58);
    fVar9 = *(float *)(iVar15 + 0x58);
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    if (0.0 < fVar3) {
      *(float *)(&DAT_005cead8 + iVar1) =
           (fVar12 * (fVar6 - fVar7) + fVar11 * (fVar4 - fVar5) + fVar13 * (fVar8 - fVar9)) *
           (fVar2 * 2.42 + 0.08);
      goto LAB_0040608c;
    }
  }
  *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
LAB_0040608c:
  fVar18 = FUN_00405a00(*(float *)(&DAT_005cead4 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead4 + iVar1) = (float)fVar18;
  fVar18 = FUN_00405a00(*(float *)(&DAT_005cead8 + iVar1),0.0,100.0);
  *(float *)(&DAT_005cead8 + iVar1) = (float)fVar18;
  return;
}


