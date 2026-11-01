
/* ==== FUN_004840c0 @ 004840c0 ==== 
 * signature: undefined __fastcall FUN_004840c0(int param_1)
 * body: 004840c0-0048435d
 */

void __fastcall FUN_004840c0(int param_1)

{
  char cVar1;
  void *this;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_75;
  undefined4 local_6c;
  char *local_68;
  uint local_64;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056cc97;
  local_c = ExceptionList;
  bVar7 = false;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_6c = 0;
  local_68 = (char *)0x0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_64 = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f400000;
  this = operator_new(0x84);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_6c = CONCAT31(local_6c._1_3_,local_75);
    FUN_004028f0(&local_6c,'\0');
    uVar4 = 0xffffffff;
    pcVar8 = s_Screen_005aabb0;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar2 = FUN_00402a00(&local_6c,uVar4,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar8 = s_Screen_005aabb0;
      pcVar9 = local_68;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_68[uVar4] = '\0';
      local_64 = uVar4;
    }
    bVar7 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_0047beb0(this,&local_6c);
  }
  *(undefined4 **)(param_1 + 4) = puVar3;
  local_4 = 0xffffffff;
  if (bVar7) {
    FUN_004028f0(&local_6c,'\x01');
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uVar4 = 0xffffffff;
  pcVar8 = s_C__Work_A2IV_Game_prog_Hud_Manag_005aabb8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_5c,(undefined4 *)s_C__Work_A2IV_Game_prog_Hud_Manag_005aabb8,~uVar4 - 1);
  local_4 = 3;
  local_6c = CONCAT31(local_6c._1_3_,local_75);
  FUN_004028f0(&local_6c,'\0');
  uVar4 = 0xffffffff;
  pcVar8 = s_Unable_to_create_overlay_top_005aabe0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar2 = FUN_00402a00(&local_6c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar8 = s_Unable_to_create_overlay_top_005aabe0;
    pcVar9 = local_68;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_68[uVar4] = '\0';
    local_64 = uVar4;
  }
  local_4._0_1_ = 4;
  FUN_00487bc0(*(int *)(param_1 + 4),(undefined1 *)&local_6c,(int)local_5c);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004028f0(&local_6c,'\x01');
  local_4 = 0xffffffff;
  if (local_58 != 0) {
    cVar1 = *(char *)(local_58 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_58 + -1));
    }
    else {
      *(char *)(local_58 + -1) = cVar1 + -1;
    }
  }
  puVar3 = (undefined4 *)FUN_004b39d0(local_4c,0.99,10000.0,1.5707964);
  puVar10 = (undefined4 *)(param_1 + 0x48);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  ExceptionList = local_c;
  return;
}


