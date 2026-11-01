
/* ==== FUN_00491b10 @ 00491b10 ==== 
 * signature: undefined __fastcall FUN_00491b10(int param_1)
 * body: 00491b10-00491cf0
 */

void __fastcall FUN_00491b10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  char *pcVar8;
  int local_44;
  undefined **local_40;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
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
  pcStack_8 = FUN_0056dfdf;
  local_c = ExceptionList;
  local_40 = &PTR_s_OVL_SPEED_CIJFERS_00576fa8;
  ExceptionList = &local_c;
  do {
    ppuVar7 = local_40;
    uVar4 = 0xffffffff;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    pcVar6 = *local_40;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_2c,(undefined4 *)*local_40,~uVar4 - 1);
    local_4 = 0;
    local_44 = FUN_00484dd0(*(void **)(param_1 + 4),local_2c);
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
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004028f0(local_3c,'\0');
    uVar4 = 0xffffffff;
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd60;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(local_3c,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd60;
      pcVar8 = local_38;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_38[uVar4] = '\0';
      ppuVar7 = local_40;
      local_34 = uVar4;
    }
    local_4 = 1;
    puVar3 = FUN_0049df90(local_1c,(byte *)s_Element__s_not_found_005acd8c);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00487bc0(local_44,puVar3,(int)local_3c);
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
    local_4 = 0xffffffff;
    if (local_38 != (char *)0x0) {
      cVar1 = local_38[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_38 + -1);
      }
      else {
        local_38[-1] = cVar1 + -1;
      }
    }
    local_38 = (char *)0x0;
    local_34 = 0;
    local_30 = 0;
    FUN_004905f0(*(void **)(param_1 + 0x44),*(undefined4 **)((int)*(void **)(param_1 + 0x44) + 8),
                 &local_44);
    local_40 = ppuVar7 + 1;
    if (0x576fc3 < (int)local_40) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


