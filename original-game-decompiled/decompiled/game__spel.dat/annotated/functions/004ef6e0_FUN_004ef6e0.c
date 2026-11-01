
/* ==== FUN_004ef6e0 @ 004ef6e0 ==== 
 * signature: undefined __fastcall FUN_004ef6e0(void * param_1)
 * body: 004ef6e0-004efbe5
 */

void __fastcall FUN_004ef6e0(void *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  puVar2 = PTR_s_CM_JOY_LEFT_005b88a4;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572a98;
  local_c = ExceptionList;
  if (0.0 <= *(float *)((int)param_1 + 0x148)) {
    ExceptionList = &local_c;
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = puVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar4 - 1);
    local_4 = 2;
    FUN_004f0c60(param_1,(int)local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
    puVar2 = PTR_s_CM_JOY_RIGHT_005b88a8;
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = puVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar4 - 1);
    local_4 = 3;
    FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x148));
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
  }
  else {
    ExceptionList = &local_c;
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = puVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar4 - 1);
    local_4 = 0;
    FUN_004f0c60(param_1,(int)local_1c,-*(float *)((int)param_1 + 0x148));
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
    puVar2 = PTR_s_CM_JOY_RIGHT_005b88a8;
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = puVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar4 - 1);
    local_4 = 1;
    FUN_004f0c60(param_1,(int)local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
  }
  puVar6 = (undefined4 *)PTR_s_CM_JOY_DOWN_005b88b0;
  if (0.0 <= *(float *)((int)param_1 + 0x14c)) {
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = (char *)puVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(local_1c,uVar4);
    }
    local_4 = 6;
    FUN_004f0c60(param_1,(int)local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
    puVar6 = (undefined4 *)PTR_DAT_005b88ac;
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = (char *)puVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      puVar8 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_004029e0(local_1c,uVar4);
    }
    local_4 = 7;
    FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x14c));
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
  }
  else {
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = (char *)puVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,puVar6,~uVar4 - 1);
    local_4 = 4;
    FUN_004f0c60(param_1,(int)local_1c,-*(float *)((int)param_1 + 0x14c));
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
    puVar2 = PTR_DAT_005b88ac;
    FUN_004028f0(local_1c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = puVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)puVar2,~uVar4 - 1);
    local_4 = 5;
    FUN_004f0c60(param_1,(int)local_1c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
  }
  puVar6 = (undefined4 *)PTR_s_CM_JOY_X_AXIS_005b8898;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = (char *)puVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_004029e0(local_1c,uVar4);
  }
  local_4 = 8;
  FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x148));
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  puVar6 = (undefined4 *)PTR_DAT_005b889c;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = (char *)puVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_18 = *puVar6;
      puVar6 = puVar6 + 1;
      local_18 = local_18 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)local_18 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      local_18 = (undefined4 *)((int)local_18 + 1);
    }
    FUN_004029e0(local_1c,uVar4);
  }
  local_4 = 9;
  FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x14c));
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  puVar6 = (undefined4 *)PTR_s_CM_JOY_Z_AXIS_005b88a0;
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar7 = (char *)puVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar8 = local_28;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar4) = 0;
    local_24 = uVar4;
  }
  local_4 = 10;
  FUN_004f0c60(param_1,(int)local_2c,*(undefined4 *)((int)param_1 + 0x150));
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  ExceptionList = local_c;
  return;
}


