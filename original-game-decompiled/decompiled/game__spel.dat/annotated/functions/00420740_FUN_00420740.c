
/* ==== FUN_00420740 @ 00420740 ==== 
 * signature: undefined __cdecl FUN_00420740(int param_1)
 * body: 00420740-00420c87
 */

void __cdecl FUN_00420740(int param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  void *this;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  longlong lVar17;
  int iStack_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569f0e;
  pvStack_c = ExceptionList;
  iVar1 = param_1 * 0x294;
  piVar2 = &DAT_005ce9e8 + param_1 * 0xa5;
  iVar5 = *(int *)(&DAT_005cebe4 + iVar1);
  iVar13 = *(int *)(&DAT_005ceabc + iVar1);
  ExceptionList = &pvStack_c;
  puVar9 = FUN_0040ebe0();
  if ((iVar13 < 0) || (iVar10 = (*(code *)**(undefined4 **)(puVar9 + 0x24))(), iVar10 <= iVar13)) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
  }
  FUN_004a6980(iVar10,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar10 = *(int *)(*(int *)(puVar9 + 0x28) + 4);
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xb;
    FUN_00558625();
    *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40c00000;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    (&DAT_005cec60)[iVar1] = 0;
    (&DAT_005cec2c)[iVar1] = 0;
    auStack_1c[0] = (undefined1)param_1;
    FUN_004028f0(auStack_1c,'\0');
    uVar14 = 0xffffffff;
    pcVar16 = s__attack_00595034;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      cVar4 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14 - 1;
    uVar11 = FUN_00402a00(auStack_1c,uVar14,'\x01');
    if ((char)uVar11 != '\0') {
      pcVar16 = s__attack_00595034;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcStack_18 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcStack_18 = pcStack_18 + 4;
      }
      for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcStack_18 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcStack_18 = pcStack_18 + 1;
      }
      FUN_004029e0(auStack_1c,uVar14);
    }
    iVar12 = *piVar2;
    puVar9 = auStack_1c;
    uStack_4 = 0;
    this = (void *)FUN_004891a0();
    FUN_0048a910(this,(int)puVar9,iVar12);
    uStack_4 = 0xffffffff;
    FUN_004028f0(auStack_1c,'\x01');
  }
  switch(*(undefined4 *)(&DAT_005cec3c + iVar1)) {
  case 0xb:
    iVar13 = FUN_00418890(param_1);
    pfVar3 = (float *)((&DAT_005d2b78)[iVar13 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(float *)(&DAT_005cebf4 + iVar1) = *pfVar3;
    *(float *)(&DAT_005cebf8 + iVar1) = pfVar3[1];
    *(float *)(&DAT_005cebfc + iVar1) = pfVar3[2];
    FUN_00403a70((float)param_1,*pfVar3,pfVar3[1],pfVar3[2]);
    iVar13 = FUN_00421550(param_1);
    if (iVar13 != 0) {
      FUN_00558625();
      *(undefined4 *)(&DAT_005cec28 + iVar1) = 0x40000000;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xc;
    }
    break;
  case 0xc:
    iVar12 = FUN_00418890(param_1);
    pfVar3 = (float *)((&DAT_005d2b78)[iVar12 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(float *)(&DAT_005cebf4 + iVar1) = *pfVar3;
    *(float *)(&DAT_005cebf8 + iVar1) = pfVar3[1];
    *(float *)(&DAT_005cebfc + iVar1) = pfVar3[2];
    FUN_00403a70((float)param_1,*pfVar3,pfVar3[1],pfVar3[2]);
    iVar12 = FUN_00421550(param_1);
    if ((iVar12 != 0) && ((&DAT_005cec2c)[iVar1] == '\0')) {
      uVar14 = FUN_00558625();
      if ((int)uVar14 % 100 < *(int *)(iVar10 + iVar13 * 0x54 + 0x18)) {
        FUN_0041be70(&DAT_005d3118,5,*piVar2,-1);
      }
      (&DAT_005cec2c)[iVar1] = 1;
    }
    iVar13 = FUN_004217c0(param_1);
    if (iVar13 != 0) {
      lVar17 = __ftol();
      uVar14 = FUN_00558625();
      fVar6 = (float)((int)uVar14 % 0x29 + -0x14 + (int)lVar17) * 0.01;
      *(float *)(&DAT_005cec68 + iVar1) = fVar6;
      if (*(float *)(&DAT_005cec1c + iVar1) <= 0.0) {
        fVar7 = 100.0;
      }
      else {
        fVar7 = -100.0;
      }
      *(float *)(&DAT_005cec68 + iVar1) = fVar6 * fVar7;
      uVar14 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xd;
      *(float *)(&DAT_005cec28 + iVar1) = (float)((int)uVar14 % 5 + 2);
    }
    break;
  case 0xd:
    FUN_00402de0(&DAT_005cea7c + iVar1,*(float *)(&DAT_005cec68 + iVar1));
    iVar13 = *(int *)(*piVar2 * 0xf0 + 0x24 + DAT_00715e50);
    iVar10 = DAT_0073b0d0 + iVar13;
    fVar6 = *(float *)(&DAT_005cebf4 + iVar1) - *(float *)(iVar10 + 0x50 + iVar13 * 0xa8);
    fVar8 = *(float *)(&DAT_005cebf8 + iVar1) - *(float *)(iVar10 + 0x54 + iVar13 * 0xa8);
    fVar7 = *(float *)(&DAT_005cebfc + iVar1) - *(float *)(iVar10 + iVar13 * 0xa8 + 0x58);
    uVar14 = (int)*(uint *)(&DAT_005cec0c + iVar1) >> 0x1f;
    if ((0 < (int)((*(uint *)(&DAT_005cec0c + iVar1) ^ uVar14) - uVar14)) ||
       (SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7) < 40.0)) {
      (&DAT_005cec78)[iVar1] = 1;
      uVar14 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xe;
      *(float *)(&DAT_005cec28 + iVar1) = (float)((int)uVar14 % 3 + 3);
    }
    break;
  case 0xe:
    iVar13 = FUN_00418890(param_1);
    pfVar3 = (float *)((&DAT_005d2b78)[iVar13 * 3] * 0x50 + 8 + DAT_00715eb8);
    *(float *)(&DAT_005cebf4 + iVar1) = *pfVar3;
    *(float *)(&DAT_005cebf8 + iVar1) = pfVar3[1];
    *(float *)(&DAT_005cebfc + iVar1) = pfVar3[2];
    FUN_00403a70((float)param_1,*pfVar3,pfVar3[1],pfVar3[2]);
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       (*(int *)(&DAT_005ceac0 + (iVar5 + 2) * 0x10 + iVar1) == 2)) {
      (&DAT_005cec60)[iVar1] = 1;
    }
  }
  iVar13 = *(int *)(&DAT_005cea34 + iVar1) * 0xf0 + DAT_00715e50;
  FUN_00405ac0(*(int *)(iVar13 + 0x34),*(int *)(iVar13 + 0x3c),&iStack_24,&iStack_20);
  if (iStack_24 + -1 < 0) {
    if (iStack_24 + 1 < iStack_20) {
      *(undefined4 *)(&DAT_005cea48 + iVar1) = 1;
    }
    else {
      *(undefined4 *)(&DAT_005cea48 + iVar1) = 0;
    }
  }
  else {
    *(undefined4 *)(&DAT_005cea48 + iVar1) = 2;
  }
  if ((10 < *(int *)(&DAT_005cec3c + iVar1)) && (*(int *)(&DAT_005cec3c + iVar1) < 0xd)) {
    iVar1 = *(int *)(&DAT_005ceac0 + (iVar5 + 2) * 0x10 + iVar1);
    if (iVar1 == 1) {
      FUN_00405e90(param_1);
    }
    else if (iVar1 == 2) {
      FUN_00405c80(param_1);
    }
  }
  FUN_00406390(param_1);
  FUN_0041eeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


