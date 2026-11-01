
/* ==== FUN_0047e6f0 @ 0047e6f0 ==== 
 * signature: undefined __thiscall FUN_0047e6f0(void * this, byte param_1, undefined4 param_2, float param_3)
 * body: 0047e6f0-0047e96c;0047e96e-0047e9ea
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0047e96d-0047e96d
 */

void __thiscall FUN_0047e6f0(void *this,byte param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  char cVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_f9;
  undefined1 local_f8 [16];
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
  pcStack_8 = FUN_0056bee4;
  local_c = ExceptionList;
  if (0.0 <= param_3) {
    puVar1 = (undefined4 *)((int)this + (uint)param_1 * 8);
    if (*(float *)((int)this + (uint)param_1 * 8 + 4) <= param_3) {
      fVar3 = param_3;
      if (param_3 < *(float *)((int)this + 0x804)) {
        fVar3 = *(float *)((int)this + 0x804);
      }
      *(float *)((int)this + 0x804) = fVar3;
    }
    else {
      ExceptionList = &local_c;
      FUN_0047ea40((int)this);
    }
    *puVar1 = param_2;
    puVar1[1] = param_3;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  puVar4 = FUN_004874b0(local_9c);
  local_4 = 0;
  puVar4 = FUN_004797e0(local_8c,s_Negative_value_005a9fa4,(int)puVar4);
  local_4._0_1_ = 1;
  FUN_004796b0(local_c8,puVar4,s_for_character_005a9f94);
  local_4._0_1_ = 4;
  FUN_004028f0(local_8c,'\x01');
  local_4._0_1_ = 3;
  FUN_004028f0(local_9c,'\x01');
  FUN_0047eab0(local_c8,1,param_1);
  local_f8[0] = local_f9;
  FUN_004028f0(local_f8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_005a9fb8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_f8,(undefined4 *)&DAT_005a9fb8,~uVar6 - 1);
  local_4._0_1_ = 5;
  puVar4 = FUN_004873b0(local_7c);
  local_e8[0] = local_f9;
  local_4._0_1_ = 6;
  FUN_004028f0(local_e8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Font__005a9fc0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_e8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Font__005a9fc0,~uVar6 - 1);
  local_4._0_1_ = 7;
  local_d8[0] = local_f9;
  FUN_004028f0(local_d8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005a9fe4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00402940(local_d8,(undefined4 *)s_HeadUp_Display_exception_in__005a9fe4,~uVar6 - 1);
  local_4._0_1_ = 8;
  puVar5 = FUN_0047c9a0(local_1c,local_d8,(int)local_e8);
  local_4._0_1_ = 9;
  puVar5 = FUN_004796b0(local_2c,puVar5,&DAT_005a9fbc);
  local_4._0_1_ = 10;
  puVar4 = FUN_0047c9a0(local_4c,puVar5,(int)puVar4);
  local_4._0_1_ = 0xb;
  puVar4 = FUN_0047c9a0(local_6c,puVar4,(int)local_f8);
  local_4._0_1_ = 0xc;
  puVar4 = FUN_0047c9a0(local_5c,puVar4,(int)local_c8);
  local_4._0_1_ = 0xd;
  puVar4 = FUN_004796b0(local_3c,puVar4,&DAT_005a9fb4);
  local_4._0_1_ = 0xe;
  FUN_00558826(local_b8);
  local_4._0_1_ = 0xf;
  FUN_00424980(local_ac,&local_f9);
  local_4._0_1_ = 0x10;
  local_b8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_ac,puVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_b8,&DAT_0057f730);
}


