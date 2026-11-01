
/* ==== FUN_004096b0 @ 004096b0 ==== 
 * signature: undefined __stdcall FUN_004096b0(void)
 * body: 004096b0-00409cc2
 */

void FUN_004096b0(void)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [19];
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_005696a0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_00590a68;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_48,(undefined4 *)s_keyboard0_00590a68,~uVar3 - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00590a74;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_38,(undefined4 *)&DAT_00590a74,~uVar3 - 1);
  local_8._0_1_ = 2;
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_ACTION_AI_DEBUG_00590a80;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_ACTION_AI_DEBUG_00590a80,~uVar3 - 1);
  local_8._0_1_ = 3;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,local_28,(int)local_38,(int)local_48);
  local_8._0_1_ = 2;
  FUN_004028f0(local_28,'\x01');
  local_8._0_1_ = 1;
  FUN_004028f0(local_38,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_48,'\x01');
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_00590a90;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_00590a90,~uVar3 - 1);
  local_8._0_1_ = 4;
  local_38[0] = local_15;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00590a9c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_38,(undefined4 *)&DAT_00590a9c,~uVar3 - 1);
  local_48[0] = local_15;
  local_8._0_1_ = 5;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_ACTION_BBOX_TOGGLE_00590aa8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_48,(undefined4 *)s_ACTION_BBOX_TOGGLE_00590aa8,~uVar3 - 1);
  local_8._0_1_ = 6;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,local_48,(int)local_38,(int)local_28);
  local_8._0_1_ = 5;
  FUN_004028f0(local_48,'\x01');
  local_8._0_1_ = 4;
  FUN_004028f0(local_38,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_28,'\x01');
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_00590abc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_00590abc,~uVar3 - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 7;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00590ac8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_38,(undefined4 *)&DAT_00590ac8,~uVar3 - 1);
  local_8._0_1_ = 8;
  local_48[0] = local_15;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_ACTION_WP_TOGGLE_00590ad4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_48,(undefined4 *)s_ACTION_WP_TOGGLE_00590ad4,~uVar3 - 1);
  local_8._0_1_ = 9;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,local_48,(int)local_38,(int)local_28);
  local_8._0_1_ = 8;
  FUN_004028f0(local_48,'\x01');
  local_8._0_1_ = 7;
  FUN_004028f0(local_38,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_28,'\x01');
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_00590ae8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_00590ae8,~uVar3 - 1);
  local_8._0_1_ = 10;
  local_38[0] = local_15;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00590af4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_38,(undefined4 *)&DAT_00590af4,~uVar3 - 1);
  local_48[0] = local_15;
  local_8._0_1_ = 0xb;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_ACTION_LINE_TOGGLE_00590b00;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_48,(undefined4 *)s_ACTION_LINE_TOGGLE_00590b00,~uVar3 - 1);
  local_8._0_1_ = 0xc;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,local_48,(int)local_38,(int)local_28);
  local_8._0_1_ = 0xb;
  FUN_004028f0(local_48,'\x01');
  local_8._0_1_ = 10;
  FUN_004028f0(local_38,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_28,'\x01');
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_00590b14;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_00590b14,~uVar3 - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 0xd;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00590b20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_38,(undefined4 *)&DAT_00590b20,~uVar3 - 1);
  local_8._0_1_ = 0xe;
  local_48[0] = local_15;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_ACTION_FSM_TOGGLE_00590b2c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_48,(undefined4 *)s_ACTION_FSM_TOGGLE_00590b2c,~uVar3 - 1);
  local_8._0_1_ = 0xf;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,local_48,(int)local_38,(int)local_28);
  local_8._0_1_ = 0xe;
  FUN_004028f0(local_48,'\x01');
  local_8._0_1_ = 0xd;
  FUN_004028f0(local_38,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_28,'\x01');
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_00590b40;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_00590b40,~uVar3 - 1);
  local_8._0_1_ = 0x10;
  local_38[0] = local_15;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00590b4c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_38,(undefined4 *)&DAT_00590b4c,~uVar3 - 1);
  local_8._0_1_ = 0x11;
  local_48[0] = local_15;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_ACTION_POSITIONMARKER_TOGGLE_00590b58;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_48,(undefined4 *)s_ACTION_POSITIONMARKER_TOGGLE_00590b58,~uVar3 - 1);
  local_8._0_1_ = 0x12;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,local_48,(int)local_38,(int)local_28);
  local_8._0_1_ = 0x11;
  FUN_004028f0(local_48,'\x01');
  local_8._0_1_ = 0x10;
  FUN_004028f0(local_38,'\x01');
  local_8._0_1_ = 0;
  FUN_004028f0(local_28,'\x01');
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_keyboard0_00590b78;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_keyboard0_00590b78,~uVar3 - 1);
  local_38[0] = local_15;
  local_8._0_1_ = 0x13;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00590b84;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_38,(undefined4 *)&DAT_00590b84,~uVar3 - 1);
  local_8._0_1_ = 0x14;
  local_48[0] = local_15;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar4 = s_ACTION_POLY_TOGGLE_00590b90;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_48,(undefined4 *)s_ACTION_POLY_TOGGLE_00590b90,~uVar3 - 1);
  local_8._0_1_ = 0x15;
  pvVar2 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar2,local_48,(int)local_38,(int)local_28);
  local_8._0_1_ = 0x14;
  FUN_004028f0(local_48,'\x01');
  local_8._0_1_ = 0x13;
  FUN_004028f0(local_38,'\x01');
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  DAT_005ccd44 = 0;
  ExceptionList = local_10;
  return;
}


