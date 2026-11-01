
/* ==== FUN_00471fa0 @ 00471fa0 ==== 
 * signature: undefined __fastcall FUN_00471fa0(int param_1)
 * body: 00471fa0-0047218f
 */

void __fastcall FUN_00471fa0(int param_1)

{
  void *this;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056b340;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470ea0(param_1);
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_005a8d1c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(local_2c,(undefined4 *)&DAT_005a8d1c,~uVar3 - 1);
  local_4 = 0;
  FUN_00473770((void *)(param_1 + 0x50),local_2c);
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
  this = (void *)(param_1 + 0x30);
  FUN_004734a0(this,param_1 + 0x50);
  FUN_004028f0(local_2c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_RFloat_005a8d24;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_RFloat_005a8d24;
    pcVar7 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  local_4 = 1;
  FUN_00473770((void *)(param_1 + 100),local_2c);
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
  FUN_004734a0(this,param_1 + 100);
  FUN_004028f0(local_1c,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = (char *)&DAT_005a8d2c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    puVar6 = &DAT_005a8d2c;
    puVar8 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar3) = 0;
    local_14 = uVar3;
  }
  local_4 = 2;
  FUN_00473770((void *)(param_1 + 0x78),local_1c);
  local_4 = 0xffffffff;
  FUN_004028f0(local_1c,'\x01');
  FUN_004734a0(this,param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


