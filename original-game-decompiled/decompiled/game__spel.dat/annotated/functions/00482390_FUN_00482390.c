
/* ==== FUN_00482390 @ 00482390 ==== 
 * signature: undefined __thiscall FUN_00482390(void * this, undefined4 * param_1)
 * body: 00482390-00482952
 */

void __thiscall FUN_00482390(void *this,undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  LPCSTR pCVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_EBX;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  undefined4 uStack_94;
  undefined1 uStack_91;
  int local_8c;
  char *local_88 [3];
  undefined1 auStack_7c [4];
  undefined1 local_78 [12];
  int iStack_6c;
  void *local_68;
  void *local_64;
  undefined1 local_60 [12];
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  int iStack_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [4];
  undefined1 local_2c [12];
  int iStack_20;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056c8c2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_64 = this;
  pvVar2 = (void *)FUN_0047f4c0(this,(int)param_1);
  pCVar3 = (LPCSTR)param_1[1];
  if (pCVar3 == (LPCSTR)0x0) {
    pCVar3 = "";
  }
  local_68 = (void *)read_ini_value_setting(pCVar3,s_Length_005aa098);
  local_78[0] = uStack_91;
  FUN_004028f0(local_78,'\0');
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_005aa0bc;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_78,(undefined4 *)&DAT_005aa0bc,~uVar8 - 1);
  local_4 = 0;
  FUN_004877e0(local_1c,(int)param_1,(int)local_78);
  local_4._0_1_ = 2;
  FUN_004028f0(local_78,'\x01');
  local_8c = FUN_00483030((int)local_1c);
  local_88[0] = (char *)CONCAT31(local_88[0]._1_3_,uStack_91);
  FUN_004028f0(local_88,'\0');
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_005aa0a0;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_88,(undefined4 *)&DAT_005aa0a0,~uVar8 - 1);
  local_4._0_1_ = 3;
  FUN_004877e0((undefined1 *)&local_3c,(int)param_1,(int)local_88);
  local_4._0_1_ = 5;
  FUN_004028f0(local_88,'\x01');
  iVar4 = FUN_00485170(*(void **)((int)this + 4),(int)&local_3c);
  local_60[0] = uStack_91;
  local_40 = iVar4;
  FUN_004028f0(local_60,'\0');
  uVar8 = 0xffffffff;
  pcVar10 = s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa884;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_60,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_IniFi_005aa884,~uVar8 - 1);
  local_4._0_1_ = 6;
  local_78[0] = (undefined1)local_3c;
  FUN_004028f0(local_78,'\0');
  FUN_004093c0(local_78,&local_3c,0,0xffffffff);
  local_4._0_1_ = 7;
  puVar5 = FUN_004797e0(local_2c,s_Unknown_font_005aa8b0,(int)local_78);
  local_4._0_1_ = 8;
  FUN_00487bc0(iVar4,puVar5,(int)local_60);
  local_4._0_1_ = 7;
  FUN_004028f0(local_2c,'\x01');
  local_4._0_1_ = 6;
  FUN_004028f0(local_78,'\x01');
  local_4._0_1_ = 5;
  FUN_004028f0(local_60,'\x01');
  piVar6 = (int *)FUN_00485660(*(void **)((int)this + 4),pvVar2,param_1,local_68,iVar4,local_8c);
  FUN_00480500(this,piVar6);
  FUN_0047f880(piVar6);
  local_60[0] = uStack_91;
  FUN_004028f0(local_60,'\0');
  uVar8 = 0xffffffff;
  pcVar10 = s_Alignment_005aa0b0;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_60,(undefined4 *)s_Alignment_005aa0b0,~uVar8 - 1);
  local_4._0_1_ = 9;
  FUN_004877e0((undefined1 *)&local_50,(int)param_1,(int)local_60);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004028f0(local_60,'\x01');
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_007126d4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = FUN_0040fc80(&local_50,0,local_48,&DAT_007126d4,~uVar8 - 1);
  if (uVar8 != 0) {
    uVar7 = FUN_004832b0(&local_50);
    (**(code **)(*piVar6 + 0x40))(uVar7);
  }
  local_78[0] = uStack_91;
  FUN_004028f0(local_78,'\0');
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_005aa0a8;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_78,(undefined4 *)&DAT_005aa0a8,~uVar8 - 1);
  local_4._0_1_ = 0xc;
  puVar5 = FUN_004877e0(local_2c,(int)param_1,(int)local_78);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  (**(code **)(*piVar6 + 0x48))(puVar5);
  pcStack_8._0_1_ = 0xc;
  FUN_004028f0(auStack_30,'\x01');
  pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,0xb);
  FUN_004028f0(auStack_7c,'\x01');
  local_8c = CONCAT31(local_8c._1_3_,(char)((uint)unaff_EBX >> 0x18));
  FUN_004028f0(&local_8c,'\0');
  uVar8 = 0xffffffff;
  pcVar10 = s_MaxCharWidth_005aa0c4;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 1;
  uVar7 = FUN_00402a00(&local_8c,uVar8,'\x01');
  if ((char)uVar7 != '\0') {
    pcVar10 = s_MaxCharWidth_005aa0c4;
    pcVar11 = local_88[0];
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(&local_8c,uVar8);
    this = local_68;
  }
  pcStack_8._0_1_ = 0xe;
  puVar5 = FUN_004877e0(auStack_30,(int)param_1,(int)&local_8c);
  uVar8 = 0xffffffff;
  pcStack_8._0_1_ = 0xf;
  pcVar10 = &DAT_007126d8;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = FUN_0040fc80(puVar5,0,*(uint *)(puVar5 + 8),&DAT_007126d8,~uVar8 - 1);
  pcStack_8._0_1_ = 0xe;
  FUN_004028f0(auStack_30,'\x01');
  pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,0xb);
  FUN_004028f0(&local_8c,'\x01');
  if (uVar8 != 0) {
    local_8c = CONCAT31(local_8c._1_3_,uVar8 != 0);
    FUN_004028f0(&local_8c,'\0');
    uVar8 = 0xffffffff;
    pcVar10 = s_MaxCharWidth_005aa0c4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    uVar7 = FUN_00402a00(&local_8c,uVar8,'\x01');
    if ((char)uVar7 != '\0') {
      pcVar10 = s_MaxCharWidth_005aa0c4;
      pcVar11 = local_88[0];
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_004029e0(&local_8c,uVar8);
      this = local_68;
    }
    pcStack_8._0_1_ = 0x10;
    fVar12 = FUN_00487640((int)param_1,(int)&local_8c);
    pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,0xb);
    FUN_004028f0(&local_8c,'\x01');
    fVar12 = (float10)(float)fVar12;
  }
  else {
    fVar12 = FUN_0047e6d0(iStack_44);
  }
  (**(code **)(*piVar6 + 0x34))
            ((float)(((float10)iStack_6c * fVar12) / (float10)*(float *)((int)this + 0x18)));
  (**(code **)(*piVar6 + 0x4c))();
  if (iStack_54 != 0) {
    cVar1 = *(char *)(iStack_54 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(iStack_54 + -1));
    }
    else {
      *(char *)(iStack_54 + -1) = cVar1 + -1;
    }
  }
  iStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  if (local_40 != 0) {
    cVar1 = *(char *)(local_40 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(local_40 + -1));
    }
    else {
      *(char *)(local_40 + -1) = cVar1 + -1;
    }
  }
  local_40 = 0;
  local_3c = 0;
  uStack_38 = 0;
  if (iStack_20 != 0) {
    cVar1 = *(char *)(iStack_20 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_20 + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_0054b339((LPVOID)(iStack_20 + -1));
  }
  ExceptionList = pvStack_14;
  return;
}


