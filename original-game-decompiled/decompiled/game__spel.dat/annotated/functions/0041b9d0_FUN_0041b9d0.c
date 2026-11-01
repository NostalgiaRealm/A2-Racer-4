
/* ==== FUN_0041b9d0 @ 0041b9d0 ==== 
 * signature: undefined4 __thiscall FUN_0041b9d0(void * this, int param_1, undefined1 param_2, int param_3)
 * body: 0041b9d0-0041bdd3
 */

undefined4 __thiscall FUN_0041b9d0(void *this,int param_1,undefined1 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  LPCSTR pCVar4;
  char *pcVar5;
  undefined1 local_74 [4];
  char *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [4];
  LPCSTR local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569dff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049f360(&local_44);
  local_4 = 0;
  local_74[0] = param_2;
  FUN_004028f0(local_74,'\0');
  local_64[0] = param_2;
  local_4._0_1_ = 1;
  FUN_004028f0(local_64,'\0');
  local_4._0_1_ = 2;
  iVar2 = FUN_0049ef80(&DAT_006fbb6c,PTR_s_POSITION_SWITCH_00593eec);
  local_40 = *(undefined4 *)(iVar2 + 4);
  local_3c = *(undefined4 *)(iVar2 + 8);
  local_38 = *(undefined4 *)(iVar2 + 0xc);
  local_34 = *(undefined4 *)(iVar2 + 0x10);
  local_30 = *(undefined4 *)(iVar2 + 0x14);
  FUN_004093c0(local_2c,(void *)(iVar2 + 0x18),0,0xffffffff);
  FUN_004093c0(local_1c,(void *)(iVar2 + 0x28),0,0xffffffff);
  if (param_3 == 1) {
    puVar3 = FUN_0049df90(local_54,PTR_s_CPA_02d__02d_00593ed8);
    local_4._0_1_ = 3;
    FUN_004093c0(local_74,puVar3,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004028f0(local_54,'\x01');
    puVar3 = FUN_0049df90(local_54,PTR_s_CPA_02d__02d_WAV_00593edc);
    local_4._0_1_ = 4;
    FUN_004093c0(local_64,puVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(local_54,'\x01');
  }
  else {
    puVar3 = FUN_0049df90(local_54,PTR_s_CBP_02d__02d_00593ee0);
    local_4._0_1_ = 5;
    FUN_004093c0(local_74,puVar3,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004028f0(local_54,'\x01');
    puVar3 = FUN_0049df90(local_54,PTR_s_CBP_02d__02d_WAV_00593ee4);
    local_4._0_1_ = 6;
    FUN_004093c0(local_64,puVar3,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004028f0(local_54,'\x01');
  }
  pCVar4 = local_60;
  if (local_60 == (LPCSTR)0x0) {
    pCVar4 = "";
  }
  iVar2 = FUN_004c64d0(pCVar4);
  if (iVar2 == 0) {
    local_4._0_1_ = 1;
    FUN_004028f0(local_64,'\x01');
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_74,'\x01');
    local_4 = 0xffffffff;
    FUN_0049f4c0(&local_44);
    ExceptionList = local_c;
    return 0xffffffff;
  }
  FUN_004093c0(local_1c,local_74,0,0xffffffff);
  FUN_004093c0(local_2c,local_64,0,0xffffffff);
  FUN_0049f030(&DAT_006fbb6c,(uint)&local_44);
  pcVar5 = local_70;
  if (local_70 == (char *)0x0) {
    pcVar5 = "";
  }
  iVar2 = FUN_0049ecb0(&DAT_006fbb5c,pcVar5);
  if (param_3 == 1) {
    iVar2 = FUN_0041c570((void *)(param_1 * 0x10 + 0xec + (int)this),iVar2);
    if ((char)iVar2 != '\0') {
LAB_0041bd47:
      if (local_60 != (LPCSTR)0x0) {
        cVar1 = local_60[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_60 + -1);
        }
        else {
          local_60[-1] = cVar1 + -1;
        }
      }
      local_60 = (LPCSTR)0x0;
      local_5c = 0;
      local_58 = 0;
      if (local_70 != (char *)0x0) {
        cVar1 = local_70[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_70 + -1);
        }
        else {
          local_70[-1] = cVar1 + -1;
        }
      }
      local_70 = (char *)0x0;
      local_6c = 0;
      local_68 = 0;
      local_4 = 0xffffffff;
      FUN_0049f4c0(&local_44);
      ExceptionList = local_c;
      return 0;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_64,'\x01');
  }
  else {
    iVar2 = FUN_0041c570((void *)(param_1 * 0x10 + 0x15c + (int)this),iVar2);
    if ((char)iVar2 != '\0') goto LAB_0041bd47;
    if (local_60 != (LPCSTR)0x0) {
      cVar1 = local_60[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_60 + -1);
      }
      else {
        local_60[-1] = cVar1 + -1;
      }
    }
    local_60 = (LPCSTR)0x0;
    local_5c = 0;
    local_58 = 0;
  }
  if (local_70 != (char *)0x0) {
    cVar1 = local_70[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_70 + -1);
    }
    else {
      local_70[-1] = cVar1 + -1;
    }
  }
  local_70 = (char *)0x0;
  local_6c = 0;
  local_68 = 0;
  local_4 = 0xffffffff;
  FUN_0049f4c0(&local_44);
  ExceptionList = local_c;
  return 0xffffffff;
}


