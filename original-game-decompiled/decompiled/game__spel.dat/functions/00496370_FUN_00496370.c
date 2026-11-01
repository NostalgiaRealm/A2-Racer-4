
/* ==== FUN_00496370 @ 00496370 ==== 
 * signature: undefined __stdcall FUN_00496370(void)
 * body: 00496370-0049670a
 */

void FUN_00496370(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_4c [4];
  char *local_48;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e33c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Start_005ada6c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_C__Work_A2IV_Game_prog_Ovl_Start_005ada6c,~uVar3 - 1);
  local_4 = 0;
  FUN_004028f0(local_3c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_Overlay_Digit_1_not_found_in_ove_005ada94;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_Overlay_Digit_1_not_found_in_ove_005ada94,~uVar3 - 1);
  local_4._0_1_ = 1;
  FUN_00487bc0((int)s_OVL_START_DIGIT_1_005ada14,local_3c,(int)local_4c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_3c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_4c,'\x01');
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adabc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_4c,(undefined4 *)s_C__Work_A2IV_Game_prog_Ovl_Start_005adabc,~uVar3 - 1);
  local_4 = 2;
  FUN_004028f0(local_3c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_Overlay_Digit_2_not_found_in_ove_005adae4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_Overlay_Digit_2_not_found_in_ove_005adae4,~uVar3 - 1);
  local_4._0_1_ = 3;
  FUN_00487bc0((int)s_OVL_START_DIGIT_2_005ada28,local_3c,(int)local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(local_3c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_4c,'\x01');
  FUN_004028f0(local_3c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb0c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb0c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_38 = local_38 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_38 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(local_3c,uVar3);
  }
  local_4 = 4;
  FUN_004028f0(local_4c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_Overlay_Digit_3_not_found_in_ove_005adb34;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_4c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_Overlay_Digit_3_not_found_in_ove_005adb34;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_48 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_48 = local_48 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_48 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_48 = local_48 + 1;
    }
    FUN_004029e0(local_4c,uVar3);
  }
  local_4._0_1_ = 5;
  FUN_00487bc0((int)s_OVL_START_DIGIT_3_005ada3c,local_4c,(int)local_3c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(local_4c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb5c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Start_005adb5c;
    pcVar6 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = 6;
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_Overlay_GO_object_not_found_in_o_005adb84;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_Overlay_GO_object_not_found_in_o_005adb84;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_28 = local_28 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_28 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(local_2c,uVar3);
  }
  local_4._0_1_ = 7;
  FUN_00487bc0((int)s_OVL_START_GO_005ada50,local_2c,(int)local_1c);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004028f0(local_2c,'\x01');
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}


