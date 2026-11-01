
/* ==== FUN_004f0020 @ 004f0020 ==== 
 * signature: undefined __fastcall FUN_004f0020(void * param_1)
 * body: 004f0020-004f044b
 */

void __fastcall FUN_004f0020(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  float10 fVar8;
  float local_34;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  puVar5 = (undefined4 *)PTR_s_CM_JOY_LEFT_005b88a4;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572b38;
  local_c = ExceptionList;
  if (-0.5 <= *(float *)((int)param_1 + 0x148)) {
    if (*(float *)((int)param_1 + 0x148) <= 0.5) {
      ExceptionList = &local_c;
      FUN_004028f0(local_2c,'\0');
      uVar3 = 0xffffffff;
      pcVar7 = (char *)puVar5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
      if ((char)uVar2 != '\0') {
        puVar6 = local_28;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        FUN_004029e0(local_2c,uVar3);
      }
      local_4 = 4;
      fVar8 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\0');
      local_34 = (float)fVar8;
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
      puVar5 = (undefined4 *)PTR_s_CM_JOY_RIGHT_005b88a8;
      FUN_004028f0(local_2c,'\0');
      uVar3 = 0xffffffff;
      pcVar7 = (char *)puVar5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
      if ((char)uVar2 != '\0') {
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *local_28 = *puVar5;
          puVar5 = puVar5 + 1;
          local_28 = local_28 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(local_2c,uVar3);
      }
      local_4 = 5;
      fVar8 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\0');
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
      if (local_34 <= 0.0) {
        if ((float)fVar8 <= 0.0) {
          local_34 = 0.0;
        }
        else {
          local_34 = -(float)fVar8;
        }
      }
    }
    else {
      ExceptionList = &local_c;
      FUN_004028f0(local_2c,'\0');
      uVar3 = 0xffffffff;
      pcVar7 = (char *)puVar5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
      if ((char)uVar2 != '\0') {
        puVar6 = local_28;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        FUN_004029e0(local_2c,uVar3);
      }
      local_4 = 2;
      FUN_004f0c60(param_1,(int)local_2c,0);
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
      puVar5 = (undefined4 *)PTR_s_CM_JOY_RIGHT_005b88a8;
      FUN_004028f0(local_2c,'\0');
      uVar3 = 0xffffffff;
      pcVar7 = (char *)puVar5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
      if ((char)uVar2 != '\0') {
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *local_28 = *puVar5;
          puVar5 = puVar5 + 1;
          local_28 = local_28 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(local_2c,uVar3);
      }
      local_4 = 3;
      fVar8 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\x01');
      local_34 = (float)fVar8;
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_004028f0(local_2c,'\0');
    uVar3 = 0xffffffff;
    pcVar7 = (char *)puVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_2c,puVar5,~uVar3 - 1);
    local_4 = 0;
    fVar8 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
    puVar5 = (undefined4 *)PTR_s_CM_JOY_RIGHT_005b88a8;
    local_34 = -(float)fVar8;
    FUN_004028f0(local_2c,'\0');
    uVar3 = 0xffffffff;
    pcVar7 = (char *)puVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_28 = *puVar5;
        puVar5 = puVar5 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_004029e0(local_2c,uVar3);
    }
    local_4 = 1;
    FUN_004f0c60(param_1,(int)local_2c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
  }
  puVar5 = (undefined4 *)PTR_s_CM_JOY_X_AXIS_005b8898;
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar7 = (char *)puVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar6 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_004029e0(local_1c,uVar3);
  }
  local_4 = 6;
  FUN_004f0c60(param_1,(int)local_1c,local_34);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}


