
/* ==== FUN_00456050 @ 00456050 ==== 
 * signature: undefined __stdcall FUN_00456050(void)
 * body: 00456050-00456377
 */

void FUN_00456050(void)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 local_5c [4];
  char *local_58;
  uint local_54;
  undefined1 local_4c [4];
  char *local_48;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a720;
  local_c = ExceptionList;
  switch(DAT_006fbaa4) {
  case 0:
    ExceptionList = &local_c;
    FUN_004028f0(local_4c,'\0');
    uVar5 = 0xffffffff;
    pcVar6 = s__game_position_01_005a38a0;
    break;
  case 1:
    ExceptionList = &local_c;
    FUN_004028f0(local_3c,'\0');
    uVar5 = 0xffffffff;
    pcVar6 = s__game_position_02_005a38b4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar2 = FUN_00402a00(local_3c,uVar5,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar6 = s__game_position_02_005a38b4;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)local_38 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_38 = local_38 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_38 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_38 = local_38 + 1;
      }
      FUN_004029e0(local_3c,uVar5);
    }
    puVar8 = local_3c;
    iVar9 = -1;
    local_4 = 1;
    pvVar3 = (void *)FUN_004891a0();
    FUN_0048a910(pvVar3,(int)puVar8,iVar9);
    local_4 = 0xffffffff;
    FUN_004028f0(local_3c,'\x01');
    ExceptionList = local_c;
    return;
  case 2:
    ExceptionList = &local_c;
    FUN_004028f0(local_2c,'\0');
    uVar5 = 0xffffffff;
    pcVar6 = s__game_position_03_005a38c8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar2 = FUN_00402a00(local_2c,uVar5,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar6 = s__game_position_03_005a38c8;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_28 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_28 = local_28 + 1;
      }
      FUN_004029e0(local_2c,uVar5);
    }
    puVar8 = local_2c;
    iVar9 = -1;
    local_4 = 2;
    pvVar3 = (void *)FUN_004891a0();
    FUN_0048a910(pvVar3,(int)puVar8,iVar9);
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
    ExceptionList = local_c;
    return;
  case 3:
    ExceptionList = &local_c;
    FUN_004028f0(local_5c,'\0');
    uVar5 = 0xffffffff;
    pcVar6 = s__game_position_04_005a38dc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar2 = FUN_00402a00(local_5c,uVar5,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar6 = s__game_position_04_005a38dc;
      pcVar7 = local_58;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_58[uVar5] = '\0';
      local_54 = uVar5;
    }
    puVar8 = local_5c;
    iVar9 = -1;
    local_4 = 3;
    pvVar3 = (void *)FUN_004891a0();
    FUN_0048a910(pvVar3,(int)puVar8,iVar9);
    local_4 = 0xffffffff;
    FUN_004028f0(local_5c,'\x01');
    ExceptionList = local_c;
    return;
  case 4:
    uVar5 = 0xffffffff;
    pcVar6 = s__game_position_05_005a38f0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &local_c;
    FUN_00402940(local_1c,(undefined4 *)s__game_position_05_005a38f0,~uVar5 - 1);
    puVar8 = local_1c;
    iVar9 = -1;
    local_4 = 4;
    pvVar3 = (void *)FUN_004891a0();
    FUN_0048a910(pvVar3,(int)puVar8,iVar9);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339((char *)(local_18 + -1));
    }
  default:
    ExceptionList = local_c;
    return;
  }
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  uVar2 = FUN_00402a00(local_4c,uVar5,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s__game_position_01_005a38a0;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_48 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_48 = local_48 + 4;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_48 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_48 = local_48 + 1;
    }
    FUN_004029e0(local_4c,uVar5);
  }
  puVar8 = local_4c;
  iVar9 = -1;
  local_4 = 0;
  pvVar3 = (void *)FUN_004891a0();
  FUN_0048a910(pvVar3,(int)puVar8,iVar9);
  local_4 = 0xffffffff;
  FUN_004028f0(local_4c,'\x01');
  ExceptionList = local_c;
  return;
}


