
/* ==== FUN_00495d40 @ 00495d40 ==== 
 * signature: undefined __fastcall FUN_00495d40(int param_1)
 * body: 00495d40-0049600f
 */

void __fastcall FUN_00495d40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
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
  pcStack_8 = FUN_0056e2f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_START_DIGIT_1_005ada14;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_OVL_START_DIGIT_1_005ada14;
    pcVar7 = local_28;
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
    local_28[uVar4] = '\0';
    local_24 = uVar4;
  }
  local_4 = 0;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_2c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_START_DIGIT_2_005ada28;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_OVL_START_DIGIT_2_005ada28;
    pcVar7 = local_28;
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
    local_28[uVar4] = '\0';
    local_24 = uVar4;
  }
  local_4 = 1;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_2c);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_START_DIGIT_3_005ada3c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_OVL_START_DIGIT_3_005ada3c;
    pcVar7 = local_28;
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
    local_28[uVar4] = '\0';
    local_24 = uVar4;
  }
  local_4 = 2;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_2c);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
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
  uVar4 = 0xffffffff;
  pcVar6 = s_OVL_START_GO_005ada50;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_OVL_START_GO_005ada50;
    pcVar7 = local_18;
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
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  local_4 = 3;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_1c);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  FUN_00496370();
  puVar3 = (undefined4 *)FUN_0047bc20(*(int *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  *(undefined4 *)(param_1 + 0x2c) = puVar3[1];
  *(undefined4 *)(param_1 + 0x30) = puVar3[2];
  puVar3 = (undefined4 *)FUN_0047bc20(*(int *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x34) = *puVar3;
  *(undefined4 *)(param_1 + 0x38) = puVar3[1];
  *(undefined4 *)(param_1 + 0x3c) = puVar3[2];
  puVar3 = (undefined4 *)FUN_0047bc20(*(int *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x40) = *puVar3;
  *(undefined4 *)(param_1 + 0x44) = puVar3[1];
  *(undefined4 *)(param_1 + 0x48) = puVar3[2];
  puVar3 = (undefined4 *)FUN_0047bc20(*(int *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x4c) = *puVar3;
  *(undefined4 *)(param_1 + 0x50) = puVar3[1];
  uVar2 = puVar3[2];
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  ExceptionList = local_c;
  return;
}


