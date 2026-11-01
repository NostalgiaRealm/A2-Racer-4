
/* ==== FUN_00480c20 @ 00480c20 ==== 
 * signature: undefined __stdcall FUN_00480c20(int * param_1)
 * body: 00480c20-00480f6e
 */

void FUN_00480c20(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_fd;
  uint local_fc;
  undefined1 local_f8 [4];
  byte *local_f4;
  int local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined **local_a8 [3];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c44e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004028f0(local_e8,'\0');
  uVar9 = 0xffffffff;
  pcVar10 = &DAT_005aa07c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e8,(undefined4 *)&DAT_005aa07c,~uVar9 - 1);
  puVar5 = local_e8;
  local_4 = 0;
  iVar3 = FUN_0047bc10((int)param_1);
  FUN_004877e0(local_f8,iVar3,(int)puVar5);
  local_4._0_1_ = 2;
  FUN_004028f0(local_e8,'\x01');
  if (local_f0 == 0) {
    local_4 = 0xffffffff;
    FUN_004028f0(local_f8,'\x01');
  }
  else {
    pbVar4 = local_f4;
    if (local_f4 == (byte *)0x0) {
      pbVar4 = &DAT_0057629c;
    }
    iVar3 = get_ini_arguments_online(pbVar4,(uint *)&DAT_005aa008);
    if (iVar3 != 4) {
      local_c8[0] = local_fd;
      FUN_004028f0(local_c8,'\0');
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_005aa59c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_c8,(undefined4 *)&DAT_005aa59c,~uVar9 - 1);
      local_4._0_1_ = 3;
      puVar5 = FUN_004873b0(local_8c);
      local_b8[0] = local_fd;
      local_4._0_1_ = 4;
      FUN_004028f0(local_b8,'\0');
      uVar9 = 0xffffffff;
      pcVar10 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa5a4;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_b8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa5a4,~uVar9 - 1);
      local_4._0_1_ = 5;
      local_d8[0] = local_fd;
      FUN_004028f0(local_d8,'\0');
      uVar9 = 0xffffffff;
      pcVar10 = s_HeadUp_Display_exception_in__005aa5d0;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_d8,(undefined4 *)s_HeadUp_Display_exception_in__005aa5d0,~uVar9 - 1);
      local_4._0_1_ = 6;
      puVar6 = FUN_0047c9a0(local_1c,local_d8,(int)local_b8);
      local_4._0_1_ = 7;
      puVar6 = FUN_004796b0(local_6c,puVar6,&DAT_005aa5a0);
      local_4._0_1_ = 8;
      puVar5 = FUN_0047c9a0(local_2c,puVar6,(int)puVar5);
      local_4._0_1_ = 9;
      puVar5 = FUN_0047c9a0(local_4c,puVar5,(int)local_c8);
      local_4._0_1_ = 10;
      puVar5 = FUN_004796b0(local_7c,puVar5,s_Invalid_number_of_arguments_for_R_005aa574);
      local_4._0_1_ = 0xb;
      iVar3 = FUN_0047bc10((int)param_1);
      puVar5 = FUN_0047c9a0(local_5c,puVar5,iVar3);
      local_4._0_1_ = 0xc;
      puVar5 = FUN_004796b0(local_3c,puVar5,&DAT_005aa570);
      local_4._0_1_ = 0xd;
      FUN_00558826(local_a8);
      local_4._0_1_ = 0xe;
      FUN_00424980(local_9c,&local_fd);
      local_4._0_1_ = 0xf;
      local_a8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(local_9c,puVar5,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0xd);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_a8,&DAT_0057f730);
    }
    uVar9 = FUN_004c3ec0(0);
    uVar7 = FUN_004c3ec0(1);
    uVar8 = FUN_004c3ec0(2);
    iVar3 = FUN_004c3ec0(3);
    local_fc = ((iVar3 << 8 | uVar9) << 8 | uVar7) << 8 | uVar8;
    (**(code **)(*param_1 + 0x28))(&local_fc);
    (**(code **)(*param_1 + 0x14))();
    if (local_f4 != (byte *)0x0) {
      bVar2 = local_f4[-1];
      if ((bVar2 == 0) || (bVar2 == 0xff)) {
        FUN_0054b339(local_f4 + -1);
      }
      else {
        local_f4[-1] = bVar2 - 1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


