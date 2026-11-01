
/* ==== FUN_004efbf0 @ 004efbf0 ==== 
 * signature: undefined __fastcall FUN_004efbf0(void * param_1)
 * body: 004efbf0-004f001b
 */

void __fastcall FUN_004efbf0(void *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  float local_34;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  puVar2 = PTR_s_CM_JOY_DOWN_005b88b0;
  puVar6 = (undefined4 *)PTR_DAT_005b88ac;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572ae8;
  local_c = ExceptionList;
  if (-0.5 <= *(float *)((int)param_1 + 0x14c)) {
    if (*(float *)((int)param_1 + 0x14c) <= 0.5) {
      ExceptionList = &local_c;
      FUN_004028f0(local_2c,'\0');
      uVar4 = 0xffffffff;
      pcVar8 = (char *)puVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
      if ((char)uVar3 != '\0') {
        puVar7 = local_28;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_004029e0(local_2c,uVar4);
      }
      local_4 = 4;
      fVar9 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\0');
      local_34 = (float)fVar9;
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
      puVar6 = (undefined4 *)PTR_s_CM_JOY_DOWN_005b88b0;
      FUN_004028f0(local_2c,'\0');
      uVar4 = 0xffffffff;
      pcVar8 = (char *)puVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
      if ((char)uVar3 != '\0') {
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *local_28 = *puVar6;
          puVar6 = puVar6 + 1;
          local_28 = local_28 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(local_2c,uVar4);
      }
      local_4 = 5;
      fVar9 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\0');
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
      if (local_34 <= 0.0) {
        if ((float)fVar9 <= 0.0) {
          local_34 = 0.0;
        }
        else {
          local_34 = -(float)fVar9;
        }
      }
    }
    else {
      ExceptionList = &local_c;
      FUN_004028f0(local_2c,'\0');
      uVar4 = 0xffffffff;
      pcVar8 = (char *)puVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
      if ((char)uVar3 != '\0') {
        puVar7 = local_28;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_004029e0(local_2c,uVar4);
      }
      local_4 = 2;
      fVar9 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\x01');
      local_34 = (float)fVar9;
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
      puVar6 = (undefined4 *)PTR_s_CM_JOY_DOWN_005b88b0;
      FUN_004028f0(local_2c,'\0');
      uVar4 = 0xffffffff;
      pcVar8 = (char *)puVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
      if ((char)uVar3 != '\0') {
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *local_28 = *puVar6;
          puVar6 = puVar6 + 1;
          local_28 = local_28 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)local_28 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_28 = (undefined4 *)((int)local_28 + 1);
        }
        FUN_004029e0(local_2c,uVar4);
      }
      local_4 = 3;
      FUN_004f0c60(param_1,(int)local_2c,0);
      local_4 = 0xffffffff;
      FUN_004028f0(local_2c,'\x01');
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_004028f0(local_2c,'\0');
    uVar4 = 0xffffffff;
    pcVar8 = puVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_2c,(undefined4 *)puVar2,~uVar4 - 1);
    local_4 = 0;
    fVar9 = (float10)FUN_004f0df0(param_1,(int)local_2c,'\x01');
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
    puVar6 = (undefined4 *)PTR_DAT_005b88ac;
    FUN_004028f0(local_2c,'\0');
    uVar4 = 0xffffffff;
    pcVar8 = (char *)puVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar3 = FUN_00402a00(local_2c,uVar4,'\x01');
    if ((char)uVar3 != '\0') {
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_28 = *puVar6;
        puVar6 = puVar6 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_004029e0(local_2c,uVar4);
    }
    local_4 = 1;
    FUN_004f0c60(param_1,(int)local_2c,0);
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
    local_34 = -(float)fVar9;
  }
  puVar6 = (undefined4 *)PTR_DAT_005b889c;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar8 = (char *)puVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    puVar7 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_004029e0(local_1c,uVar4);
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


