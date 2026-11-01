
/* ==== FUN_00496ea0 @ 00496ea0 ==== 
 * signature: undefined __fastcall FUN_00496ea0(int param_1)
 * body: 00496ea0-00497221
 */

void __fastcall FUN_00496ea0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e40d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc1c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc1c,~uVar4 - 1);
  local_4 = 0;
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_Current_Lap_string_not_found_in_o_005adc48;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_Current_Lap_string_not_found_in_o_005adc48,~uVar4 - 1);
  local_4._0_1_ = 1;
  FUN_00487bc0(*(int *)(param_1 + 0x18),local_2c,(int)local_3c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adc70;
    pcVar7 = local_28;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_004029e0(local_2c,uVar4);
  }
  local_4 = 2;
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_RaceTimeValue_string_not_found_i_005adc9c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_RaceTimeValue_string_not_found_i_005adc9c;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_38 = local_38 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_38 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(local_3c,uVar4);
  }
  local_4._0_1_ = 3;
  FUN_00487bc0(*(int *)(param_1 + 0x20),local_3c,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(local_3c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adcc8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005adcc8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_28 = local_28 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_28 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(local_2c,uVar4);
  }
  local_4 = 4;
  puVar3 = FUN_0049df90(local_3c,(byte *)s_String__s_not_found_in_overlay_005adcf4);
  local_4._0_1_ = 5;
  FUN_00487bc0(*(int *)(param_1 + 0x24),puVar3,(int)local_2c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(local_3c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_4c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005add14;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_4c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Stati_005add14;
    pcVar7 = local_48;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_48[uVar4] = '\0';
    local_44 = uVar4;
  }
  local_4 = 6;
  puVar3 = FUN_0049df90(local_1c,(byte *)s_String__s_not_found_in_overlay_005add40);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_00487bc0(*(int *)(param_1 + 0x1c),puVar3,(int)local_4c);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_48[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_48 + -1);
  }
  ExceptionList = local_c;
  return;
}


