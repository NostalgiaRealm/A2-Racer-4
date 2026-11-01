
/* ==== FUN_004210e0 @ 004210e0 ==== 
 * signature: undefined __cdecl FUN_004210e0(int param_1)
 * body: 004210e0-0042136e
 */

void __cdecl FUN_004210e0(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar1 = param_1 * 0x294;
  iVar3 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar9 = *(int *)(&DAT_005ceabc + iVar1);
  puVar7 = FUN_0040ebe0();
  if ((iVar9 < 0) || (iVar8 = (*(code *)**(undefined4 **)(puVar7 + 0x24))(), iVar8 <= iVar9)) {
    iVar9 = 0;
  }
  else {
    iVar9 = 1;
  }
  FUN_004a6980(iVar9,(byte *)s__s__d____Invalid_object_index____0058fd14);
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    (&DAT_005cec60)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x12;
    lVar11 = __ftol();
    uVar10 = FUN_00558625();
    fVar4 = (float)((int)uVar10 % 0x29 + -0x14 + (int)lVar11) * 0.01;
    *(float *)(&DAT_005cec68 + iVar1) = fVar4;
    if (*(float *)(&DAT_005cec1c + iVar1) <= 0.0) {
      fVar5 = 100.0;
    }
    else {
      fVar5 = -100.0;
    }
    *(float *)(&DAT_005cec68 + iVar1) = fVar4 * fVar5;
  }
  if (*(int *)(&DAT_005cec3c + iVar1) == 0x12) {
    FUN_00402de0(&DAT_005cea7c + iVar1,*(float *)(&DAT_005cec68 + iVar1));
    iVar3 = *(int *)(&DAT_005ceac0 + (iVar3 + 2) * 0x10 + iVar1);
    if (iVar3 == 1) {
      FUN_00405e90(param_1);
    }
    else if (iVar3 == 2) {
      FUN_00405c80(param_1);
    }
    uVar10 = (int)*(uint *)(&DAT_005cec0c + iVar1) >> 0x1f;
    if ((int)((*(uint *)(&DAT_005cec0c + iVar1) ^ uVar10) - uVar10) < 1) {
      iVar3 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x24 + DAT_00715e50);
      iVar9 = DAT_0073b0d0 + iVar3;
      fVar4 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar9 + 0x50 + iVar3 * 0xa8);
      fVar6 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar9 + 0x54 + iVar3 * 0xa8);
      fVar5 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar9 + iVar3 * 0xa8 + 0x58);
      if (40.0 <= SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5)) goto LAB_0042135a;
    }
    uVar10 = FUN_00558625();
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x13;
    *(float *)(&DAT_005cec28 + iVar1) = (float)((int)uVar10 % 3 + 3);
  }
  else if (*(int *)(&DAT_005cec3c + iVar1) == 0x13) {
    iVar9 = FUN_00418890(param_1);
    pfVar2 = (float *)((&DAT_005d2b78)[iVar9 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(float *)(&DAT_005cebf4 + iVar1) = *pfVar2;
    *(float *)(&DAT_005cebf8 + iVar1) = pfVar2[1];
    *(float *)(&DAT_005cebfc + iVar1) = pfVar2[2];
    FUN_00403a70((float)param_1,*pfVar2,pfVar2[1],pfVar2[2]);
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       (*(int *)(&DAT_005ceac0 + (iVar3 + 2) * 0x10 + iVar1) == 2)) {
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
LAB_0042135a:
  FUN_00406390(param_1);
  FUN_0041eeb0(param_1);
  return;
}


