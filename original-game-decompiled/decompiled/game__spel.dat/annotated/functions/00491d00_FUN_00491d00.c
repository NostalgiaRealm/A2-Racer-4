
/* ==== FUN_00491d00 @ 00491d00 ==== 
 * signature: undefined __fastcall FUN_00491d00(int param_1)
 * body: 00491d00-00492109
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00491d00(int param_1)

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
  undefined4 local_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e031;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_SPEED_DAMAGE_005acccc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_OVL_SPEED_DAMAGE_005acccc,~uVar4 - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_3c);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_SPEED_TURBO_005acce0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_3c,(undefined4 *)s_OVL_SPEED_TURBO_005acce0,~uVar4 - 1);
  local_4 = 1;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_3c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_SPEED_INDICATOR_005accf0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_OVL_SPEED_INDICATOR_005accf0;
    pcVar7 = local_38;
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
    FUN_004029e0(local_3c,uVar4);
  }
  local_4 = 2;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_3c);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acda4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acda4;
    pcVar7 = local_38;
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
    FUN_004029e0(local_3c,uVar4);
  }
  local_4 = 3;
  puVar3 = FUN_0049df90(local_1c,(byte *)s_Element__s_not_found_005acdd0);
  local_4._0_1_ = 4;
  FUN_00487bc0(*(int *)(param_1 + 0x34),puVar3,(int)local_3c);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acde8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acde8;
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
  local_4 = 5;
  puVar3 = FUN_0049df90(local_1c,(byte *)s_Element__s_not_found_005ace14);
  local_4._0_1_ = 6;
  FUN_00487bc0(*(int *)(param_1 + 0x38),puVar3,(int)local_3c);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  FUN_004028f0(local_4c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005ace2c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_4c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005ace2c;
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
  local_4 = 7;
  puVar3 = FUN_0049df90(local_2c,(byte *)s_Element__s_not_found_005ace58);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00487bc0(*(int *)(param_1 + 0x3c),puVar3,(int)local_4c);
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
  local_4 = 0xffffffff;
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_48 + -1);
    }
    else {
      local_48[-1] = cVar1 + -1;
    }
  }
  local_48 = (char *)0x0;
  local_44 = 0;
  local_40 = 0;
  FUN_00491b10(param_1);
  *(float *)(param_1 + 0x48) = _DAT_005b23b8 * 0.0027777778 * 160.0;
  *(float *)(param_1 + 0x4c) = _DAT_005b23b8 * 0.5;
  *(float *)(param_1 + 0x50) = _DAT_005b23b8 * 0.5;
  FUN_00491510((void *)(param_1 + 0x18),*(void **)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


