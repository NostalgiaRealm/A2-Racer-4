
/* ==== FUN_004ac020 @ 004ac020 ==== 
 * signature: undefined __cdecl FUN_004ac020(int param_1, void * param_2)
 * body: 004ac020-004ac30a
 */

void __cdecl FUN_004ac020(int param_1,void *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_f0 [4];
  char *local_ec;
  uint local_e8;
  undefined1 local_e0 [4];
  char *local_dc;
  undefined4 local_d0;
  int local_cc [5];
  undefined4 local_b8;
  undefined4 *local_b0;
  int iStack_58;
  undefined4 local_54;
  char *local_50;
  int local_38;
  undefined1 local_1c;
  void *local_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f4dc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a1430(param_1);
  FUN_004028f0(local_e0,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_MapObject_005af204;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_e0,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_MapObject_005af204;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_dc = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_dc = local_dc + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_dc = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_dc = local_dc + 1;
    }
    FUN_004029e0(local_e0,uVar4);
  }
  local_4 = 0;
  piVar3 = (int *)FUN_004a43d0(&DAT_00715f58,(int)local_e0);
  local_4 = 0xffffffff;
  FUN_004028f0(local_e0,'\x01');
  FUN_004a0210(local_cc + 2);
  local_4 = 1;
  FUN_004028f0(local_f0,'\0');
  uVar4 = 0xffffffff;
  pcVar6 = s_ChunkMaterial_005b04c4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(local_f0,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar6 = s_ChunkMaterial_005b04c4;
    pcVar7 = local_ec;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_ec[uVar4] = '\0';
    local_e8 = uVar4;
  }
  local_4._0_1_ = 2;
  local_b0 = (undefined4 *)FUN_004a4430(&DAT_00715f58,(int)local_f0);
  local_4._0_1_ = 1;
  FUN_004028f0(local_f0,'\x01');
  if (local_b0 == (undefined4 *)0x0) {
    FUN_004028f0(local_f0,'\0');
    uVar4 = 0xffffffff;
    pcVar6 = s_ChunkMaterial_005b04c4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(local_f0,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar6 = s_ChunkMaterial_005b04c4;
      pcVar7 = local_ec;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_ec[uVar4] = '\0';
      local_e8 = uVar4;
    }
    local_4._0_1_ = 3;
    local_b0 = FUN_004a4510(&DAT_00715f58,local_f0,1.0,0.1);
    local_4._0_1_ = 1;
    FUN_004028f0(local_f0,'\x01');
  }
  local_b8 = 1;
  local_1c = 1;
  FUN_004093c0(&local_54,param_2,0,0xffffffff);
  if (local_50 == (char *)0x0) {
    local_50 = "";
  }
  FUN_004f5480(local_cc + 2,local_50);
  FUN_004a02a0(local_cc + 2,DAT_00715b08);
  local_38 = param_1;
  local_14 = (void *)0xffffffff;
  local_d0 = 0;
  local_cc[0] = 0;
  local_cc[1] = 0;
  (**(code **)(*piVar3 + 4))(local_cc + 2,&local_d0);
  pvStack_c = (void *)0xffffffff;
  if (iStack_58 != 0) {
    cVar1 = *(char *)(iStack_58 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_58 + -1));
    }
    else {
      *(char *)(iStack_58 + -1) = cVar1 + -1;
    }
  }
  iStack_58 = 0;
  local_54 = 0;
  local_50 = (char *)0x0;
  FUN_004f5510(local_cc);
  ExceptionList = local_14;
  return;
}


