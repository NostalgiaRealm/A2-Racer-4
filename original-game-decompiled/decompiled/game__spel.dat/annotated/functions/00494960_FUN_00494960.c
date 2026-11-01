
/* ==== FUN_00494960 @ 00494960 ==== 
 * signature: undefined __fastcall FUN_00494960(int param_1)
 * body: 00494960-00494e79
 */

void __fastcall FUN_00494960(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e1d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_OVL_REQUESTOR_BODY_005ad508;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_OVL_REQUESTOR_BODY_005ad508,~uVar3 - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_2c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_OVL_TURNAROUND_FRAME_005ad530;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_OVL_TURNAROUND_FRAME_005ad530,~uVar3 - 1);
  local_4 = 1;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_2c);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_PAUZE_HEADER_005ad558;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_STRING_PAUZE_HEADER_005ad558,~uVar3 - 1);
  local_4 = 2;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_PAUZE_TEXT_005ad56c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_STRING_PAUZE_TEXT_005ad56c,~uVar3 - 1);
  local_4 = 3;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_QUIT_HEADER_005ad580;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_STRING_QUIT_HEADER_005ad580,~uVar3 - 1);
  local_4 = 4;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_QUIT_TEXT_005ad594;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_STRING_QUIT_TEXT_005ad594,~uVar3 - 1);
  local_4 = 5;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_GAME_TEXT_005ad5a8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_2c,(undefined4 *)s_STRING_GAME_TEXT_005ad5a8,~uVar3 - 1);
  local_4 = 6;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_RACE_OVER_005ad5bc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_RACE_OVER_005ad5bc;
    pcVar6 = local_28;
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
    FUN_004029e0(local_2c,uVar3);
  }
  local_4 = 7;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_TOTAL_LOSS_005ad5d0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_TOTAL_LOSS_005ad5d0;
    pcVar6 = local_28;
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
    FUN_004029e0(local_2c,uVar3);
  }
  local_4 = 8;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_ARRESTED_005ad5e4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_ARRESTED_005ad5e4;
    pcVar6 = local_28;
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
    FUN_004029e0(local_2c,uVar3);
  }
  local_4 = 9;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_TIME_UP_005ad5f4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_TIME_UP_005ad5f4;
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
  local_4 = 10;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_FINISH_TEXT_005ad604;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_FINISH_TEXT_005ad604;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_18 = local_18 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_18 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_18 = local_18 + 1;
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = 0xb;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_1c);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  FUN_00495330(param_1);
  ExceptionList = local_c;
  return;
}


