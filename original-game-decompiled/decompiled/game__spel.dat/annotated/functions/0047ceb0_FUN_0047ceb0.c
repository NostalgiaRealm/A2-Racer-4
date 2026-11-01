
/* ==== FUN_0047ceb0 @ 0047ceb0 ==== 
 * signature: undefined __thiscall FUN_0047ceb0(void * this, int param_1)
 * body: 0047ceb0-0047d181
 */

void __thiscall FUN_0047ceb0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_e9;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined **local_b8 [3];
  undefined1 local_ac [16];
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
  pcStack_8 = FUN_0056bc07;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x44) == -1) {
    ExceptionList = &local_c;
    iVar2 = FUN_004b4fa0(param_1,0,FUN_004b5620);
    *(int *)((int)this + 0x44) = iVar2;
    if (iVar2 == -1) {
      puVar3 = FUN_004873b0(local_4c);
      local_d8[0] = local_e9;
      local_4 = 0;
      FUN_004028f0(local_d8,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_005a9c48;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_d8,(undefined4 *)&DAT_005a9c48,~uVar6 - 1);
      local_4._0_1_ = 1;
      puVar4 = FUN_004873b0(local_1c);
      local_4._0_1_ = 2;
      local_c8[0] = local_e9;
      FUN_004028f0(local_c8,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9c50;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_c8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Eleme_005a9c50,~uVar6 - 1);
      local_e8[0] = local_e9;
      local_4._0_1_ = 3;
      FUN_004028f0(local_e8,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = s_HeadUp_Display_exception_in__005a9c78;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_e8,(undefined4 *)s_HeadUp_Display_exception_in__005a9c78,~uVar6 - 1);
      local_4._0_1_ = 4;
      puVar5 = FUN_0047c9a0(local_9c,local_e8,(int)local_c8);
      local_4._0_1_ = 5;
      puVar5 = FUN_004796b0(local_6c,puVar5,&DAT_005a9c4c);
      local_4._0_1_ = 6;
      puVar4 = FUN_0047c9a0(local_2c,puVar5,(int)puVar4);
      local_4._0_1_ = 7;
      puVar4 = FUN_0047c9a0(local_8c,puVar4,(int)local_d8);
      local_4._0_1_ = 8;
      puVar4 = FUN_004796b0(local_7c,puVar4,s_Unable_to_create_object_for_anim_005a9c20);
      local_4._0_1_ = 9;
      puVar3 = FUN_0047c9a0(local_5c,puVar4,(int)puVar3);
      local_4._0_1_ = 10;
      puVar3 = FUN_004796b0(local_3c,puVar3,&DAT_005a9c1c);
      local_4._0_1_ = 0xb;
      FUN_00558826(local_b8);
      local_4._0_1_ = 0xc;
      FUN_00424980(local_ac,&local_e9);
      local_4._0_1_ = 0xd;
      local_b8[0] = &PTR_FUN_00576b14;
      FUN_004093c0(local_ac,puVar3,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_b8,&DAT_0057f730);
    }
    if (DAT_006fb940 != 0) {
      *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xa5) = 1;
    }
    *(undefined1 *)(DAT_0073b0d0 + *(int *)((int)this + 0x44) * 0xa9 + 0x90) = 1;
  }
  iVar2 = *(int *)((int)this + 0x44);
  if (*(int *)(DAT_0073b0d0 + iVar2 + 4 + iVar2 * 0xa8) != param_1) {
    *(int *)(DAT_0073b0d0 + iVar2 + 4 + iVar2 * 0xa8) = param_1;
  }
  ExceptionList = local_c;
  return;
}


