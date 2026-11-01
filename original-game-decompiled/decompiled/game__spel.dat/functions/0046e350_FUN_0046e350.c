
/* ==== FUN_0046e350 @ 0046e350 ==== 
 * signature: undefined __fastcall FUN_0046e350(int param_1)
 * body: 0046e350-0046ecd2
 */

void __fastcall FUN_0046e350(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 local_6c [4];
  char *local_68;
  undefined1 local_5c [4];
  undefined4 *local_58;
  undefined1 local_4c [4];
  char *local_48;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056afb5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = FUN_0049df90(local_1c,&DAT_005a87d0);
  pvVar8 = (void *)(param_1 + 0x14);
  local_4 = 0;
  FUN_004093c0(pvVar8,puVar3,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  *(undefined4 *)(param_1 + 0x10) = 3;
  FUN_004028f0(local_2c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_LEFT_005a87d4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_CM_JOY_LEFT_005a87d4,~uVar9 - 1);
  puVar2 = PTR_s_CarLeft_005a7db4;
  local_4 = 1;
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_2c;
  puVar14 = local_6c;
  local_4._0_1_ = 2;
  pvVar6 = pvVar8;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004028f0(local_6c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_RIGHT_005a87e0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_RIGHT_005a87e0,~uVar9 - 1);
  puVar2 = PTR_DAT_005a7db8;
  local_4 = 3;
  FUN_004028f0(local_2c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_2c;
  local_4._0_1_ = 4;
  pvVar6 = pvVar8;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_005a87f0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)&DAT_005a87f0,~uVar9 - 1);
  puVar2 = PTR_s_CarForward_005a7dbc;
  local_4 = 5;
  FUN_004028f0(local_2c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_2c;
  local_4._0_1_ = 6;
  pvVar6 = pvVar8;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_DOWN_005a87fc;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_DOWN_005a87fc,~uVar9 - 1);
  puVar2 = PTR_s_CarBackward_005a7dc0;
  local_4 = 7;
  FUN_004028f0(local_2c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_2c;
  local_4._0_1_ = 8;
  pvVar6 = pvVar8;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  pvVar6 = pvVar8;
  pvVar4 = (void *)FUN_004ea0c0();
  iVar5 = FUN_004eb7d0(pvVar4,(int)pvVar6);
  if (*(int *)(iVar5 + 0x154) < 3) {
    FUN_004028f0(local_6c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_JOY_BUTTON1_005a8838;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON1_005a8838,~uVar9 - 1);
    puVar2 = PTR_DAT_005a7dc4;
    local_4 = 0xf;
    FUN_004028f0(local_2c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = puVar2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
    puVar3 = local_6c;
    puVar14 = local_2c;
    local_4._0_1_ = 0x10;
    pvVar6 = pvVar8;
    pvVar4 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
    local_4 = CONCAT31(local_4._1_3_,0xf);
    FUN_004028f0(local_2c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_6c,'\x01');
    FUN_004028f0(local_6c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_JOY_BUTTON2_005a8848;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON2_005a8848,~uVar9 - 1);
    puVar2 = PTR_s_CarHandbrake_005a7dcc;
    local_4 = 0x11;
    FUN_004028f0(local_2c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = puVar2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
    puVar3 = local_6c;
    puVar14 = local_2c;
    local_4._0_1_ = 0x12;
    pvVar6 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar6,puVar14,(int)puVar3,(int)pvVar8);
    local_4 = CONCAT31(local_4._1_3_,0x11);
    FUN_004028f0(local_2c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_6c,'\x01');
    FUN_004028f0(local_6c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_keyboard0_005a8858;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar7 = FUN_00402a00(local_6c,uVar9,'\x01');
    if ((char)uVar7 != '\0') {
      pcVar11 = s_keyboard0_005a8858;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)local_68 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_68 = local_68 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_68 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_68 = local_68 + 1;
      }
      FUN_004029e0(local_6c,uVar9);
    }
    local_4 = 0x13;
    FUN_004028f0(local_1c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_KEYB_LCONTROL_005a8864;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)s_CM_KEYB_LCONTROL_005a8864,~uVar9 - 1);
    puVar2 = PTR_s_CarHorn_005a7dc8;
    local_4._0_1_ = 0x14;
    FUN_004028f0(local_2c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = puVar2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
    puVar3 = local_6c;
    puVar14 = local_1c;
    puVar15 = local_2c;
    local_4._0_1_ = 0x15;
    pvVar8 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar8,puVar15,(int)puVar14,(int)puVar3);
    local_4._0_1_ = 0x14;
    FUN_004028f0(local_2c,'\x01');
    local_4 = CONCAT31(local_4._1_3_,0x13);
    FUN_004028f0(local_1c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_6c,'\x01');
    FUN_004028f0(local_3c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_keyboard0_005a8878;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar7 = FUN_00402a00(local_3c,uVar9,'\x01');
    if ((char)uVar7 != '\0') {
      pcVar11 = s_keyboard0_005a8878;
      pcVar13 = local_38;
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
      FUN_004029e0(local_3c,uVar9);
    }
    local_4 = 0x16;
    FUN_004028f0(local_4c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = s_CM_KEYB_RCONTROL_005a8884;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar7 = FUN_00402a00(local_4c,uVar9,'\x01');
    if ((char)uVar7 != '\0') {
      pcVar11 = s_CM_KEYB_RCONTROL_005a8884;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)local_48 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_48 = local_48 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_48 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_48 = local_48 + 1;
      }
      FUN_004029e0(local_4c,uVar9);
    }
    puVar12 = (undefined4 *)PTR_s_CarHorn_005a7dc8;
    local_4 = CONCAT31(local_4._1_3_,0x17);
    FUN_004028f0(local_5c,'\0');
    uVar9 = 0xffffffff;
    pcVar11 = (char *)puVar12;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    uVar7 = FUN_00402a00(local_5c,uVar9,'\x01');
    if ((char)uVar7 != '\0') {
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_58 = *puVar12;
        puVar12 = puVar12 + 1;
        local_58 = local_58 + 1;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)local_58 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        local_58 = (undefined4 *)((int)local_58 + 1);
      }
      FUN_004029e0(local_5c,uVar9);
    }
    puVar3 = local_3c;
    puVar14 = local_4c;
    puVar15 = local_5c;
    local_4._0_1_ = 0x18;
    pvVar8 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar8,puVar15,(int)puVar14,(int)puVar3);
    local_4._0_1_ = 0x17;
    FUN_004028f0(local_5c,'\x01');
    local_4 = CONCAT31(local_4._1_3_,0x16);
    FUN_004028f0(local_4c,'\x01');
    if (local_38 != (char *)0x0) {
      cVar1 = local_38[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_38[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339(local_38 + -1);
    }
    ExceptionList = local_c;
    return;
  }
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_BUTTON1_005a8808;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON1_005a8808,~uVar9 - 1);
  puVar2 = PTR_DAT_005a7dc4;
  local_4 = 9;
  FUN_004028f0(local_2c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_2c;
  local_4._0_1_ = 10;
  pvVar6 = pvVar8;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_BUTTON2_005a8818;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON2_005a8818,~uVar9 - 1);
  puVar2 = PTR_s_CarHorn_005a7dc8;
  local_4 = 0xb;
  FUN_004028f0(local_2c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_2c;
  local_4._0_1_ = 0xc;
  pvVar6 = pvVar8;
  pvVar4 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar4,puVar14,(int)puVar3,(int)pvVar6);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = s_CM_JOY_BUTTON3_005a8828;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_CM_JOY_BUTTON3_005a8828,~uVar9 - 1);
  puVar2 = PTR_s_CarHandbrake_005a7dcc;
  local_4 = 0xd;
  FUN_004028f0(local_2c,'\0');
  uVar9 = 0xffffffff;
  pcVar11 = puVar2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar9 - 1);
  puVar3 = local_6c;
  puVar14 = local_2c;
  local_4._0_1_ = 0xe;
  pvVar6 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar6,puVar14,(int)puVar3,(int)pvVar8);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  ExceptionList = local_c;
  return;
}


