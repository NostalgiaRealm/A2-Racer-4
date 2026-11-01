
/* ==== FUN_0046f960 @ 0046f960 ==== 
 * signature: undefined __fastcall FUN_0046f960(int param_1)
 * body: 0046f960-0046fca6
 */

void __fastcall FUN_0046f960(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  longlong lVar12;
  undefined1 *puVar13;
  float *pfVar14;
  float fVar15;
  float local_40;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  puVar7 = (undefined4 *)PTR_s_CarLeft_005a7db4;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b06f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = (char *)puVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    puVar9 = local_28;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar5) = 0;
    local_24 = uVar5;
  }
  puVar13 = local_2c;
  pfVar14 = (float *)0x0;
  local_4 = 0;
  pvVar3 = (void *)FUN_004ea0c0();
  fVar10 = FUN_004eadd0(pvVar3,(int)puVar13,pfVar14);
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  puVar7 = (undefined4 *)PTR_DAT_005a7db8;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = (char *)puVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    puVar9 = local_28;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar5) = 0;
    local_24 = uVar5;
  }
  puVar13 = local_2c;
  pfVar14 = (float *)0x0;
  local_4 = 1;
  pvVar3 = (void *)FUN_004ea0c0();
  fVar11 = FUN_004eadd0(pvVar3,(int)puVar13,pfVar14);
  local_40 = (float)fVar11;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  puVar7 = (undefined4 *)PTR_s_CarForward_005a7dbc;
  FUN_004028f0(local_2c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = (char *)puVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    puVar9 = local_28;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar5) = 0;
    local_24 = uVar5;
  }
  puVar13 = local_2c;
  pfVar14 = (float *)0x0;
  local_4 = 2;
  pvVar3 = (void *)FUN_004ea0c0();
  FUN_004eadd0(pvVar3,(int)puVar13,pfVar14);
  local_4 = 0xffffffff;
  if (local_28 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_28 + -1));
    }
    else {
      *(char *)((int)local_28 + -1) = cVar1 + -1;
    }
  }
  puVar7 = (undefined4 *)PTR_s_CarBackward_005a7dc0;
  FUN_004028f0(local_1c,'\0');
  uVar5 = 0xffffffff;
  pcVar8 = (char *)puVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    puVar9 = local_18;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar5) = 0;
    local_14 = uVar5;
  }
  puVar13 = local_1c;
  pfVar14 = (float *)0x0;
  local_4 = 3;
  pvVar3 = (void *)FUN_004ea0c0();
  FUN_004eadd0(pvVar3,(int)puVar13,pfVar14);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  if (0.0 < (float)fVar10) {
    local_40 = -(float)fVar10;
  }
  lVar12 = __ftol();
  iVar4 = (int)lVar12;
  if (iVar4 < 1) {
    FUN_00402ea0(&DAT_006fbabc,0.0);
    fVar15 = (float)-iVar4;
  }
  else {
    FUN_00402ea0(&DAT_006fbabc,(float)iVar4);
    fVar15 = 0.0;
  }
  FUN_00402e40(&DAT_006fbabc,fVar15);
  fVar15 = ((100.0 - (float)*(int *)(param_1 + 0x24)) + 25.0) * 0.04;
  if (fVar15 == 0.0) {
    fVar15 = 5.0;
  }
  FUN_00402de0(&DAT_006fbabc,(local_40 * 100.0) / fVar15);
  ExceptionList = local_c;
  return;
}


