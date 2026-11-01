
/* ==== FUN_004938b0 @ 004938b0 ==== 
 * signature: undefined __fastcall FUN_004938b0(int param_1)
 * body: 004938b0-00493a34
 */

void __fastcall FUN_004938b0(int param_1)

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
  void *local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e0de;
  pvStack_c = ExceptionList;
  uVar4 = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  pcVar5 = s_OVL_PLAYER_OUTLINE_005ace7c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_00402940(local_2c,(undefined4 *)s_OVL_PLAYER_OUTLINE_005ace7c,~uVar4 - 1);
  local_4 = 0;
  uVar2 = FUN_00484f60(*(void **)(param_1 + 4),local_2c);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  local_4 = 0xffffffff;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  uVar4 = 0xffffffff;
  pcVar5 = s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad3e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  FUN_00402940(local_3c,(undefined4 *)s_C__Work_A2IV_Game_prog_Ovl_Portr_005ad3e0,~uVar4 - 1);
  local_4 = 1;
  puVar3 = FUN_0049df90(local_1c,(byte *)s_Element__s_not_found_005ad40c);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00487bc0(*(int *)(param_1 + 0x2c),puVar3,(int)local_3c);
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
  local_10 = (void *)0x0;
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
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(&DAT_00577038);
  ExceptionList = local_10;
  return;
}


