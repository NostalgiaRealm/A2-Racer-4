
/* ==== FUN_0046d8a0 @ 0046d8a0 ==== 
 * signature: undefined __fastcall FUN_0046d8a0(int param_1)
 * body: 0046d8a0-0046e344
 */

void __fastcall FUN_0046d8a0(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 local_6c [4];
  undefined4 *local_68;
  undefined1 local_5c [4];
  char *local_58;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056aee3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = FUN_0049df90(local_1c,&DAT_005a86e0);
  pvVar7 = (void *)(param_1 + 0x14);
  local_4 = 0;
  FUN_004093c0(pvVar7,puVar3,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  *(undefined4 *)(param_1 + 0x10) = 2;
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_LEFT_005a86e4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_LEFT_005a86e4,~uVar9 - 1);
  puVar2 = PTR_s_CarLeft_005a7db4;
  local_4 = 1;
  FUN_004028f0(local_5c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_5c;
  local_4._0_1_ = 2;
  pvVar6 = pvVar7;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_RIGHT_005a86f0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_RIGHT_005a86f0,~uVar9 - 1);
  puVar2 = PTR_DAT_005a7db8;
  local_4 = 3;
  FUN_004028f0(local_5c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_5c;
  local_4._0_1_ = 4;
  pvVar6 = pvVar7;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_DOWN_005a8700;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_DOWN_005a8700,~uVar9 - 1);
  puVar2 = PTR_s_CarBackward_005a7dc0;
  local_4 = 5;
  FUN_004028f0(local_5c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_5c;
  local_4._0_1_ = 6;
  pvVar6 = pvVar7;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  pvVar6 = pvVar7;
  pvVar4 = (void *)FUN_004ea0c0();
  iVar5 = FUN_004eb7d0(pvVar4,(int)pvVar6);
  if (*(int *)(iVar5 + 0x154) < 3) {
    FUN_004028f0(local_6c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_JOY_BUTTON2_005a874c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON2_005a874c,~uVar9 - 1);
    puVar2 = PTR_s_CarForward_005a7dbc;
    local_4 = 0xf;
    FUN_004028f0(local_5c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = puVar2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
    puVar3 = local_6c;
    puVar14 = local_5c;
    local_4._0_1_ = 0x10;
    pvVar6 = pvVar7;
    pvVar4 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
    local_4 = CONCAT31(local_4._1_3_,0xf);
    FUN_004028f0(local_5c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_6c,'\x01');
    FUN_004028f0(local_6c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_JOY_BUTTON1_005a875c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON1_005a875c,~uVar9 - 1);
    puVar2 = PTR_DAT_005a7dc4;
    local_4 = 0x11;
    FUN_004028f0(local_5c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = puVar2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
    puVar3 = local_6c;
    puVar14 = local_5c;
    local_4._0_1_ = 0x12;
    pvVar6 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar6,puVar14,(int)puVar3,(int)pvVar7);
    local_4 = CONCAT31(local_4._1_3_,0x11);
    FUN_004028f0(local_5c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_6c,'\x01');
    FUN_004028f0(local_1c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_keyboard0_005a876c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)s_keyboard0_005a876c,~uVar9 - 1);
    local_4 = 0x13;
    FUN_004028f0(local_6c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_KEYB_ALT_005a8778;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_6c,(undefined4 *)s_CM_KEYB_ALT_005a8778,~uVar9 - 1);
    puVar2 = PTR_s_CarHandbrake_005a7dcc;
    local_4._0_1_ = 0x14;
    FUN_004028f0(local_5c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = puVar2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
    puVar3 = local_1c;
    puVar14 = local_6c;
    puVar15 = local_5c;
    local_4._0_1_ = 0x15;
    pvVar7 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar7,puVar15,(int)puVar14,(int)puVar3);
    local_4._0_1_ = 0x14;
    FUN_004028f0(local_5c,'\x01');
    local_4 = CONCAT31(local_4._1_3_,0x13);
    FUN_004028f0(local_6c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
    FUN_004028f0(local_5c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_keyboard0_005a8784;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar8 = FUN_00402a00(local_5c,uVar9,'\x01');
    if ((char)uVar8 != '\0') {
      pcVar11 = s_keyboard0_005a8784;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)local_58 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_58 = local_58 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_58 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_58 = local_58 + 1;
      }
      FUN_004029e0(local_5c,uVar9);
    }
    local_4 = 0x16;
    FUN_004028f0(local_1c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_KEYB_LCONTROL_005a8790;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)s_CM_KEYB_LCONTROL_005a8790,~uVar9 - 1);
    puVar12 = (undefined4 *)PTR_s_CarHorn_005a7dc8;
    local_4 = CONCAT31(local_4._1_3_,0x17);
    FUN_004028f0(local_6c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = (char *)puVar12;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar8 = FUN_00402a00(local_6c,uVar9,'\x01');
    if ((char)uVar8 != '\0') {
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_68 = *puVar12;
        puVar12 = puVar12 + 1;
        local_68 = local_68 + 1;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)local_68 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        local_68 = (undefined4 *)((int)local_68 + 1);
      }
      FUN_004029e0(local_6c,uVar9);
    }
    puVar3 = local_5c;
    puVar14 = local_1c;
    puVar15 = local_6c;
    local_4._0_1_ = 0x18;
    pvVar7 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar7,puVar15,(int)puVar14,(int)puVar3);
    local_4._0_1_ = 0x17;
    FUN_004028f0(local_6c,'\x01');
    local_4 = CONCAT31(local_4._1_3_,0x16);
    FUN_004028f0(local_1c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_5c,'\x01');
    FUN_004028f0(local_2c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_keyboard0_005a87a4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar8 = FUN_00402a00(local_2c,uVar9,'\x01');
    if ((char)uVar8 != '\0') {
      pcVar11 = s_keyboard0_005a87a4;
      pcVar13 = local_28;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004029e0(local_2c,uVar9);
    }
    local_4 = 0x19;
    FUN_004028f0(local_3c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_KEYB_RCONTROL_005a87b0;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar8 = FUN_00402a00(local_3c,uVar9,'\x01');
    if ((char)uVar8 != '\0') {
      pcVar11 = s_CM_KEYB_RCONTROL_005a87b0;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)local_38 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_38 = local_38 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_38 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_38 = local_38 + 1;
      }
      FUN_004029e0(local_3c,uVar9);
    }
    puVar12 = (undefined4 *)PTR_s_CarHorn_005a7dc8;
    local_4 = CONCAT31(local_4._1_3_,0x1a);
    FUN_004028f0(local_4c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = (char *)puVar12;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar8 = FUN_00402a00(local_4c,uVar9,'\x01');
    if ((char)uVar8 != '\0') {
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_48 = *puVar12;
        puVar12 = puVar12 + 1;
        local_48 = local_48 + 1;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)local_48 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        local_48 = (undefined4 *)((int)local_48 + 1);
      }
      FUN_004029e0(local_4c,uVar9);
    }
    puVar3 = local_2c;
    puVar14 = local_3c;
    puVar15 = local_4c;
    local_4._0_1_ = 0x1b;
    pvVar7 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar7,puVar15,(int)puVar14,(int)puVar3);
    local_4._0_1_ = 0x1a;
    FUN_004028f0(local_4c,'\x01');
    local_4 = CONCAT31(local_4._1_3_,0x19);
    FUN_004028f0(local_3c,'\x01');
    if (local_28 != (char *)0x0) {
      cVar1 = local_28[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_28[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339(local_28 + -1);
    }
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_BUTTON3_005a870c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON3_005a870c,~uVar9 - 1);
  puVar2 = PTR_s_CarForward_005a7dbc;
  local_4 = 7;
  FUN_004028f0(local_5c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_5c;
  local_4._0_1_ = 8;
  pvVar6 = pvVar7;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_BUTTON1_005a871c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON1_005a871c,~uVar9 - 1);
  puVar2 = PTR_DAT_005a7dc4;
  local_4 = 9;
  FUN_004028f0(local_5c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_5c;
  local_4._0_1_ = 10;
  pvVar6 = pvVar7;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_BUTTON4_005a872c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON4_005a872c,~uVar9 - 1);
  puVar2 = PTR_s_CarHandbrake_005a7dcc;
  local_4 = 0xb;
  FUN_004028f0(local_5c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_5c;
  local_4._0_1_ = 0xc;
  pvVar6 = pvVar7;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_BUTTON2_005a873c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON2_005a873c,~uVar9 - 1);
  puVar2 = PTR_s_CarHorn_005a7dc8;
  local_4 = 0xd;
  FUN_004028f0(local_5c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_5c;
  local_4._0_1_ = 0xe;
  pvVar6 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar6,puVar14,(int)puVar3,(int)pvVar7);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  ExceptionList = local_c;
  return;
}


