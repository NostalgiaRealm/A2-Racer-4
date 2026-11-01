
/* ==== FUN_00491510 @ 00491510 ==== 
 * signature: undefined __thiscall FUN_00491510(void * this, void * param_1)
 * body: 00491510-004916f7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00491510(void *this,void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **local_48;
  int local_44;
  void *local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056df98;
  local_c = ExceptionList;
  local_48 = &PTR_s_OVL_SPEED_SUN_DIGIT_1_00576f90;
  ExceptionList = &local_c;
  local_40 = this;
  do {
    local_2c[0] = param_1._0_1_;
    pcVar6 = *local_48;
    FUN_004028f0(local_2c,'\0');
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
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
    local_44 = FUN_00484f60(param_1,local_2c);
    local_4 = 0xffffffff;
    FUN_004028f0(local_2c,'\x01');
    uVar4 = 0xffffffff;
    pcVar6 = s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd14;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_3c[0] = param_1._0_1_;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    FUN_00402940(local_3c,(undefined4 *)s_C__Work_A2IV_Game_prog_Ovl_Dashb_005acd14,~uVar4 - 1);
    local_4 = 1;
    puVar3 = FUN_0049df90(local_1c,(byte *)s_Element__s_not_found_005acd40);
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
    FUN_004a5620(*(void **)((int)local_40 + 4),
                 *(undefined4 **)((int)*(void **)((int)local_40 + 4) + 8),1,&local_44);
    local_48 = local_48 + 1;
    if (0x576f9f < (int)local_48) {
      uVar2 = FUN_0049ecb0(&DAT_006fbb5c,s_SUNNIES_005acc48);
      *(undefined4 *)((int)local_40 + 0x14) = uVar2;
      *(float *)((int)local_40 + 8) = _DAT_005b23b8 * 0.1;
      FUN_00491700(local_40,DAT_006fba68);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


