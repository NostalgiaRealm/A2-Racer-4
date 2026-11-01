
/* ==== FUN_004d6d30 @ 004d6d30 ==== 
 * signature: undefined __cdecl FUN_004d6d30(undefined4 param_1, undefined1 * param_2, char * param_3, char * param_4)
 * body: 004d6d30-004d6f1d
 */

void __cdecl FUN_004d6d30(undefined4 param_1,undefined1 *param_2,char *param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_60 [4];
  char *local_5c;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  char *local_4c;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005701c8;
  local_c = ExceptionList;
  local_60[0] = param_4._0_1_;
  ExceptionList = &local_c;
  FUN_004028f0(local_60,'\0');
  pcVar5 = param_4;
  uVar3 = 0xffffffff;
  pcVar6 = param_4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_60,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = local_5c;
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
    local_5c[uVar3] = '\0';
    local_58 = uVar3;
  }
  local_50[0] = param_4._0_1_;
  local_4 = 0;
  FUN_004028f0(local_50,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_50,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_4c = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      local_4c = local_4c + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_4c = *param_3;
      param_3 = param_3 + 1;
      local_4c = local_4c + 1;
    }
    FUN_004029e0(local_50,uVar3);
  }
  local_4._0_1_ = 1;
  local_40[0] = *param_2;
  FUN_004028f0(local_40,'\0');
  FUN_004093c0(local_40,param_2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_0041c870(local_30,local_50);
  local_4._0_1_ = 3;
  FUN_0041c870(local_20,local_60);
  local_10 = param_1;
  local_4._0_1_ = 4;
  FUN_004d7090(&DAT_0074b8b0,&param_4,DAT_0074b8b4,local_40);
  local_4._0_1_ = 6;
  FUN_004028f0(local_20,'\x01');
  local_4._0_1_ = 5;
  FUN_004028f0(local_30,'\x01');
  local_4._0_1_ = 1;
  FUN_004028f0(local_40,'\x01');
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_50,'\x01');
  local_4 = 0xffffffff;
  if (local_5c != (char *)0x0) {
    cVar1 = local_5c[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_5c + -1);
    }
    else {
      local_5c[-1] = cVar1 + -1;
    }
  }
  local_5c = (char *)0x0;
  local_58 = 0;
  local_54 = 0;
  FUN_004d6730();
  ExceptionList = local_c;
  return;
}


