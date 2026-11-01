
/* ==== FUN_004968a0 @ 004968a0 ==== 
 * signature: undefined __fastcall FUN_004968a0(int param_1)
 * body: 004968a0-00496b00
 */

void __fastcall FUN_004968a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e382;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_CUR_LAP_005adbac;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_CUR_LAP_005adbac;
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
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  local_4 = 0;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_RACE_TIME_VALUE_005adbe4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_RACE_TIME_VALUE_005adbe4;
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
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  local_4 = 1;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_CUR_POS_005adbbc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_CUR_POS_005adbbc;
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
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  local_4 = 2;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_2c);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  local_4 = 0xffffffff;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STRING_COUNTDOWN_TIMER_005adbcc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STRING_COUNTDOWN_TIMER_005adbcc;
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
    local_18[uVar3] = '\0';
    local_14 = uVar3;
  }
  local_4 = 3;
  uVar2 = FUN_00485d50(*(void **)(param_1 + 4),(int)local_1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  FUN_00496ea0(param_1);
  FUN_00496b10(param_1);
  ExceptionList = local_c;
  return;
}


