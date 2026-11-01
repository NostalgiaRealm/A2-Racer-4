
/* ==== FUN_0046f530 @ 0046f530 ==== 
 * signature: undefined __fastcall FUN_0046f530(int param_1)
 * body: 0046f530-0046f958
 */

void __fastcall FUN_0046f530(int param_1)

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
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b045;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a6800(0x7128b0);
  FUN_004a6800(0x7128b0);
  fVar10 = FUN_004a6800(0x7128b0);
  iVar6 = param_1 + 0x14;
  fVar14 = (float)(fVar10 + fVar10);
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eb7d0(pvVar2,iVar6);
  puVar7 = (undefined4 *)PTR_s_CarLeft_005a7db4;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_18;
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
    FUN_004029e0(local_1c,uVar4);
  }
  uVar16 = 1;
  puVar12 = local_1c;
  local_4 = 0;
  fVar13 = fVar14;
  fVar15 = fVar14;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eafb0(pvVar2,(int)puVar12,fVar13,fVar15,uVar16);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  puVar7 = (undefined4 *)PTR_DAT_005a7db8;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_18;
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
    FUN_004029e0(local_1c,uVar4);
  }
  uVar16 = 1;
  puVar12 = local_1c;
  local_4 = 1;
  fVar13 = fVar14;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eafb0(pvVar2,(int)puVar12,fVar14,fVar13,uVar16);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  puVar7 = (undefined4 *)PTR_s_CarForward_005a7dbc;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_18;
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
    FUN_004029e0(local_1c,uVar4);
  }
  puVar12 = local_1c;
  pfVar17 = (float *)0x0;
  local_4 = 2;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar10 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  iVar6 = FUN_0046f2a0((float10)0.5 < fVar10);
  FUN_00402ea0(&DAT_006fbabc,(float)iVar6);
  puVar7 = (undefined4 *)PTR_s_CarBackward_005a7dc0;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_18;
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
    FUN_004029e0(local_1c,uVar4);
  }
  puVar12 = local_1c;
  pfVar17 = (float *)0x0;
  local_4 = 3;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar10 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  iVar6 = FUN_0046f2e0((float10)0.5 < fVar10);
  FUN_00402e40(&DAT_006fbabc,(float)iVar6);
  puVar7 = (undefined4 *)PTR_s_CarLeft_005a7db4;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar9 = (char *)puVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_18;
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
    *(undefined1 *)((int)local_18 + uVar4) = 0;
    local_14 = uVar4;
  }
  puVar12 = local_1c;
  pfVar17 = (float *)0x0;
  local_4 = 4;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar10 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  uVar4 = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar9 = PTR_DAT_005a7db8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)PTR_DAT_005a7db8,~uVar4 - 1);
  puVar12 = local_2c;
  pfVar17 = (float *)0x0;
  local_4 = 5;
  pvVar2 = (void *)FUN_004ea0c0();
  fVar11 = FUN_004eadd0(pvVar2,(int)puVar12,pfVar17);
  local_4 = 0xffffffff;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402de0(&DAT_006fbabc,((float)fVar10 * -200.0 + (float)fVar11 * 200.0) * 0.5);
  ExceptionList = local_c;
  return;
}


