
/* ==== FUN_00409d20 @ 00409d20 ==== 
 * signature: undefined __stdcall FUN_00409d20(void)
 * body: 00409d20-0040a156
 */

void FUN_00409d20(void)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_28 [4];
  char *local_24;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_005696ea;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_ACTION_AI_DEBUG_00590ba4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_28,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_ACTION_AI_DEBUG_00590ba4;
    pcVar8 = local_24;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_28,uVar5);
  }
  local_8._0_1_ = 1;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eaf50(pvVar3,(float)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  if ((char)iVar4 != '\0') {
    FUN_0040a4e0(DAT_006fb97c == '\0');
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_ACTION_BBOX_TOGGLE_00590bb4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_28,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_ACTION_BBOX_TOGGLE_00590bb4;
    pcVar8 = local_24;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_28,uVar5);
  }
  local_8._0_1_ = 2;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eaf50(pvVar3,(float)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  if ((char)iVar4 != '\0') {
    DAT_005cd9c8 = (uint)(DAT_005cd9c8 == 0);
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_ACTION_WP_TOGGLE_00590bc8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_28,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_ACTION_WP_TOGGLE_00590bc8;
    pcVar8 = local_24;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_28,uVar5);
  }
  local_8._0_1_ = 3;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eaf50(pvVar3,(float)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  if (((char)iVar4 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_006fb97d = DAT_006fb97d == '\0';
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_ACTION_LINE_TOGGLE_00590bdc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_28,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_ACTION_LINE_TOGGLE_00590bdc;
    pcVar8 = local_24;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_28,uVar5);
  }
  local_8._0_1_ = 4;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eaf50(pvVar3,(float)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  if (((char)iVar4 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_00590810 = (uint)(DAT_00590810 == 0);
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_ACTION_FSM_TOGGLE_00590bf0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_28,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_ACTION_FSM_TOGGLE_00590bf0;
    pcVar8 = local_24;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_28,uVar5);
  }
  local_8._0_1_ = 5;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eaf50(pvVar3,(float)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  if ((((char)iVar4 != '\0') && (DAT_006fb97c != '\0')) &&
     (DAT_005cd9cc = DAT_005cd9cc + 1, DAT_005cd9cc == 6)) {
    DAT_005cd9cc = 0;
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_ACTION_POSITIONMARKER_TOGGLE_00590c04;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_28,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_ACTION_POSITIONMARKER_TOGGLE_00590c04;
    pcVar8 = local_24;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_28,uVar5);
  }
  local_8._0_1_ = 6;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eaf50(pvVar3,(float)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  if (((char)iVar4 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_005ccd44 = DAT_005ccd44 == '\0';
  }
  local_28[0] = local_15;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar7 = s_ACTION_POLY_TOGGLE_00590c24;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_28,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar7 = s_ACTION_POLY_TOGGLE_00590c24;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_24 = local_24 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_24 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_24 = local_24 + 1;
    }
    FUN_004029e0(local_28,uVar5);
  }
  local_8._0_1_ = 7;
  pvVar3 = (void *)FUN_004ea0c0();
  iVar4 = FUN_004eaf50(pvVar3,(float)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004028f0(local_28,'\x01');
  if (((char)iVar4 != '\0') && (DAT_006fb97c != '\0')) {
    DAT_00590814 = (uint)(DAT_00590814 == 0);
  }
  ExceptionList = local_10;
  return;
}


