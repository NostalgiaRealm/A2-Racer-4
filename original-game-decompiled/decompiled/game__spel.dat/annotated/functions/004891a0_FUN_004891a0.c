
/* ==== FUN_004891a0 @ 004891a0 ==== 
 * signature: undefined FUN_004891a0(void)
 * body: 004891a0-004893e0
 */

undefined4 * FUN_004891a0(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_4c [4];
  char *local_48;
  uint local_44;
  undefined4 local_40;
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
  pcStack_8 = FUN_0056d63b;
  local_c = ExceptionList;
  if (DAT_0071278c == (undefined4 *)0x0) {
    uVar6 = 0xffffffff;
    pcVar8 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abaa0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    ExceptionList = &local_c;
    FUN_00402940(local_3c,(undefined4 *)s_C__Work_A2IV_Game_prog_Ovl_Commu_005abaa0,~uVar6 - 1);
    local_4 = 0;
    puVar2 = FUN_0049df90(local_2c,(byte *)s_Overlay_not_initialized_005abacc);
    puVar5 = local_3c;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar3 = FUN_004882e0(&DAT_007126e8);
    FUN_00487bc0(iVar3,puVar2,(int)puVar5);
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
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    this = operator_new(0x3d0);
    local_4 = 2;
    if (this == (void *)0x0) {
      DAT_0071278c = (undefined4 *)0x0;
    }
    else {
      uVar4 = FUN_004882e0(&DAT_007126e8);
      DAT_0071278c = FUN_004895e0(this,uVar4);
    }
    local_4 = 0xffffffff;
    FUN_004028f0(local_4c,'\0');
    uVar6 = 0xffffffff;
    pcVar8 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abae4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    uVar4 = FUN_00402a00(local_4c,uVar6,'\x01');
    if ((char)uVar4 != '\0') {
      pcVar8 = s_C__Work_A2IV_Game_prog_Ovl_Commu_005abae4;
      pcVar9 = local_48;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_48[uVar6] = '\0';
      local_44 = uVar6;
    }
    local_4 = 3;
    puVar5 = FUN_0049df90(local_1c,(byte *)s_Cannot_create_communicator_insta_005abb10);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_00487bc0((int)DAT_0071278c,puVar5,(int)local_4c);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_4 = 0xffffffff;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    if (local_48 != (char *)0x0) {
      cVar1 = local_48[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_48 + -1);
      }
      else {
        local_48[-1] = cVar1 + -1;
      }
    }
    local_48 = (char *)0x0;
    local_44 = 0;
    local_40 = 0;
    FUN_0048ae80(DAT_0071278c);
  }
  ExceptionList = local_c;
  return DAT_0071278c;
}


