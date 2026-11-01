
/* ==== FUN_00487f20 @ 00487f20 ==== 
 * signature: undefined __thiscall FUN_00487f20(void * this, undefined4 param_1)
 * body: 00487f20-004881e2;0048821b-00488237
 */

void __thiscall FUN_00487f20(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_4c [8];
  undefined1 local_44 [24];
  undefined4 local_2c;
  char *local_28;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0056d4ca;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_2c._0_1_ = param_1._3_1_;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004028f0(&local_2c,'\0');
  *(undefined4 *)((int)this + 0x94) = param_1;
  local_8 = 1;
  FUN_004840c0((int)this);
  FUN_00485d20(this,DAT_006fb8d0 != 0);
  FUN_00485d40(this,DAT_006fb940 != 0);
  switch(DAT_006fba5c) {
  case 0:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay0_ini_005ab3c4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay0_ini_005ab3c4;
    break;
  case 1:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay1_ini_005ab3d4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay1_ini_005ab3d4;
    pcVar6 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    goto LAB_00488181;
  case 2:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay2_ini_005ab3e4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay2_ini_005ab3e4;
    break;
  case 3:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay3_ini_005ab3f4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay3_ini_005ab3f4;
    pcVar6 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    goto LAB_00488181;
  case 4:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay4_ini_005ab404;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay4_ini_005ab404;
    break;
  case 5:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay5_ini_005ab414;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay5_ini_005ab414;
    pcVar6 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    goto LAB_00488181;
  case 6:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay6_ini_005ab424;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay6_ini_005ab424;
    break;
  case 7:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay7_ini_005ab434;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay7_ini_005ab434;
    pcVar6 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    goto LAB_00488181;
  default:
    uVar3 = 0xffffffff;
    pcVar5 = s_overlay5_ini_005ab444;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uVar2 = FUN_00402a00(&local_2c,uVar3,'\x01');
    if ((char)uVar2 == '\0') goto LAB_0048818f;
    pcVar5 = s_overlay5_ini_005ab444;
  }
  pcVar6 = local_28;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
LAB_00488181:
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_004029e0(&local_2c,uVar3);
LAB_0048818f:
  FUN_0047ebb0(local_4c,local_18,&local_2c);
  local_8._0_1_ = 2;
  FUN_0047ed10(local_4c);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004028f0(local_44,'\x01');
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_10;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_10;
  return;
}


