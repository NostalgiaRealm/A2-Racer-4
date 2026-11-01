
/* ==== FUN_00420ca0 @ 00420ca0 ==== 
 * signature: undefined __cdecl FUN_00420ca0(int param_1)
 * body: 00420ca0-004210d2
 */

void __cdecl FUN_00420ca0(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  byte bVar8;
  int *piVar9;
  undefined1 *puVar10;
  int iVar11;
  void *this;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  float10 fVar16;
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
  
  iVar7 = param_1;
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569f20;
  pvStack_c = ExceptionList;
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar13 = *(int *)(&DAT_005ceabc + iVar1);
  piVar9 = (int *)(&DAT_005ceac0 + (*(int *)(&DAT_005cebe4 + iVar1) + 2) * 0x10 + iVar1);
  ExceptionList = &pvStack_c;
  puVar10 = FUN_0040ebe0();
  if ((iVar13 < 0) || (iVar11 = (*(code *)**(undefined4 **)(puVar10 + 0x24))(), iVar11 <= iVar13)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  FUN_004a6980(iVar11,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar13 = *(int *)(*(int *)(puVar10 + 0x28) + 4) + iVar13 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    param_1._0_1_ = SUB41(piVar9,0);
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 9;
    (&DAT_005cec60)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    auStack_1c[0] = (undefined1)param_1;
    FUN_004028f0(auStack_1c,'\0');
    uVar14 = 0xffffffff;
    pcVar15 = s__attack_0059503c;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar4 = *pcVar15;
      pcVar15 = pcVar15 + 1;
    } while (cVar4 != '\0');
    FUN_00402940(auStack_1c,(undefined4 *)s__attack_0059503c,~uVar14 - 1);
    iVar11 = *piVar2;
    puVar10 = auStack_1c;
    uStack_4 = 0;
    this = (void *)FUN_004891a0();
    FUN_0048a910(this,(int)puVar10,iVar11);
    uStack_4 = 0xffffffff;
    FUN_004028f0(auStack_1c,'\x01');
  }
  if (*(int *)(&DAT_005cec3c + iVar1) == 9) {
    bVar8 = FUN_004235f0(iVar7);
    *(uint *)(&DAT_005cea48 + iVar1) = CONCAT31(extraout_var_00,bVar8);
    iVar11 = *(int *)(*(int *)(&DAT_005cea34 + iVar1) * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 +
             DAT_0073b0d0;
    fStack_34 = *(float *)(iVar11 + 0x50);
    uStack_30 = *(undefined4 *)(iVar11 + 0x54);
    uStack_2c = *(undefined4 *)(iVar11 + 0x58);
    pfVar12 = (float *)FUN_004b4070(auStack_28,
                                    DAT_0073b0d0 +
                                    *(int *)(piVar9[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    fVar16 = (float10)FUN_0041e120();
    fVar16 = SQRT(fVar16);
    pfVar12 = (float *)FUN_004066c0(auStack_1c,(float)((float10)*pfVar12 / fVar16),
                                    (float)((float10)pfVar12[1] / fVar16),
                                    (float)((float10)pfVar12[2] / fVar16));
    fStack_40 = *pfVar12;
    fStack_3c = pfVar12[1];
    fStack_38 = pfVar12[2];
    FUN_00406220(iVar7,&fStack_34,&fStack_40,(float)-*(int *)(iVar13 + 0x20),100.0,'\0');
    iVar13 = DAT_00715e50 + *piVar2 * 0xf0;
    iVar13 = FUN_00422b90(*(int *)(iVar13 + 0x34),*(int *)(iVar13 + 0x3c));
    iVar11 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
    iVar11 = FUN_00422b90(*(int *)(iVar11 + 0x34),*(int *)(iVar11 + 0x3c));
    if ((((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) && (iVar13 == iVar11)) &&
        (*(int *)(&DAT_005cec0c + iVar1) < 3)) &&
       (30.0 < *(float *)(*piVar2 * 0xf0 + 0xc4 + DAT_00715e50))) {
      FUN_00558625();
      *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40400000;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 10;
    }
  }
  else if (*(int *)(&DAT_005cec3c + iVar1) == 10) {
    bVar8 = FUN_004235f0(iVar7);
    *(uint *)(&DAT_005cea48 + iVar1) = CONCAT31(extraout_var,bVar8);
    fVar3 = *(float *)(iVar13 + 0x34);
    fVar16 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cead4 + iVar1) = (float)(fVar16 * (float10)(fVar3 * 700.0 + 100.0));
    (&DAT_005ceadd)[iVar1] = 1;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    iVar13 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
    iVar11 = DAT_0073b0d0 + iVar13;
    fVar3 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar11 + 0x50 + iVar13 * 0xa8);
    fVar6 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar11 + 0x54 + iVar13 * 0xa8);
    fVar5 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar11 + iVar13 * 0xa8 + 0x58);
    if (((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) || (*piVar9 == 1)) ||
       (SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5) < 40.0)) {
      (&DAT_005cec78)[iVar1] = 1;
      (&DAT_005ceadd)[iVar1] = 0;
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
  iVar13 = FUN_00418890(iVar7);
  pfVar12 = (float *)((&DAT_005d2b78)[iVar13 * 3] * 0x50 + 8 + DAT_00715eb8);
  *(float *)(&DAT_005cebf4 + iVar1) = *pfVar12;
  *(float *)(&DAT_005cebf8 + iVar1) = pfVar12[1];
  *(float *)(&DAT_005cebfc + iVar1) = pfVar12[2];
  FUN_00403a70((float)iVar7,*pfVar12,pfVar12[1],pfVar12[2]);
  FUN_00406390(iVar7);
  FUN_0041eeb0(iVar7);
  ExceptionList = pvStack_c;
  return;
}


