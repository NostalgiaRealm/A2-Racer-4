
/* ==== FUN_00486d50 @ 00486d50 ==== 
 * signature: undefined4 * __thiscall FUN_00486d50(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00486d50-0048700b;0048700d-00487027
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0048700c-0048700c
 */

undefined4 * __thiscall
FUN_00486d50(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_e1;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  void *local_c0;
  undefined1 local_bc [16];
  void *local_ac;
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
  pcStack_8 = FUN_0056d315;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_ac = this;
  FUN_0047beb0(this,param_1);
  local_4 = 0;
  *(undefined ***)((int)this + 0x84) = &PTR_FUN_00576bb8;
  local_c0 = operator_new(0x10);
  local_4._0_1_ = 1;
  if (local_c0 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00424980(local_c0,&local_e1);
  }
  *(undefined4 *)((int)this + 0x88) = uVar2;
  *(undefined4 *)((int)this + 0x98) = param_2;
  *(undefined4 *)((int)this + 0x8c) = param_3;
  *(undefined4 *)((int)this + 0x90) = param_4;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0x9c) = local_e1;
  FUN_004028f0((undefined1 *)((int)this + 0x9c),'\0');
  local_4._0_1_ = 3;
  *(undefined ***)this = &PTR_FUN_00576bc8;
  if (0 < *(int *)((int)this + 0x98)) {
    ExceptionList = local_c;
    return this;
  }
  local_bc[0] = local_e1;
  FUN_004028f0(local_bc,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_005ab280;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_bc,(undefined4 *)&DAT_005ab280,~uVar5 - 1);
  local_4._0_1_ = 4;
  puVar3 = FUN_004873b0(local_1c);
  local_4._0_1_ = 5;
  local_e0[0] = local_e1;
  FUN_004028f0(local_e0,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_C__Work_A2IV_Game_prog_Hud_Strin_005ab288;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_e0,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Strin_005ab288,~uVar5 - 1);
  local_4._0_1_ = 6;
  local_d0[0] = local_e1;
  FUN_004028f0(local_d0,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_HeadUp_Display_exception_in__005ab2b0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d0,(undefined4 *)s_HeadUp_Display_exception_in__005ab2b0,~uVar5 - 1);
  local_4._0_1_ = 7;
  puVar4 = FUN_0047c9a0(local_8c,local_d0,(int)local_e0);
  local_4._0_1_ = 8;
  puVar4 = FUN_004796b0(local_6c,puVar4,&DAT_005ab284);
  local_4._0_1_ = 9;
  puVar3 = FUN_0047c9a0(local_2c,puVar4,(int)puVar3);
  local_4._0_1_ = 10;
  puVar3 = FUN_0047c9a0(local_4c,puVar3,(int)local_bc);
  local_4._0_1_ = 0xb;
  puVar3 = FUN_004796b0(local_7c,puVar3,s_Empty_string_005ab270);
  local_4._0_1_ = 0xc;
  puVar3 = FUN_0047c9a0(local_5c,puVar3,(int)param_1);
  local_4._0_1_ = 0xd;
  puVar3 = FUN_004796b0(local_3c,puVar3,&DAT_005ab26c);
  local_4._0_1_ = 0xe;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xf;
  FUN_00424980(local_9c,&local_e1);
  local_4._0_1_ = 0x10;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,puVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xe);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


