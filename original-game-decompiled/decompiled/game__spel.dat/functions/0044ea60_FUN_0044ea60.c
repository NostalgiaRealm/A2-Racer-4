
/* ==== FUN_0044ea60 @ 0044ea60 ==== 
 * signature: undefined4 __cdecl FUN_0044ea60(int param_1)
 * body: 0044ea60-0044f0c1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0044ea60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  float10 fVar15;
  float10 fVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 local_94 [4];
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 auStack_78 [4];
  undefined4 *puStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [3];
  undefined4 local_4c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a60d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_00419450(param_1);
  if ((char)uVar3 == '\x01') {
    fVar15 = FUN_004a6800(0x7128b0);
    fVar16 = (float10)_DAT_006fba44;
    _DAT_006fba44 = (float)(fVar15 + fVar16);
    if ((float10)0.25 < fVar15 + fVar16) {
      FUN_004c3fa0((byte *)s_The_player_has_been_corrected__005a1fd4);
      FUN_0040e5a0(param_1,*(undefined4 **)(param_1 * 0xf0 + 0x34 + DAT_00715e50),'\0');
    }
  }
  else {
    _DAT_006fba44 = 0.0;
  }
  iVar12 = param_1 * 0xf0;
  _DAT_006c2f30 = _DAT_006c2f30 + *(float *)(iVar12 + 0xc4 + DAT_00715e50);
  puVar11 = (undefined4 *)(iVar12 + 0xbc + DAT_00715e50);
  _DAT_006fba8c = *puVar11;
  _DAT_006fba90 = puVar11[1];
  _DAT_006fba94 = puVar11[2];
  iVar5 = *(int *)(iVar12 + 0x34 + DAT_00715e50);
  iVar2 = *(int *)(iVar12 + 0x38 + DAT_00715e50);
  if (iVar5 != iVar2) {
    iVar4 = FUN_0040e2f0(iVar5,iVar2);
    iVar5 = *(int *)(iVar12 + 0x38 + DAT_00715e50);
    iVar2 = *(int *)(iVar12 + 0x34 + DAT_00715e50);
    if (iVar4 == 1) {
      iVar5 = FUN_004a7200(iVar2,iVar5);
      DAT_006fbab4 = DAT_006fbab4 + iVar5;
    }
    else {
      iVar5 = FUN_004a7200(iVar2,iVar5);
      DAT_006fbab4 = DAT_006fbab4 - iVar5;
    }
  }
  iVar5 = DAT_00715e50;
  lVar17 = __ftol();
  DAT_006fba64 = (undefined4)lVar17;
  DAT_006fba7c = *(undefined4 *)(iVar12 + 0x34 + iVar5);
  iVar2 = *(int *)(iVar12 + 0x24 + iVar5);
  iVar5 = DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8;
  _DAT_006fba80 = *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0x50 + iVar2 * 0xa8);
  _DAT_006fba84 = *(undefined4 *)(iVar5 + 4);
  _DAT_006fba88 = *(undefined4 *)(iVar5 + 8);
  FUN_0044e780();
  if (DAT_006fb8a0 == 0) {
    FUN_00450190();
  }
  pvVar7 = *(void **)(DAT_006fba58 * 0xf0 + 0x10 + DAT_00715e50);
  pfVar6 = (float *)FUN_004a1ea0(pvVar7,&local_84);
  local_64 = *pfVar6;
  local_60 = pfVar6[1];
  local_5c = pfVar6[2];
  iVar5 = FUN_004b4310(local_4c,(undefined4 *)
                                (DAT_0073b0d0 +
                                 *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10))
  ;
  pfVar6 = (float *)FUN_004b42a0(local_58,&local_64,iVar5);
  local_84 = *pfVar6;
  uVar3 = *(undefined4 *)((int)pvVar7 + 0xe4);
  local_80 = pfVar6[1];
  local_7c = pfVar6[2];
  lVar17 = __ftol();
  iVar5 = (int)lVar17;
  FUN_004a31f0((int)pvVar7);
  lVar17 = __ftol();
  FUN_0042f3e0(&DAT_006fb9c0,uVar3,(int)lVar17,iVar5);
  fVar16 = FUN_004a2eb0((int)pvVar7,2);
  local_68 = (float)fVar16;
  FUN_004a2e70((int)pvVar7,2);
  lVar17 = __ftol();
  FUN_00403050(&DAT_006fbabc,(int)lVar17);
  FUN_004a70a0(param_1);
  FUN_004128a0();
  FUN_00435470(DAT_006fba58,DAT_006fba2c);
  if (DAT_006fba9c == 0) {
    FUN_00403080(&DAT_006fbabc,0);
    FUN_00403050(&DAT_006fbabc,0);
    *(undefined4 *)(DAT_006fba58 * 0xf0 + 0xbc + DAT_00715e50) = 0;
    *(undefined4 *)(DAT_006fba58 * 0xf0 + 0xc0 + DAT_00715e50) = 0;
    *(undefined4 *)(DAT_006fba58 * 0xf0 + 0xc4 + DAT_00715e50) = 0;
    *(undefined4 *)(DAT_006fba58 * 0xf0 + 0xcc + DAT_00715e50) = 0;
    ExceptionList = local_c;
    return 1;
  }
  if (DAT_006fb8c0 == 0) {
    ExceptionList = local_c;
    return 1;
  }
  iVar5 = param_1;
  pvVar7 = (void *)FUN_00469fa0();
  FUN_0046fd10(pvVar7,iVar5);
  iVar2 = *(int *)(iVar12 + 0x24 + DAT_00715e50);
  iVar5 = DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8;
  local_84 = *(float *)(DAT_0073b0d0 + iVar2 + 0x74 + iVar2 * 0xa8);
  local_80 = *(float *)(iVar5 + 4);
  local_7c = *(float *)(iVar5 + 8);
  __ftol();
  FUN_004457d0();
  if (((DAT_006fb8a0 == 3) || (DAT_006fb8a0 == 6)) || (DAT_006fb8a0 == 8)) {
    FUN_00402ea0(&DAT_006fbabc,0.0);
    FUN_00402e40(&DAT_006fbabc,0.0);
    FUN_00403100(&DAT_006fbabc,0);
  }
  FUN_00427b90(param_1,(float *)&DAT_006fbabc);
  fVar16 = FUN_004a6800(0x7128b0);
  uVar8 = 0xffffffff;
  pcVar10 = s_Keyboard0_005a1ff4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar9 = ~uVar8 - 1;
  _DAT_006fbab8 = (float)(fVar16 + (float10)_DAT_006fbab8);
  local_90 = (char *)0x0;
  local_8c = 0;
  local_88 = 0;
  uVar8 = FUN_004095c0();
  if (uVar8 < uVar9) {
    FUN_0054b1b4();
  }
  if (((local_90 == (char *)0x0) || (cVar1 = local_90[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar9 == 0) {
      FUN_004028f0(local_94,'\x01');
      goto LAB_0044ef99;
    }
    if ((0x1f < local_88) || (local_88 < uVar9)) {
      FUN_004028f0(local_94,'\x01');
      goto LAB_0044ef6c;
    }
  }
  else {
    if (uVar9 == 0) {
      local_90[-1] = cVar1 + -1;
      FUN_004028f0(local_94,'\0');
      goto LAB_0044ef99;
    }
LAB_0044ef6c:
    FUN_00402b20(uVar9);
  }
  pcVar10 = s_Keyboard0_005a1ff4;
  pcVar13 = local_90;
  for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_004029e0(local_94,uVar9);
LAB_0044ef99:
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_005a2000;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 1;
  uStack_4 = 0;
  puStack_74 = (undefined4 *)0x0;
  uStack_70 = 0;
  uStack_6c = 0;
  uVar3 = FUN_00402a00(auStack_78,uVar8,'\x01');
  if ((char)uVar3 != '\0') {
    puVar11 = (undefined4 *)&DAT_005a2000;
    puVar14 = puStack_74;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    *(undefined1 *)((int)puStack_74 + uVar8) = 0;
    uStack_70 = uVar8;
  }
  puVar19 = local_94;
  puVar18 = auStack_78;
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  pvVar7 = (void *)FUN_004ea0c0();
  iVar5 = FUN_004eb7a0(pvVar7,(int)puVar18,(float)puVar19);
  if (puStack_74 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_74 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)puStack_74 + -1));
    }
    else {
      *(char *)((int)puStack_74 + -1) = cVar1 + -1;
    }
  }
  puStack_74 = (undefined4 *)0x0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_4 = 0xffffffff;
  if (local_90 != (char *)0x0) {
    cVar1 = local_90[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_90 + -1);
    }
    else {
      local_90[-1] = cVar1 + -1;
    }
  }
  local_90 = (char *)0x0;
  local_8c = 0;
  local_88 = 0;
  if ((char)iVar5 != '\0') {
    FUN_0041be70(&DAT_005d3118,9,DAT_006fba58,-1);
  }
  ExceptionList = local_c;
  return 1;
}


