
/* ==== FUN_00497560 @ 00497560 ==== 
 * signature: undefined __fastcall FUN_00497560(int param_1)
 * body: 00497560-004976c4
 */

void __fastcall FUN_00497560(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e44a;
  local_c = ExceptionList;
  uVar4 = 0xffffffff;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  pcVar5 = s_OVL_PROGRESS_BAR_005add70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00402940(local_3c,(undefined4 *)s_OVL_PROGRESS_BAR_005add70,~uVar4 - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_3c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  local_4 = 0xffffffff;
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  uVar4 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_WaitS_005add94;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402940(local_2c,(undefined4 *)s_C__Work_A2IV_Game_prog_Ovl_WaitS_005add94,~uVar4 - 1);
  local_4 = 1;
  puVar3 = FUN_0049df90(local_1c,(byte *)s_Element__s_not_found_005addc0);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(*(int *)(param_1 + 0x18),puVar3,(int)local_2c);
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
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  ExceptionList = local_c;
  return;
}


