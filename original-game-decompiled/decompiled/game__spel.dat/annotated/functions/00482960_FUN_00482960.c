
/* ==== FUN_00482960 @ 00482960 ==== 
 * signature: undefined __stdcall FUN_00482960(float param_1, float param_2, float param_3, float param_4, int param_5)
 * body: 00482960-00483004
 */

void FUN_00482960(float param_1,float param_2,float param_3,float param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_25d;
  float local_25c;
  undefined2 local_258;
  undefined2 local_256;
  undefined2 local_254;
  undefined2 local_252;
  undefined2 local_250;
  undefined2 local_24e;
  float local_24c;
  float local_248;
  undefined1 local_244 [16];
  undefined1 local_234 [16];
  undefined1 local_224 [16];
  undefined1 local_214 [16];
  undefined1 local_204 [16];
  undefined1 local_1f4 [16];
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b4;
  undefined4 local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  undefined4 local_194;
  undefined4 local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  float local_168;
  undefined **local_164 [3];
  undefined1 local_158 [16];
  undefined **local_148 [3];
  undefined1 local_13c [16];
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined1 local_10c [16];
  undefined1 local_fc [16];
  undefined1 local_ec [16];
  undefined1 local_dc [16];
  undefined1 local_cc [16];
  undefined1 local_bc [16];
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
  pcStack_8 = FUN_0056c9eb;
  local_c = ExceptionList;
  pcVar2 = *(char **)(param_5 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &local_c;
  iVar3 = FUN_004b7400(&DAT_00712130,pcVar2);
  if (iVar3 != -1) {
    iVar6 = DAT_0073b1b0 + iVar3 * 0x48;
    if ((*(int *)(DAT_0073b1b0 + 0x24 + iVar3 * 0x48) != 0) && (*(int *)(iVar6 + 0x28) != 0)) {
      local_1c4 = param_3 * 0.5;
      local_1dc = 0;
      local_248 = -local_1c4;
      local_24c = param_4 * 0.5;
      local_1cc = param_1 / (float)*(int *)(iVar6 + 0x24);
      local_1d0 = 0;
      local_1d4 = 0xffffffff;
      local_1bc = 0;
      local_1c8 = param_2 / (float)*(int *)(iVar6 + 0x28);
      local_1ac = (param_1 + param_3) / (float)*(int *)(iVar6 + 0x24);
      local_1b0 = 0;
      local_1b4 = 0xffffffff;
      local_19c = 0;
      local_1a8 = param_2 / (float)*(int *)(iVar6 + 0x28);
      local_1a0 = -local_24c;
      local_18c = (param_1 + param_3) / (float)*(int *)(iVar6 + 0x24);
      local_25c = param_2 + param_4;
      local_190 = 0;
      local_194 = 0xffffffff;
      local_17c = 0;
      local_188 = local_25c / (float)*(int *)(iVar6 + 0x28);
      local_16c = param_1 / (float)*(int *)(iVar6 + 0x24);
      local_170 = 0;
      local_254 = 2;
      local_250 = 2;
      local_168 = local_25c / (float)*(int *)(iVar6 + 0x28);
      local_174 = 0xffffffff;
      local_258 = 0;
      local_256 = 1;
      local_252 = 0;
      local_24e = 3;
      local_1e4 = local_248;
      local_1e0 = local_24c;
      local_1c0 = local_24c;
      local_1a4 = local_1c4;
      local_184 = local_248;
      local_180 = local_1a0;
      iVar6 = FUN_004bcca0((int)&local_1e4,4,(int)&local_258,6);
      iVar3 = FUN_004b48e0(iVar6,iVar3,FUN_004b5620);
      if (DAT_006fb940 != 0) {
        *(undefined4 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0xa5) = 1;
      }
      *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 1;
      ExceptionList = local_c;
      return;
    }
    local_224[0] = local_25d;
    FUN_004028f0(local_224,'\0');
    uVar7 = 0xffffffff;
    pcVar2 = &DAT_005aa968;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_224,(undefined4 *)&DAT_005aa968,~uVar7 - 1);
    local_4 = 0xe;
    puVar4 = FUN_004873b0(local_6c);
    local_4._0_1_ = 0xf;
    local_1f4[0] = local_25d;
    FUN_004028f0(local_1f4,'\0');
    uVar7 = 0xffffffff;
    pcVar2 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa970;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1f4,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa970,~uVar7 - 1);
    local_4._0_1_ = 0x10;
    local_234[0] = local_25d;
    FUN_004028f0(local_234,'\0');
    uVar7 = 0xffffffff;
    pcVar2 = s_HeadUp_Display_exception_in__005aa99c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_234,(undefined4 *)s_HeadUp_Display_exception_in__005aa99c,~uVar7 - 1);
    local_4._0_1_ = 0x11;
    puVar5 = FUN_0047c9a0(local_ac,local_234,(int)local_1f4);
    local_4._0_1_ = 0x12;
    puVar5 = FUN_004796b0(local_2c,puVar5,&DAT_005aa96c);
    local_4._0_1_ = 0x13;
    puVar4 = FUN_0047c9a0(local_11c,puVar5,(int)puVar4);
    local_4._0_1_ = 0x14;
    puVar4 = FUN_0047c9a0(local_fc,puVar4,(int)local_224);
    local_4._0_1_ = 0x15;
    puVar4 = FUN_004796b0(local_dc,puVar4,s_Texture_005aa95c);
    local_4._0_1_ = 0x16;
    puVar4 = FUN_0047c9a0(local_bc,puVar4,param_5);
    local_4._0_1_ = 0x17;
    puVar4 = FUN_004796b0(local_9c,puVar4,s_width___height_is_0_005aa944);
    local_4._0_1_ = 0x18;
    puVar4 = FUN_004796b0(local_7c,puVar4,&DAT_005aa940);
    local_4._0_1_ = 0x19;
    FUN_00558826(local_148);
    local_4._0_1_ = 0x1a;
    FUN_00424980(local_13c,&local_25d);
    local_4._0_1_ = 0x1b;
    local_148[0] = &PTR_FUN_00576b14;
    FUN_004093c0(local_13c,puVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,0x19);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_148,&DAT_0057f730);
  }
  local_214[0] = local_25d;
  FUN_004028f0(local_214,'\0');
  uVar7 = 0xffffffff;
  pcVar2 = &DAT_005aa8ec;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_214,(undefined4 *)&DAT_005aa8ec,~uVar7 - 1);
  local_4 = 0;
  puVar4 = FUN_004873b0(local_10c);
  local_4._0_1_ = 1;
  local_204[0] = local_25d;
  FUN_004028f0(local_204,'\0');
  uVar7 = 0xffffffff;
  pcVar2 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa8f4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_204,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa8f4,~uVar7 - 1);
  local_4._0_1_ = 2;
  local_244[0] = local_25d;
  FUN_004028f0(local_244,'\0');
  uVar7 = 0xffffffff;
  pcVar2 = s_HeadUp_Display_exception_in__005aa920;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_244,(undefined4 *)s_HeadUp_Display_exception_in__005aa920,~uVar7 - 1);
  local_4._0_1_ = 3;
  puVar5 = FUN_0047c9a0(local_5c,local_244,(int)local_204);
  local_4._0_1_ = 4;
  puVar5 = FUN_004796b0(local_3c,puVar5,&DAT_005aa8f0);
  local_4._0_1_ = 5;
  puVar4 = FUN_0047c9a0(local_1c,puVar5,(int)puVar4);
  local_4._0_1_ = 6;
  puVar4 = FUN_0047c9a0(local_12c,puVar4,(int)local_214);
  local_4._0_1_ = 7;
  puVar4 = FUN_004796b0(local_8c,puVar4,s_Invalid_texture_name_005aa8d4);
  local_4._0_1_ = 8;
  puVar4 = FUN_0047c9a0(local_ec,puVar4,param_5);
  local_4._0_1_ = 9;
  puVar4 = FUN_004796b0(local_4c,puVar4,s_in_ini_file_005aa8c4);
  local_4._0_1_ = 10;
  puVar4 = FUN_004796b0(local_cc,puVar4,&DAT_005aa8c0);
  local_4._0_1_ = 0xb;
  FUN_00558826(local_164);
  local_4._0_1_ = 0xc;
  FUN_00424980(local_158,&local_25d);
  local_4._0_1_ = 0xd;
  local_164[0] = &PTR_FUN_00576b14;
  FUN_004093c0(local_158,puVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_164,&DAT_0057f730);
}


