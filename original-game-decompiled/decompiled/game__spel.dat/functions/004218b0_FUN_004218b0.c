
/* ==== FUN_004218b0 @ 004218b0 ==== 
 * signature: undefined __cdecl FUN_004218b0(int param_1)
 * body: 004218b0-00421d1a
 */

void __cdecl FUN_004218b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *puVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  float10 fVar15;
  longlong lVar16;
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar4 = *(int *)(&DAT_005ceabc + iVar1);
  puVar14 = (undefined4 *)(&DAT_005ceac0 + (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1);
  puVar9 = FUN_0040ebe0();
  if (iVar4 < 0) {
LAB_00421906:
    iVar10 = 0;
  }
  else {
    iVar10 = (*(code *)**(undefined4 **)(puVar9 + 0x24))();
    if (iVar10 <= iVar4) goto LAB_00421906;
    iVar10 = 1;
  }
  FUN_004a6980(iVar10,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar5 = *(int *)(*(int *)(puVar9 + 0x28) + 4);
  *(undefined4 *)(&DAT_005cec10 + iVar1) = *(undefined4 *)(&DAT_005cec0c + iVar1);
  *(undefined4 *)(&DAT_005cec18 + iVar1) = *(undefined4 *)(&DAT_005cec14 + iVar1);
  iVar10 = FUN_00407d20(*(int *)(puVar14[1] * 0xf0 + 0x34 + DAT_00715e50),
                        *(int *)(*piVar2 * 0xf0 + 0x34 + DAT_00715e50));
  *(int *)(&DAT_005cec0c + iVar1) = iVar10;
  iVar10 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
  iVar12 = DAT_0073b0d0 + iVar10;
  fVar6 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar12 + 0x50 + iVar10 * 0xa8);
  fVar8 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar12 + 0x54 + iVar10 * 0xa8);
  fVar7 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar12 + iVar10 * 0xa8 + 0x58);
  *(float *)(&DAT_005cec14 + iVar1) = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
  piVar3 = (int *)(puVar14[1] * 0xf0 + 0x24 + DAT_00715e50);
  iVar12 = *piVar3 * 0xa9 + DAT_0073b0d0;
  iVar10 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
  fVar6 = *(float *)(iVar10 + DAT_0073b0d0 + 0x50 + iVar10 * 0xa8) - *(float *)(iVar12 + 0x50);
  iVar10 = iVar10 + DAT_0073b0d0 + 0x50 + iVar10 * 0xa8;
  fVar7 = *(float *)(iVar10 + 4) - *(float *)(iVar12 + 0x54);
  fVar8 = *(float *)(iVar10 + 8) - *(float *)(iVar12 + 0x58);
  pfVar11 = (float *)FUN_004b4070(auStack_18,DAT_0073b0d0 + *piVar3 * 0xa9 + 0x10);
  fVar15 = (float10)FUN_0041e120();
  fVar15 = SQRT(fVar15);
  pfVar11 = (float *)FUN_004066c0(auStack_c,(float)((float10)*pfVar11 / fVar15),
                                  (float)((float10)pfVar11[1] / fVar15),
                                  (float)((float10)pfVar11[2] / fVar15));
  *(float *)(&DAT_005cec20 + iVar1) = *pfVar11 * fVar6 + pfVar11[1] * fVar7 + pfVar11[2] * fVar8;
  pfVar11 = (float *)FUN_004b3ff0(auStack_c,
                                  (undefined4 *)
                                  (DAT_0073b0d0 +
                                   *(int *)(puVar14[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10))
  ;
  fVar15 = (float10)FUN_0041e120();
  fVar15 = SQRT(fVar15);
  pfVar11 = (float *)FUN_004066c0(auStack_18,(float)((float10)*pfVar11 / fVar15),
                                  (float)((float10)pfVar11[1] / fVar15),
                                  (float)((float10)pfVar11[2] / fVar15));
  *(float *)(&DAT_005cec1c + iVar1) = *pfVar11 * fVar6 + pfVar11[1] * fVar7 + pfVar11[2] * fVar8;
  iVar12 = *piVar2 * 0xf0;
  iVar10 = iVar12 + DAT_00715e50;
  iVar12 = FUN_004aac20(*piVar2,*(int *)(iVar12 + 0x50 + DAT_00715e50));
  *(int *)(iVar10 + 0x3c) = iVar12;
  iVar10 = DAT_00715e50 + *piVar2 * 0xf0;
  iVar10 = FUN_00422b90(*(int *)(iVar10 + 0x34),*(int *)(iVar10 + 0x3c));
  *(int *)(&DAT_005cec58 + iVar1) = iVar10;
  iVar10 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
  FUN_00405ac0(*(int *)(iVar10 + 0x34),*(int *)(iVar10 + 0x3c),(int *)(&DAT_005cec50 + iVar1),
               (int *)0x0);
  if (*(int *)(&DAT_005cec0c + iVar1) < 1) {
    if (*(int *)(&DAT_005cec0c + iVar1) < 0) {
      *puVar14 = 1;
      goto LAB_00421c17;
    }
    if (0.0 <= *(float *)(&DAT_005cec20 + iVar1)) {
      *puVar14 = 1;
      goto LAB_00421c17;
    }
  }
  *puVar14 = 2;
LAB_00421c17:
  iVar10 = FUN_004188c0(*piVar2);
  pfVar11 = (float *)(iVar10 * 0x50 + 8 + DAT_00715eb8);
  lVar16 = FUN_004031f0(*piVar2,*pfVar11,pfVar11[1],pfVar11[2]);
  uVar13 = (int)(uint)lVar16 >> 0x1f;
  fVar6 = (float)(int)(((uint)lVar16 ^ uVar13) - uVar13);
  if (500.0 < fVar6) {
    fVar6 = 500.0;
  }
  *(float *)(&DAT_005cec54 + iVar1) = fVar6;
  if (fVar6 <= 20.0) {
    *(undefined4 *)(&DAT_005ceacc + iVar1) = 0x7f7fffff;
  }
  else {
    *(float *)(&DAT_005ceacc + iVar1) =
         (*(float *)(iVar5 + iVar4 * 0x54 + 0x2c) - 8.333334) * (1.0 - fVar6 * 0.002) + 8.333334;
  }
  FUN_00406460(param_1,(undefined4 *)(iVar1 + 0x5cec6c));
  if (1.0 < *(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50)) {
    *(undefined4 *)(&DAT_005cec34 + iVar1) = 0;
    return;
  }
  fVar15 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cec34 + iVar1) = (float)(fVar15 + (float10)*(float *)(&DAT_005cec34 + iVar1));
  return;
}


