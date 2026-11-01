
/* ==== FUN_0047dde0 @ 0047dde0 ==== 
 * signature: undefined __fastcall FUN_0047dde0(int param_1)
 * body: 0047dde0-0047e1fa
 */

void __fastcall FUN_0047dde0(int param_1)

{
  char cVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  float10 fVar8;
  float *pfVar9;
  undefined1 local_125;
  float local_124;
  int local_120;
  float local_11c [4];
  undefined4 local_10c;
  undefined4 local_108;
  float local_104 [3];
  undefined1 local_f8 [16];
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
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056be26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004871c0(param_1);
  fVar8 = FUN_0047e6d0(iVar2);
  local_124 = (float)((float10)*(float *)(param_1 + 0x94) / fVar8);
  iVar2 = FUN_004871c0(param_1);
  fVar8 = FUN_0047e6e0(iVar2);
  local_120 = 0;
  local_124 = (float)(fVar8 * (float10)local_124);
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      iVar2 = local_120;
      iVar3 = FUN_00487200(param_1);
      local_e8[0] = local_125;
      this = *(void **)(*(int *)(*(int *)(iVar3 + 4) + 4) + iVar2 * 4);
      FUN_004028f0(local_e8,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e8c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_e8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9e8c,~uVar6 - 1);
      local_4 = 0;
      local_f8[0] = local_125;
      FUN_004028f0(local_f8,'\0');
      uVar6 = 0xffffffff;
      pcVar7 = s_Null_character_in_string_005a9eb8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(local_f8,(undefined4 *)s_Null_character_in_string_005a9eb8,~uVar6 - 1);
      local_4._0_1_ = 1;
      FUN_00487bc0((int)this,local_f8,(int)local_e8);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004028f0(local_f8,'\x01');
      local_4 = 0xffffffff;
      FUN_004028f0(local_e8,'\x01');
      iVar3 = FUN_004871d0(param_1);
      if (iVar3 == 0) {
        pfVar9 = local_11c + 3;
        local_10c = 0;
        local_108 = 0;
        local_11c[3] = ((float)local_120 + 0.5) * (local_124 + *(float *)(param_1 + 0x94));
      }
      else if (iVar3 == 1) {
        pfVar9 = local_104;
        local_104[1] = 0.0;
        local_104[2] = 0.0;
        local_104[0] = (local_124 + *(float *)(param_1 + 0x94)) *
                       ((1.0 - (float)*(int *)(param_1 + 0x98)) * 0.5 + (float)local_120);
      }
      else {
        if (iVar3 != 2) {
          local_c8[0] = local_125;
          FUN_004028f0(local_c8,'\0');
          uVar6 = 0xffffffff;
          pcVar7 = &DAT_005a9ef8;
          goto code_r0x0047e00d;
        }
        pfVar9 = local_11c;
        local_11c[1] = 0.0;
        local_11c[2] = 0.0;
        local_11c[0] = (local_124 + *(float *)(param_1 + 0x94)) *
                       (((float)local_120 - (float)*(int *)(param_1 + 0x98)) + 0.5);
      }
      FUN_0047bc50(this,pfVar9);
      local_120 = iVar2 + 1;
    } while (local_120 < *(int *)(param_1 + 0x98));
  }
  ExceptionList = local_c;
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\0') break;
code_r0x0047e00d:
    if (uVar6 == 0) break;
  }
  FUN_00402940(local_c8,(undefined4 *)&DAT_005a9ef8,~uVar6 - 1);
  local_4 = 2;
  puVar4 = FUN_004873b0(local_2c);
  local_b8[0] = local_125;
  local_4._0_1_ = 3;
  FUN_004028f0(local_b8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9f00;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_b8,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Fixed_005a9f00,~uVar6 - 1);
  local_4._0_1_ = 4;
  local_d8[0] = local_125;
  FUN_004028f0(local_d8,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_HeadUp_Display_exception_in__005a9f2c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_d8,(undefined4 *)s_HeadUp_Display_exception_in__005a9f2c,~uVar6 - 1);
  local_4._0_1_ = 5;
  puVar5 = FUN_0047c9a0(local_1c,local_d8,(int)local_b8);
  local_4._0_1_ = 6;
  puVar5 = FUN_004796b0(local_6c,puVar5,&DAT_005a9efc);
  local_4._0_1_ = 7;
  puVar4 = FUN_0047c9a0(local_8c,puVar5,(int)puVar4);
  local_4._0_1_ = 8;
  puVar4 = FUN_0047c9a0(local_4c,puVar4,(int)local_c8);
  local_4._0_1_ = 9;
  puVar4 = FUN_004796b0(local_7c,puVar4,s_Invalid_alignment_in_string_005a9ed8);
  local_4._0_1_ = 10;
  iVar2 = FUN_0047bc10(param_1);
  puVar4 = FUN_0047c9a0(local_5c,puVar4,iVar2);
  local_4._0_1_ = 0xb;
  puVar4 = FUN_004796b0(local_3c,puVar4,&DAT_005a9ed4);
  local_4._0_1_ = 0xc;
  FUN_00558826(local_a8);
  local_4._0_1_ = 0xd;
  FUN_00424980(local_9c,&local_125);
  local_4._0_1_ = 0xe;
  local_a8[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_9c,puVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_a8,&DAT_0057f730);
}


