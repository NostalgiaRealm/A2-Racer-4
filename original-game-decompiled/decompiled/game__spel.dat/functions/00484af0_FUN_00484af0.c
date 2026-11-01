
/* ==== FUN_00484af0 @ 00484af0 ==== 
 * signature: bool __thiscall FUN_00484af0(void * this, undefined4 param_1)
 * body: 00484af0-00484c56
 */

bool __thiscall FUN_00484af0(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  char *local_28;
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
  pcStack_8 = FUN_0056ce59;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  uVar4 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aad5c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aad5c;
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
    FUN_004029e0(local_2c,uVar4);
  }
  local_1c[0] = (undefined1)param_1;
  uVar4 = 0xffffffff;
  local_4 = 0;
  pcVar6 = s_Invalid_element_m_Top_in_overlay_005aad84;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  FUN_00402940(local_1c,(undefined4 *)s_Invalid_element_m_Top_in_overlay_005aad84,~uVar4 - 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00487bc0(*(int *)((int)this + 4),local_1c,(int)local_2c);
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
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  iVar3 = (**(code **)(**(int **)((int)this + 4) + 0xc))(param_1);
  ExceptionList = local_10;
  return iVar3 != 0;
}


