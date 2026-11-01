
/* ==== FUN_004888f0 @ 004888f0 ==== 
 * signature: undefined __fastcall FUN_004888f0(int param_1)
 * body: 004888f0-00488a64
 */

void __fastcall FUN_004888f0(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int *local_34;
  void *local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056d571;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_30 = operator_new(0x28);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = FUN_004967c0(local_30,param_1);
  }
  uVar2 = 0xffffffff;
  local_4 = 0xffffffff;
  pcVar3 = s_C__Work_A2IV_Game_prog_Overlay_c_005ab694;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_00402940(local_1c,(undefined4 *)s_C__Work_A2IV_Game_prog_Overlay_c_005ab694,~uVar2 - 1);
  uVar2 = 0xffffffff;
  local_4 = 1;
  pcVar3 = s_Unable_to_create_overlay_element_005ab6b8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(local_2c,(undefined4 *)s_Unable_to_create_overlay_element_005ab6b8,~uVar2 - 1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0((int)local_34,local_2c,(int)local_1c);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (**(code **)(*local_34 + 4))();
  FUN_004a5620(*(void **)(param_1 + 0x90),*(undefined4 **)((int)*(void **)(param_1 + 0x90) + 8),1,
               &local_34);
  ExceptionList = pvStack_c;
  return;
}


