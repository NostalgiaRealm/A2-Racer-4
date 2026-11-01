
/* ==== FUN_0041db90 @ 0041db90 ==== 
 * signature: undefined __stdcall FUN_0041db90(void * param_1, int param_2, undefined4 param_3, int param_4)
 * body: 0041db90-0041e068
 */

void FUN_0041db90(void *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float *pfVar12;
  uint local_54;
  undefined1 local_4c [4];
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [4];
  char *local_28;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569e52;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041d9b0();
  FUN_0041d9b0();
  FUN_0041d9b0();
  local_2c[0] = param_1._0_1_;
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_keyboard0_005949fc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_keyboard0_005949fc;
    pcVar8 = local_28;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_2c,uVar4);
  }
  local_4 = 0;
  local_3c[0] = param_1._0_1_;
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_00594a08;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = (char *)&DAT_00594a08;
    pcVar8 = local_38;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_3c,uVar4);
  }
  puVar11 = local_2c;
  pfVar12 = (float *)0x0;
  puVar10 = local_3c;
  local_4._0_1_ = 1;
  pvVar3 = (void *)FUN_004ea0c0();
  fVar9 = (float10)FUN_004eb4d0(pvVar3,(int)puVar10,(int)puVar11,pfVar12);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004028f0(local_3c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_2c,'\x01');
  if ((float)fVar9 != 0.0) {
    FUN_0041db70(param_1,0,0);
  }
  local_54 = (uint)((float)fVar9 != 0.0);
  local_3c[0] = param_1._0_1_;
  FUN_004028f0(local_3c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_keyboard0_00594a14;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_3c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_keyboard0_00594a14;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_38 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_38 = local_38 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_38 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_38 = local_38 + 1;
    }
    FUN_004029e0(local_3c,uVar4);
  }
  local_4 = 2;
  local_2c[0] = param_1._0_1_;
  FUN_004028f0(local_2c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_00594a20;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_2c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = (char *)&DAT_00594a20;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_28 = local_28 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_28 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_28 = local_28 + 1;
    }
    FUN_004029e0(local_2c,uVar4);
  }
  puVar11 = local_3c;
  pfVar12 = (float *)0x0;
  puVar10 = local_2c;
  local_4._0_1_ = 3;
  pvVar3 = (void *)FUN_004ea0c0();
  fVar9 = (float10)FUN_004eb4d0(pvVar3,(int)puVar10,(int)puVar11,pfVar12);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004028f0(local_2c,'\x01');
  local_4 = 0xffffffff;
  FUN_004028f0(local_3c,'\x01');
  if ((float)fVar9 != 0.0) {
    FUN_0041db70(param_1,1,0);
    local_54 = local_54 | 2;
  }
  local_4c[0] = param_1._0_1_;
  FUN_004028f0(local_4c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_keyboard0_00594a2c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_4c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_keyboard0_00594a2c;
    pcVar8 = local_48;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004029e0(local_4c,uVar4);
  }
  local_4 = 4;
  local_1c[0] = param_1._0_1_;
  FUN_004028f0(local_1c,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = (char *)&DAT_00594a38;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    puVar7 = &DAT_00594a38;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_18 = *puVar7;
      puVar7 = puVar7 + 1;
      local_18 = local_18 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)local_18 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      local_18 = (undefined4 *)((int)local_18 + 1);
    }
    FUN_004029e0(local_1c,uVar4);
  }
  puVar11 = local_4c;
  pfVar12 = (float *)0x0;
  puVar10 = local_1c;
  local_4._0_1_ = 5;
  pvVar3 = (void *)FUN_004ea0c0();
  fVar9 = (float10)FUN_004eb4d0(pvVar3,(int)puVar10,(int)puVar11,pfVar12);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004028f0(local_1c,'\x01');
  local_4 = 0xffffffff;
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_48 + -1);
    }
    else {
      local_48[-1] = cVar1 + -1;
    }
  }
  local_48 = (char *)0x0;
  local_44 = 0;
  local_40 = 0;
  if ((float)fVar9 != 0.0) {
    FUN_0041db70(param_1,2,0);
    local_54 = local_54 | 4;
  }
  FUN_0041d8b0(param_1,param_2,local_54,param_4);
  ExceptionList = local_c;
  return;
}


