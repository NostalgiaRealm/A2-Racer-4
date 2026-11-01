
/* ==== FUN_004200e0 @ 004200e0 ==== 
 * signature: undefined __cdecl FUN_004200e0(int param_1)
 * body: 004200e0-0042071d
 */

void __cdecl FUN_004200e0(int param_1)

{
  int iVar1;
  int *this;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined1 *puVar7;
  int iVar8;
  void *this_00;
  undefined3 extraout_var;
  float *pfVar9;
  int iVar10;
  undefined3 extraout_var_00;
  int iVar11;
  uint uVar12;
  int *piVar13;
  char *pcVar14;
  float10 fVar15;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [3];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569efc;
  pvStack_c = ExceptionList;
  iVar1 = param_1 * 0x294;
  this = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar11 = *(int *)(&DAT_005ceabc + iVar1);
  piVar13 = (int *)(&DAT_005ceac0 + (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1);
  ExceptionList = &pvStack_c;
  puVar7 = FUN_0040ebe0();
  if ((iVar11 < 0) || (iVar8 = (*(code *)**(undefined4 **)(puVar7 + 0x24))(), iVar8 <= iVar11)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  FUN_004a6980(iVar8,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar11 = *(int *)(*(int *)(puVar7 + 0x28) + 4) + iVar11 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 4;
    (&DAT_005cec60)[iVar1] = 0;
    auStack_1c[0] = (undefined1)param_1;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    FUN_004028f0(auStack_1c,'\0');
    uVar12 = 0xffffffff;
    pcVar14 = s__attack_0059502c;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar3 != '\0');
    FUN_00402940(auStack_1c,(undefined4 *)s__attack_0059502c,~uVar12 - 1);
    iVar8 = *this;
    puVar7 = auStack_1c;
    uStack_4 = 0;
    this_00 = (void *)FUN_004891a0();
    FUN_0048a910(this_00,(int)puVar7,iVar8);
    uStack_4 = 0xffffffff;
    FUN_004028f0(auStack_1c,'\x01');
  }
  switch(*(undefined4 *)(&DAT_005cec3c + iVar1)) {
  case 4:
    (&DAT_005ceadc)[iVar1] = 0;
    FUN_00405c80(param_1);
    if (0x7fffffff < *(uint *)(&DAT_005cec0c + iVar1)) {
      uVar12 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 5;
      *(float *)(&DAT_005cec28 + iVar1) = (float)((int)uVar12 % 3 + 2);
    }
    iVar8 = FUN_004217c0(param_1);
    if ((iVar8 != 0) && (uVar12 = FUN_00558625(), (int)uVar12 % 100 < *(int *)(iVar11 + 0x1c))) {
      FUN_0040d470(this,0x29);
    }
    break;
  case 5:
    bVar6 = FUN_004235f0(param_1);
    *(uint *)(&DAT_005cea48 + iVar1) = CONCAT31(extraout_var,bVar6);
    iVar8 = *(int *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
            DAT_0073b0d0;
    fStack_34 = *(float *)(iVar8 + 0x50);
    uStack_30 = *(undefined4 *)(iVar8 + 0x54);
    uStack_2c = *(undefined4 *)(iVar8 + 0x58);
    pfVar9 = (float *)FUN_004b4070(auStack_28,
                                   DAT_0073b0d0 +
                                   *(int *)(piVar13[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    fVar15 = (float10)FUN_0041e120();
    fVar15 = SQRT(fVar15);
    pfVar9 = (float *)FUN_004066c0(auStack_1c,(float)((float10)*pfVar9 / fVar15),
                                   (float)((float10)pfVar9[1] / fVar15),
                                   (float)((float10)pfVar9[2] / fVar15));
    fStack_40 = *pfVar9;
    fStack_3c = pfVar9[1];
    fStack_38 = pfVar9[2];
    FUN_00406220(param_1,&fStack_34,&fStack_40,(float)*(int *)(iVar11 + 0x20),100.0,'\0');
    if (*piVar13 == 2) {
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 4;
    }
    iVar8 = FUN_00422b90(*(int *)(*this * 0xf0 + DAT_00715e50 + 0x34),
                         *(int *)(*this * 0xf0 + 0x3c + DAT_00715e50));
    iVar10 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
    iVar10 = FUN_00422b90(*(int *)(iVar10 + 0x34),*(int *)(iVar10 + 0x3c));
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       (((iVar8 == iVar10 && (-3 < *(int *)(&DAT_005cec0c + iVar1))) &&
        (30.0 < *(float *)(*this * 0xf0 + 0xc4 + DAT_00715e50))))) {
      FUN_00558625();
      *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40400000;
      uVar12 = FUN_00558625();
      if (*(float *)(iVar11 + 0x24) <= (float)((int)uVar12 % 100)) {
        *(undefined4 *)(&DAT_005cec3c + iVar1) = 7;
      }
      else {
        *(undefined4 *)(&DAT_005cec3c + iVar1) = 6;
      }
    }
    break;
  case 6:
    bVar6 = FUN_004235f0(param_1);
    *(uint *)(&DAT_005cea48 + iVar1) = CONCAT31(extraout_var_00,bVar6);
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    fVar2 = *(float *)(iVar11 + 0x34);
    fVar15 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cead8 + iVar1) = (float)(fVar15 * (float10)(fVar2 * 700.0 + 100.0));
    iVar11 = *(int *)(*this * 0xf0 + 0x24 + DAT_00715e50);
    iVar8 = DAT_0073b0d0 + iVar11;
    fVar2 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar8 + 0x50 + iVar11 * 0xa8);
    fVar5 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar8 + 0x54 + iVar11 * 0xa8);
    fVar4 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar8 + iVar11 * 0xa8 + 0x58);
    if (((0.0 < *(float *)(&DAT_005cec28 + iVar1)) && (*piVar13 != 2)) &&
       (40.0 <= SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4))) break;
    (&DAT_005cec78)[iVar1] = 1;
    uVar12 = FUN_00558625();
    goto LAB_0042064d;
  case 7:
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    (&DAT_005ceadc)[iVar1] = 1;
    if (*(float *)(&DAT_005cec1c + iVar1) <= 0.0) {
      *(undefined4 *)(&DAT_005cead0 + iVar1) = 0xc2c80000;
    }
    else {
      *(undefined4 *)(&DAT_005cead0 + iVar1) = 0x42c80000;
    }
    if ((0.0 < *(float *)(&DAT_005cec28 + iVar1)) && (*piVar13 != 2)) {
      iVar11 = *(int *)(*this * 0xf0 + 0x24 + DAT_00715e50);
      iVar8 = DAT_0073b0d0 + iVar11;
      fVar2 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar8 + 0x50 + iVar11 * 0xa8);
      fVar5 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar8 + 0x54 + iVar11 * 0xa8);
      fVar4 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar8 + iVar11 * 0xa8 + 0x58);
      if (40.0 <= SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4)) break;
    }
    (&DAT_005ceadc)[iVar1] = 0;
    uVar12 = FUN_00558625();
LAB_0042064d:
    *(float *)(&DAT_005cec28 + iVar1) = (float)((int)uVar12 % 3 + 3);
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 8;
    break;
  case 8:
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) || (*piVar13 == 2)) {
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
  iVar11 = *(int *)(&DAT_005cec3c + iVar1);
  if ((3 < iVar11) && ((iVar11 < 7 || (iVar11 == 8)))) {
    iVar11 = FUN_00418890(param_1);
    pfVar9 = (float *)((&DAT_005d2b78)[iVar11 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(float *)(&DAT_005cebf4 + iVar1) = *pfVar9;
    *(float *)(&DAT_005cebf8 + iVar1) = pfVar9[1];
    *(float *)(&DAT_005cebfc + iVar1) = pfVar9[2];
    FUN_00403a70((float)param_1,*pfVar9,pfVar9[1],pfVar9[2]);
  }
  FUN_00406390(param_1);
  FUN_0041eeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


