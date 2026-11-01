
/* ==== FUN_0046f523 @ 0046f523 ==== 
 * signature: undefined __fastcall FUN_0046f523(int param_1)
 * body: 0046f523-0046f52f
 */

void __fastcall FUN_0046f523(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  float10 fVar11;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 uVar16;
  float *pfVar17;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056b045;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a6800(0x7128b0);
  FUN_004a6800(0x7128b0);
  fVar10 = FUN_004a6800(0x7128b0);
  iVar6 = param_1 + 0x14;
  fVar14 = (float)(fVar10 + fVar10);
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eb7d0(pvVar2,iVar6);
  puVar7 = (undefined4 *)PTR_s_CarLeft_005a7db4;
  FUN_004028f0(auStack_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(auStack_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = puStack_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(auStack_1c,uVar4);
  }
  uVar16 = 1;
  puVar12 = auStack_1c;
  uStack_4 = 0;
  fVar13 = fVar14;
  fVar15 = fVar14;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eafb0(pvVar2,(int)puVar12,fVar13,fVar15,uVar16);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_1c,'\x01');
  puVar7 = (undefined4 *)PTR_DAT_005a7db8;
  FUN_004028f0(auStack_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(auStack_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = puStack_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(auStack_1c,uVar4);
  }
  uVar16 = 1;
  puVar12 = auStack_1c;
  uStack_4 = 1;
  fVar13 = fVar14;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eafb0(pvVar2,(int)puVar12,fVar14,fVar13,uVar16);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_1c,'\x01');
  puVar7 = (undefined4 *)PTR_s_CarForward_005a7dbc;
  FUN_004028f0(auStack_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(auStack_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = puStack_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(auStack_1c,uVar4);
  }
  puVar12 = auStack_1c;
  pfVar17 = (float *)0x0;
  uStack_4 = 2;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar10 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_1c,'\x01');
  iVar6 = FUN_0046f2a0((float10)0.5 < fVar10);
  FUN_00402ea0(&DAT_006fbabc,(float)iVar6);
  puVar7 = (undefined4 *)PTR_s_CarBackward_005a7dc0;
  FUN_004028f0(auStack_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(auStack_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = puStack_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(auStack_1c,uVar4);
  }
  puVar12 = auStack_1c;
  pfVar17 = (float *)0x0;
  uStack_4 = 3;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar10 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_1c,'\x01');
  iVar6 = FUN_0046f2e0((float10)0.5 < fVar10);
  FUN_00402e40(&DAT_006fbabc,(float)iVar6);
  puVar7 = (undefined4 *)PTR_s_CarLeft_005a7db4;
  FUN_004028f0(auStack_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(auStack_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = puStack_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)puStack_18 + uVar4) = 0;
    uStack_14 = uVar4;
  }
  puVar12 = auStack_1c;
  pfVar17 = (float *)0x0;
  uStack_4 = 4;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar10 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  uStack_4 = 0xffffffff;
  FUN_004028f0(auStack_1c,'\x01');
  uVar4 = 0xffffffff;
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  pcVar9 = PTR_DAT_005a7db8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(auStack_2c,(undefined4 *)PTR_DAT_005a7db8,~uVar4 - 1);
  puVar12 = auStack_2c;
  pfVar17 = (float *)0x0;
  uStack_4 = 5;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar11 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  uStack_4 = 0xffffffff;
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_28 + -1));
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  FUN_00402de0(&DAT_006fbabc,((float)fVar10 * -200.0 + (float)fVar11 * 200.0) * 0.5);
  ExceptionList = pvStack_c;
  return;
}


