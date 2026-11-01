
/* ==== FUN_0040eff3 @ 0040eff3 ==== 
 * signature: undefined __fastcall FUN_0040eff3(void * param_1)
 * body: 0040eff3-0040efff
 */

void __fastcall FUN_0040eff3(void *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iStack_100;
  undefined1 auStack_f8 [4];
  int iStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [4];
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [20];
  undefined1 auStack_74 [20];
  undefined1 auStack_60 [84];
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005699de;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00401000(auStack_74);
  uStack_4 = 0;
  FUN_00401280(auStack_60);
  uStack_4._0_1_ = 1;
  FUN_004028f0(auStack_b8,'\0');
  uStack_4._0_1_ = 2;
  FUN_004028f0(auStack_e8,'\0');
  uStack_4._0_1_ = 3;
  FUN_004028f0(auStack_d8,'\0');
  uStack_4._0_1_ = 4;
  FUN_004028f0(auStack_f8,'\0');
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  FUN_004489a0(&DAT_006fa558,(byte *)s_BEHAVIOR_INI_00592444,(byte *)s_AI_Behavior_Settings_0059242c
              );
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Behavior_Settings_00592454);
  pcVar3 = *(char **)(iVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  iVar2 = FUN_004c3cd0(s_Agent_Types_0059218c,s_Count_005921bc);
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      puVar4 = FUN_0049df90(auStack_98,&DAT_0059246c);
      uStack_4._0_1_ = 6;
      FUN_004093c0(auStack_e8,puVar4,0,0xffffffff);
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_98,'\x01');
      FUN_004028f0(auStack_c8,'\0');
      uVar6 = 0xffffffff;
      pcVar3 = s_Agent_Types_0059218c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_c8,(undefined4 *)s_Agent_Types_0059218c,~uVar6 - 1);
      uStack_4._0_1_ = 7;
      puVar4 = FUN_004877e0(auStack_a8,(int)auStack_c8,(int)auStack_e8);
      uStack_4._0_1_ = 8;
      FUN_004093c0(auStack_d8,puVar4,0,0xffffffff);
      uStack_4._0_1_ = 7;
      FUN_004028f0(auStack_a8,'\x01');
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_c8,'\x01');
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_005d1b10;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar6 = FUN_0040fc80(auStack_d8,0,uStack_d0,&DAT_005d1b10,~uVar6 - 1);
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____No_agent_type_name_foun_00592494);
      }
      puVar4 = FUN_00401110(auStack_88,auStack_d8);
      uStack_4._0_1_ = 9;
      FUN_0040fcf0(*(void **)((int)param_1 + 0x20),
                   *(undefined1 **)((int)*(void **)((int)param_1 + 0x20) + 8),puVar4);
      uStack_4 = CONCAT31(uStack_4._1_3_,5);
      FUN_00401240((int)auStack_88);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  iVar2 = FUN_004c3cd0(s_Behaviors_00592198,s_Count_005921bc);
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      puVar4 = FUN_0049df90(auStack_a8,&DAT_005924c4);
      uStack_4._0_1_ = 10;
      FUN_004093c0(auStack_e8,puVar4,0,0xffffffff);
      uStack_4._0_1_ = 5;
      FUN_004028f0(auStack_a8,'\x01');
      FUN_004028f0(auStack_c8,'\0');
      uVar6 = 0xffffffff;
      pcVar3 = s_Behaviors_00592198;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_c8,(undefined4 *)s_Behaviors_00592198,~uVar6 - 1);
      uStack_4._0_1_ = 0xb;
      puVar4 = FUN_004877e0(auStack_98,(int)auStack_c8,(int)auStack_e8);
      uStack_4._0_1_ = 0xc;
      FUN_004093c0(auStack_f8,puVar4,0,0xffffffff);
      uStack_4._0_1_ = 0xb;
      FUN_004028f0(auStack_98,'\x01');
      uStack_4 = CONCAT31(uStack_4._1_3_,5);
      FUN_004028f0(auStack_c8,'\x01');
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_005d1b14;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar6 = FUN_0040fc80(auStack_f8,0,uStack_f0,&DAT_005d1b14,~uVar6 - 1);
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____No_behavior_name_found_f_005924ec);
      }
      if (iVar7 == 0) {
        uVar6 = 0xffffffff;
        pcVar3 = s_Default_0059251c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        uVar6 = FUN_0040fc80(auStack_f8,0,uStack_f0,(byte *)s_Default_0059251c,~uVar6 - 1);
        if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____Behavior__Default__must_00592548);
        }
      }
      iVar5 = FUN_0040f760(param_1,(int)auStack_f8);
      if (iVar5 != -1) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____Behavior___s__already_d_005925a4);
      }
      FUN_004093c0(auStack_60,auStack_f8,0,0xffffffff);
      if (iVar7 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)((int)param_1 + 0x28) + 4);
      }
      FUN_004013f0(auStack_60,iVar5);
      FUN_0040ff30(*(void **)((int)param_1 + 0x28),
                   *(undefined1 **)((int)*(void **)((int)param_1 + 0x28) + 8),auStack_60);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  puVar4 = FUN_0049df90(auStack_a8,(byte *)s_Track__d_Behaviors_005921a4);
  uStack_4._0_1_ = 0xd;
  FUN_004093c0(auStack_b8,puVar4,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  FUN_004028f0(auStack_a8,'\x01');
  iStack_100 = 0;
  iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x1c))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      puVar4 = FUN_004877e0(auStack_a8,(int)auStack_b8,
                            *(int *)(*(int *)((int)param_1 + 0x20) + 4) + iVar2);
      uStack_4._0_1_ = 0xe;
      FUN_004093c0(auStack_f8,puVar4,0,0xffffffff);
      uStack_4 = CONCAT31(uStack_4._1_3_,5);
      FUN_004028f0(auStack_a8,'\x01');
      uVar6 = 0xffffffff;
      pcVar3 = &DAT_005d1b18;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar6 = FUN_0040fc80(auStack_f8,0,uStack_f0,&DAT_005d1b18,~uVar6 - 1);
      if (uVar6 != 0) {
        iVar7 = FUN_0040f760(param_1,(int)auStack_f8);
        if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____Track__d__agent_type____005925fc);
        }
        *(int *)(iVar2 + 0x10 + *(int *)(*(int *)((int)param_1 + 0x20) + 4)) = iVar7;
      }
      iStack_100 = iStack_100 + 1;
      iVar2 = iVar2 + 0x14;
      iVar7 = (*(code *)**(undefined4 **)((int)param_1 + 0x1c))();
    } while (iStack_100 < iVar7);
  }
  if (iStack_f4 != 0) {
    cVar1 = *(char *)(iStack_f4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_f4 + -1));
    }
    else {
      *(char *)(iStack_f4 + -1) = cVar1 + -1;
    }
  }
  iStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (iStack_d4 != 0) {
    cVar1 = *(char *)(iStack_d4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_d4 + -1));
    }
    else {
      *(char *)(iStack_d4 + -1) = cVar1 + -1;
    }
  }
  iStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  if (iStack_e4 != 0) {
    cVar1 = *(char *)(iStack_e4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_e4 + -1));
    }
    else {
      *(char *)(iStack_e4 + -1) = cVar1 + -1;
    }
  }
  iStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (iStack_b4 != 0) {
    cVar1 = *(char *)(iStack_b4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_b4 + -1));
    }
    else {
      *(char *)(iStack_b4 + -1) = cVar1 + -1;
    }
  }
  iStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_004013b0((int)auStack_60);
  uStack_4 = 0xffffffff;
  FUN_00401240((int)auStack_74);
  ExceptionList = pvStack_c;
  return;
}


