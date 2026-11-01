
/* ==== FUN_004706d0 @ 004706d0 ==== 
 * signature: undefined __stdcall FUN_004706d0(void)
 * body: 004706d0-00470e97
 */

void FUN_004706d0(void)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b22b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8a6c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_keyboard0_005a8a6c,~uVar3 - 1);
  local_4 = 0;
  FUN_004028f0(local_5c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_CM_KEYB_TILDE_005a8a78;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)s_CM_KEYB_TILDE_005a8a78,~uVar3 - 1);
  local_4._0_1_ = 1;
  FUN_004028f0(local_6c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_Activate_005a8a88;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_Console_Activate_005a8a88,~uVar3 - 1);
  puVar7 = local_4c;
  puVar6 = local_5c;
  puVar5 = local_6c;
  local_4._0_1_ = 2;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 1;
  FUN_004028f0(local_6c,'\x01');
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_4c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8a9c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_keyboard0_005a8a9c,~uVar3 - 1);
  local_4 = 3;
  FUN_004028f0(local_5c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_CM_KEYB_ESC_005a8aa8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)s_CM_KEYB_ESC_005a8aa8,~uVar3 - 1);
  local_4._0_1_ = 4;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_DeActivate_005a8ab4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_Console_DeActivate_005a8ab4,~uVar3 - 1);
  puVar7 = local_6c;
  puVar6 = local_5c;
  puVar5 = local_4c;
  local_4._0_1_ = 5;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 4;
  FUN_004028f0(local_4c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8ac8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_keyboard0_005a8ac8,~uVar3 - 1);
  local_4 = 6;
  FUN_004028f0(local_5c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_CM_KEYB_TILDE_005a8ad4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)s_CM_KEYB_TILDE_005a8ad4,~uVar3 - 1);
  local_4._0_1_ = 7;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_DeActivate_005a8ae4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_Console_DeActivate_005a8ae4,~uVar3 - 1);
  puVar7 = local_6c;
  puVar6 = local_5c;
  puVar5 = local_4c;
  local_4._0_1_ = 8;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 7;
  FUN_004028f0(local_4c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8af8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_keyboard0_005a8af8,~uVar3 - 1);
  local_4 = 9;
  FUN_004028f0(local_5c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_CM_KEYB_TAB_005a8b04;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)s_CM_KEYB_TAB_005a8b04,~uVar3 - 1);
  local_4._0_1_ = 10;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_Tab_005a8b10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_Console_Tab_005a8b10,~uVar3 - 1);
  puVar7 = local_6c;
  puVar6 = local_5c;
  puVar5 = local_4c;
  local_4._0_1_ = 0xb;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 10;
  FUN_004028f0(local_4c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8b1c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_keyboard0_005a8b1c,~uVar3 - 1);
  local_4 = 0xc;
  FUN_004028f0(local_5c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_CM_KEYB_BACK_005a8b28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)s_CM_KEYB_BACK_005a8b28,~uVar3 - 1);
  local_4._0_1_ = 0xd;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_Back_005a8b38;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_Console_Back_005a8b38,~uVar3 - 1);
  puVar7 = local_6c;
  puVar6 = local_5c;
  puVar5 = local_4c;
  local_4._0_1_ = 0xe;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 0xd;
  FUN_004028f0(local_4c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8b48;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_keyboard0_005a8b48,~uVar3 - 1);
  local_4 = 0xf;
  FUN_004028f0(local_5c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_CM_KEYB_RETURN_005a8b54;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)s_CM_KEYB_RETURN_005a8b54,~uVar3 - 1);
  local_4._0_1_ = 0x10;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_Return_005a8b64;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_Console_Return_005a8b64,~uVar3 - 1);
  puVar7 = local_6c;
  puVar6 = local_5c;
  puVar5 = local_4c;
  local_4._0_1_ = 0x11;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 0x10;
  FUN_004028f0(local_4c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_6c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8b74;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_6c,(undefined4 *)s_keyboard0_005a8b74,~uVar3 - 1);
  local_4 = 0x12;
  FUN_004028f0(local_5c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_005a8b80;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)&DAT_005a8b80,~uVar3 - 1);
  local_4._0_1_ = 0x13;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_Up_005a8b8c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_Console_Up_005a8b8c,~uVar3 - 1);
  puVar7 = local_6c;
  puVar6 = local_5c;
  puVar5 = local_4c;
  local_4._0_1_ = 0x14;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 0x13;
  FUN_004028f0(local_4c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_004028f0(local_5c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_6c,'\x01');
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_005a8b98;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_1c,(undefined4 *)s_keyboard0_005a8b98,~uVar3 - 1);
  local_4 = 0x15;
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_CM_KEYB_DOWN_005a8ba4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_CM_KEYB_DOWN_005a8ba4,~uVar3 - 1);
  local_4._0_1_ = 0x16;
  FUN_004028f0(local_3c,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_Console_Down_005a8bb4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_Console_Down_005a8bb4,~uVar3 - 1);
  local_4._0_1_ = 0x17;
  puVar7 = local_1c;
  puVar6 = local_2c;
  puVar5 = local_3c;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,puVar5,(int)puVar6,(int)puVar7);
  local_4._0_1_ = 0x16;
  FUN_004028f0(local_3c,'\x01');
  local_4 = CONCAT31(local_4._1_3_,0x15);
  FUN_004028f0(local_2c,'\x01');
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


