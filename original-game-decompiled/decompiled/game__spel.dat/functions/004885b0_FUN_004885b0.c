
/* ==== FUN_004885b0 @ 004885b0 ==== 
 * signature: undefined __fastcall FUN_004885b0(int param_1)
 * body: 004885b0-00488730
 */

void __fastcall FUN_004885b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_48 [4];
  char *local_44;
  uint local_40;
  undefined1 local_38 [4];
  char *local_34;
  uint local_30;
  void *local_24;
  int local_20;
  int *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_0056d527;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = param_1;
  local_24 = operator_new(0x20);
  local_8._0_1_ = 1;
  if (local_24 == (void *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = FUN_00497480(local_24,param_1);
  }
  local_8._0_1_ = 0;
  local_48[0] = local_15;
  FUN_004028f0(local_48,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab5c8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_48,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab5c8;
    pcVar6 = local_44;
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
    local_44[uVar3] = '\0';
    local_40 = uVar3;
  }
  local_38[0] = local_15;
  local_8._0_1_ = 2;
  FUN_004028f0(local_38,'\0');
  uVar3 = 0xffffffff;
  pcVar5 = s_Unable_to_create_overlay_element_005ab5ec;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  uVar2 = FUN_00402a00(local_38,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_Unable_to_create_overlay_element_005ab5ec;
    pcVar6 = local_34;
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
    local_34[uVar3] = '\0';
    local_30 = uVar3;
  }
  local_8._0_1_ = 3;
  FUN_00487bc0((int)local_1c,local_38,(int)local_48);
  local_8._0_1_ = 2;
  FUN_004028f0(local_38,'\x01');
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_44 != (char *)0x0) {
    cVar1 = local_44[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_44 + -1);
    }
    else {
      local_44[-1] = cVar1 + -1;
    }
  }
  (**(code **)(*local_1c + 4))();
  FUN_004a5620(*(void **)(local_20 + 0x90),*(undefined4 **)((int)*(void **)(local_20 + 0x90) + 8),1,
               &local_1c);
  ExceptionList = local_10;
  return;
}


