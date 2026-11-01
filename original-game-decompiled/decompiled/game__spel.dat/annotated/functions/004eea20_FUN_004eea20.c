
/* ==== FUN_004eea20 @ 004eea20 ==== 
 * signature: undefined __fastcall FUN_004eea20(void * param_1)
 * body: 004eea20-004eedd5
 */

void __fastcall FUN_004eea20(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  puVar5 = (undefined4 *)PTR_s_CM_MOUSE_X_POS_005b86ec;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572930;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar6 = (char *)puVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar7 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = 0;
  FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0xfc));
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  puVar5 = (undefined4 *)PTR_s_CM_MOUSE_Y_POS_005b86f0;
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar6 = (char *)puVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar7 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = 1;
  FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x100));
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  puVar5 = (undefined4 *)PTR_s_CM_MOUSE_Z_POS_005b86f4;
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar6 = (char *)puVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar7 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = 2;
  FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x104));
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  FUN_004ee700((int)param_1);
  puVar5 = (undefined4 *)PTR_s_CM_MOUSE_X_MOVE_005b86f8;
  if (*(float *)((int)param_1 + 0x108) != 0.0) {
    FUN_004028f0(local_1c,'\0');
    uVar3 = 0xffffffff;
    pcVar6 = (char *)puVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_004029e0(local_1c,uVar3);
    }
    local_4 = 3;
    FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x108));
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
  }
  puVar5 = (undefined4 *)PTR_s_CM_MOUSE_Y_MOVE_005b86fc;
  if (*(float *)((int)param_1 + 0x10c) != 0.0) {
    FUN_004028f0(local_1c,'\0');
    uVar3 = 0xffffffff;
    pcVar6 = (char *)puVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_18 = *puVar5;
        puVar5 = puVar5 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_004029e0(local_1c,uVar3);
    }
    local_4 = 4;
    FUN_004f0c60(param_1,(int)local_1c,*(undefined4 *)((int)param_1 + 0x10c));
    local_4 = 0xffffffff;
    FUN_004028f0(local_1c,'\x01');
  }
  puVar5 = (undefined4 *)PTR_s_CM_MOUSE_Z_MOVE_005b8700;
  if (*(float *)((int)param_1 + 0x110) != 0.0) {
    FUN_004028f0(local_2c,'\0');
    uVar3 = 0xffffffff;
    pcVar6 = (char *)puVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      puVar7 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar3) = 0;
      local_24 = uVar3;
    }
    local_4 = 5;
    FUN_004f0c60(param_1,(int)local_2c,*(undefined4 *)((int)param_1 + 0x110));
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339((char *)((int)local_28 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}


