
/* ==== FUN_0040c1f0 @ 0040c1f0 ==== 
 * signature: undefined __stdcall FUN_0040c1f0(void)
 * body: 0040c1f0-0040d39c
 */

void FUN_0040c1f0(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_NO_STATE_005915c8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_NO_STATE_005915c8,~uVar3 - 1);
  local_4 = 0;
  FUN_0041e270(&DAT_005cd9d8,0xffffffff,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_RACING_005915d4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_RACING_005915d4,~uVar3 - 1);
  local_4 = 1;
  FUN_0041e270(&DAT_005cd9f0,0,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_INIT_BASHING_005915e4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_INIT_BASHING_005915e4,~uVar3 - 1);
  local_4 = 2;
  FUN_0041e270(&DAT_005cda08,1,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_BASHING_005915f8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_BASHING_005915f8,~uVar3 - 1);
  local_4 = 3;
  FUN_0041e270(&DAT_005cda20,2,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_CHASING_00591608;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_CHASING_00591608,~uVar3 - 1);
  local_4 = 4;
  FUN_0041e270(&DAT_005cda38,3,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_STOP_RACER_00591618;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_STOP_RACER_00591618,~uVar3 - 1);
  local_4 = 5;
  FUN_0041e270(&DAT_005cda50,4,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_INIT_ARREST_0059162c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_INIT_ARREST_0059162c,~uVar3 - 1);
  local_4 = 6;
  FUN_0041e270(&DAT_005cda68,5,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_ARREST_00591640;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_ARREST_00591640,~uVar3 - 1);
  local_4 = 7;
  FUN_0041e270(&DAT_005cda80,6,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_UNDER_ARREST_00591650;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_UNDER_ARREST_00591650,~uVar3 - 1);
  local_4 = 8;
  FUN_0041e270(&DAT_005cda98,7,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_KILL_COP_00591664;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_KILL_COP_00591664,~uVar3 - 1);
  local_4 = 9;
  FUN_0041e270(&DAT_005cdab0,8,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_FINISHED_00591674;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_FINISHED_00591674,~uVar3 - 1);
  local_4 = 10;
  FUN_0041e270(&DAT_005cdac8,9,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_BREAK_FREE_00591684;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_BREAK_FREE_00591684,~uVar3 - 1);
  local_4 = 0xb;
  FUN_0041e270(&DAT_005cdae0,10,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_FAR_AHEAD_00591698;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_FAR_AHEAD_00591698,~uVar3 - 1);
  local_4 = 0xc;
  FUN_0041e270(&DAT_005cdaf8,0xb,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_FAR_BEHIND_005916a8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_FAR_BEHIND_005916a8,~uVar3 - 1);
  local_4 = 0xd;
  FUN_0041e270(&DAT_005cdb10,0xc,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_FAR_BEHIND_CHEAT_005916bc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_FAR_BEHIND_CHEAT_005916bc,~uVar3 - 1);
  local_4 = 0xe;
  FUN_0041e270(&DAT_005cdb28,0xd,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_WAIT_FOR_RACER_005916d4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_WAIT_FOR_RACER_005916d4,~uVar3 - 1);
  local_4 = 0xf;
  FUN_0041e270(&DAT_005cdb40,0xe,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_GIVE_UP_005916ec;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_GIVE_UP_005916ec,~uVar3 - 1);
  local_4 = 0x10;
  FUN_0041e270(&DAT_005cdb58,0xf,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_FOLLOW_GHOST_005916fc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_FOLLOW_GHOST_005916fc,~uVar3 - 1);
  local_4 = 0x11;
  FUN_0041e270(&DAT_005cdb70,0x10,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_MAKE_SPACE_00591710;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_MAKE_SPACE_00591710,~uVar3 - 1);
  local_4 = 0x12;
  FUN_0041e270(&DAT_005cdb88,0x11,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_HANDBRAKE_TURN_00591724;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_HANDBRAKE_TURN_00591724,~uVar3 - 1);
  local_4 = 0x13;
  FUN_0041e270(&DAT_005cdba0,0x12,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_FOLLOW_PATH_0059173c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_FOLLOW_PATH_0059173c,~uVar3 - 1);
  local_4 = 0x14;
  FUN_0041e270(&DAT_005cdbb8,0x13,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_IRRITATING_00591750;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_IRRITATING_00591750,~uVar3 - 1);
  local_4 = 0x15;
  FUN_0041e270(&DAT_005cdbd0,0x14,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_AGGRESSIVE_00591764;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_AGGRESSIVE_00591764,~uVar3 - 1);
  local_4 = 0x16;
  FUN_0041e270(&DAT_005cdbe8,0x15,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_PUSHING_LEFT_00591778;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_PUSHING_LEFT_00591778,~uVar3 - 1);
  local_4 = 0x17;
  FUN_0041e270(&DAT_005cdc00,0x16,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_PUSHING_RIGHT_0059178c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_PUSHING_RIGHT_0059178c,~uVar3 - 1);
  local_4 = 0x18;
  FUN_0041e270(&DAT_005cdc18,0x17,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_FOLLOW_TACTIC_005917a0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_FOLLOW_TACTIC_005917a0,~uVar3 - 1);
  local_4 = 0x19;
  FUN_0041e270(&DAT_005cdc30,0x18,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_ACT_LIKE_TRAFFIC_005917b4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(&local_2c,(undefined4 *)s_STATE_ACT_LIKE_TRAFFIC_005917b4,~uVar3 - 1);
  local_4 = 0x1a;
  FUN_0041e270(&DAT_005cdc48,0x19,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_ROADBLOCK_005917cc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_ROADBLOCK_005917cc;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x1b;
  FUN_0041e270(&DAT_005cdc60,0x1a,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_TOTAL_LOSS_005917dc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_TOTAL_LOSS_005917dc;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x1c;
  FUN_0041e270(&DAT_005cdc78,0x1b,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_PENALTY_BONUS_005917f0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_PENALTY_BONUS_005917f0;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x1d;
  FUN_0041e270(&DAT_005cdc90,0x1c,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_PATROL_00591804;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_PATROL_00591804;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x1e;
  FUN_0041e270(&DAT_005cdca8,0x1d,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_CHASE_00591814;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_CHASE_00591814;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x1f;
  FUN_0041e270(&DAT_005cdcc0,0x1e,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_ATTACK_00591820;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_ATTACK_00591820;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x20;
  FUN_0041e270(&DAT_005cdcd8,0x1f,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_PERFORM_ATTACK_00591830;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_PERFORM_ATTACK_00591830;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x21;
  FUN_0041e270(&DAT_005cdcf0,0x20,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_BASH_INACTIVE_TARGET_00591848;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_BASH_INACTIVE_TARGET_00591848;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x22;
  FUN_0041e270(&DAT_005cdd08,0x21,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_SUPERCOP_BREAK_FREE_00591864;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_SUPERCOP_BREAK_FREE_00591864;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x23;
  FUN_0041e270(&DAT_005cdd20,0x22,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_SUPERCOP_TOTAL_LOSS_00591880;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_SUPERCOP_TOTAL_LOSS_00591880;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x24;
  FUN_0041e270(&DAT_005cdd38,0x23,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_SUPERCOP_ROLLED_OVER_0059189c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_SUPERCOP_ROLLED_OVER_0059189c;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x25;
  FUN_0041e270(&DAT_005cdd50,0x24,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_SUPERCOP_INACTIVE_005918b8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_SUPERCOP_INACTIVE_005918b8;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x26;
  FUN_0041e270(&DAT_005cdd68,0x25,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_BEHAVIOR_01_005918d0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_BEHAVIOR_01_005918d0;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x27;
  FUN_0041e270(&DAT_005cdd80,0x26,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_BEHAVIOR_02_005918e4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_BEHAVIOR_02_005918e4;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x28;
  FUN_0041e270(&DAT_005cdd98,0x27,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  FUN_004028f0(&local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_STATE_BEHAVIOR_03_005918f8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_STATE_BEHAVIOR_03_005918f8;
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
    FUN_004029e0(&local_2c,uVar3);
  }
  local_4 = 0x29;
  FUN_0041e270(&DAT_005cddb0,0x28,&local_2c,0);
  local_4 = 0xffffffff;
  FUN_004028f0(&local_2c,'\x01');
  uVar3 = 0xffffffff;
  local_18 = 0;
  pcVar5 = s_STATE_BEHAVIOR_04_0059190c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(&local_1c,(undefined4 *)s_STATE_BEHAVIOR_04_0059190c,~uVar3 - 1);
  local_4 = 0x2a;
  FUN_0041e270(&DAT_005cddc8,0x29,&local_1c,0);
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


