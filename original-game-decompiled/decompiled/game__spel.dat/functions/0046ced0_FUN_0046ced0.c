
/* ==== FUN_0046ced0 @ 0046ced0 ==== 
 * signature: undefined __thiscall FUN_0046ced0(void * this, undefined1 * param_1, int param_2)
 * body: 0046ced0-0046d35a
 */

void __thiscall FUN_0046ced0(void *this,undefined1 *param_1,int param_2)

{
  char cVar1;
  LPCSTR pCVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ad77;
  local_c = ExceptionList;
  pCVar2 = *(LPCSTR *)(param_2 + 4);
  if (pCVar2 == (LPCSTR)0x0) {
    pCVar2 = "";
  }
  ExceptionList = &local_c;
  FUN_0046cd60(local_2c,pCVar2);
  iVar12 = (int)this + 0x14;
  puVar11 = local_2c;
  local_4 = 0;
  puVar10 = param_1;
  iVar5 = iVar12;
  pvVar3 = (void *)FUN_004ea0c0();
  FUN_004eaaa0(pvVar3,puVar10,(int)puVar11,iVar5);
  pcVar4 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_CM_KEYB_LCONTROL_005a85ac);
  if (iVar5 == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004028f0(local_1c,'\0');
    uVar7 = 0xffffffff;
    pcVar4 = s_CM_KEYB_RCONTROL_005a85c0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)s_CM_KEYB_RCONTROL_005a85c0,~uVar7 - 1);
    puVar11 = local_1c;
    local_4._0_1_ = 1;
    puVar10 = param_1;
    iVar5 = iVar12;
    pvVar3 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar3,puVar10,(int)puVar11,iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
  }
  pcVar4 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_CM_KEYB_LALT_005a85d4);
  if (iVar5 == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004028f0(local_1c,'\0');
    uVar7 = 0xffffffff;
    pcVar4 = s_CM_KEYB_RALT_005a85e4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)s_CM_KEYB_RALT_005a85e4,~uVar7 - 1);
    puVar11 = local_1c;
    local_4._0_1_ = 2;
    puVar10 = param_1;
    iVar5 = iVar12;
    pvVar3 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar3,puVar10,(int)puVar11,iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
  }
  pcVar4 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_CM_KEYB_LEFT_005a85f4);
  if (iVar5 == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004028f0(local_1c,'\0');
    uVar7 = 0xffffffff;
    pcVar4 = s_CM_KEYB_NUMPAD4_005a8604;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00402940(local_1c,(undefined4 *)s_CM_KEYB_NUMPAD4_005a8604,~uVar7 - 1);
    puVar11 = local_1c;
    local_4._0_1_ = 3;
    puVar10 = param_1;
    iVar5 = iVar12;
    pvVar3 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar3,puVar10,(int)puVar11,iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
  }
  pcVar4 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_CM_KEYB_RIGHT_005a8614);
  if (iVar5 == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004028f0(local_1c,'\0');
    uVar7 = 0xffffffff;
    pcVar4 = s_CM_KEYB_NUMPAD6_005a8624;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar6 = FUN_00402a00(local_1c,uVar7,'\x01');
    if ((char)uVar6 != '\0') {
      pcVar4 = s_CM_KEYB_NUMPAD6_005a8624;
      pcVar9 = local_18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_004029e0(local_1c,uVar7);
    }
    puVar11 = local_1c;
    local_4._0_1_ = 4;
    puVar10 = param_1;
    iVar5 = iVar12;
    pvVar3 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar3,puVar10,(int)puVar11,iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
  }
  pcVar4 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_CM_KEYB_UP_005a8634);
  if (iVar5 == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004028f0(local_1c,'\0');
    uVar7 = 0xffffffff;
    pcVar4 = s_CM_KEYB_NUMPAD8_005a8640;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar6 = FUN_00402a00(local_1c,uVar7,'\x01');
    if ((char)uVar6 != '\0') {
      pcVar4 = s_CM_KEYB_NUMPAD8_005a8640;
      pcVar9 = local_18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_004029e0(local_1c,uVar7);
    }
    puVar11 = local_1c;
    local_4._0_1_ = 5;
    puVar10 = param_1;
    iVar5 = iVar12;
    pvVar3 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar3,puVar10,(int)puVar11,iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
  }
  pcVar4 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_CM_KEYB_DOWN_005a8650);
  if (iVar5 == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004028f0(local_1c,'\0');
    uVar7 = 0xffffffff;
    pcVar4 = s_CM_KEYB_NUMPAD2_005a8660;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar6 = FUN_00402a00(local_1c,uVar7,'\x01');
    if ((char)uVar6 != '\0') {
      pcVar4 = s_CM_KEYB_NUMPAD2_005a8660;
      pcVar9 = local_18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_18[uVar7] = '\0';
      local_14 = uVar7;
    }
    puVar11 = local_1c;
    local_4._0_1_ = 6;
    puVar10 = param_1;
    iVar5 = iVar12;
    pvVar3 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar3,puVar10,(int)puVar11,iVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004028f0(local_1c,'\x01');
  }
  pcVar4 = local_28;
  if (local_28 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_CM_KEYB_LSHIFT_005a8670);
  if (iVar5 == 0) {
    uVar7 = 0xffffffff;
    pcVar4 = s_CM_KEYB_RSHIFT_005a8680;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_18 = (char *)0x0;
    local_1c[0] = param_1._0_1_;
    local_14 = 0;
    local_10 = 0;
    FUN_00402940(local_1c,(undefined4 *)s_CM_KEYB_RSHIFT_005a8680,~uVar7 - 1);
    puVar11 = local_1c;
    local_4 = CONCAT31(local_4._1_3_,7);
    pvVar3 = (void *)FUN_004ea0c0();
    FUN_004eaaa0(pvVar3,param_1,(int)puVar11,iVar12);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


