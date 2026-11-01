
/* ==== FUN_004940e0 @ 004940e0 ==== 
 * signature: undefined __fastcall FUN_004940e0(int param_1)
 * body: 004940e0-00494477
 */

void __fastcall FUN_004940e0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 local_69;
  int local_68;
  int *local_64;
  int local_60;
  undefined1 local_5c [4];
  undefined4 *puStack_58;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e152;
  pvStack_c = ExceptionList;
  iVar9 = 0xfffffff;
  local_68 = 0xfffffff;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_5c,'\0');
  local_4c = CONCAT31(local_4c._1_3_,local_69);
  local_4 = 0;
  FUN_004028f0(&local_4c,'\0');
  local_4._0_1_ = 1;
  if (0 < DAT_005d2ab0) {
    piVar3 = &DAT_005973c4;
    iVar8 = DAT_005d2ab0;
    do {
      if ((piVar3[3] != 0) && (iVar2 = *piVar3, iVar2 < iVar9)) {
        iVar9 = iVar2;
        local_68 = iVar2;
      }
      piVar3 = piVar3 + 0x16;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (DAT_006fbaa0 < iVar9) {
    local_68 = DAT_006fbaa0;
    iVar9 = DAT_006fbaa0;
  }
  local_60 = 0;
  if (0 < DAT_005d2ab0) {
    local_64 = &DAT_005973c4;
    do {
      if (local_64[3] == 0) {
        uVar6 = 0xffffffff;
        pcVar11 = (char *)&DAT_005ad4fc;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6 - 1;
        uVar5 = FUN_00402a00(local_5c,uVar6,'\x01');
        if ((char)uVar5 != '\0') {
          puVar10 = &DAT_005ad4fc;
          puVar12 = puStack_58;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          FUN_004029e0(local_5c,uVar6);
          iVar9 = local_68;
        }
      }
      else {
        iVar8 = *local_64;
        if (iVar8 == iVar9) {
          puVar4 = FUN_00493f50(local_3c,iVar8);
          local_4._0_1_ = 2;
          FUN_004093c0(local_5c,puVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(local_3c,'\x01');
        }
        else {
          puVar4 = FUN_00493f50(auStack_2c,iVar8 - iVar9);
          local_4._0_1_ = 3;
          FUN_004093c0(&local_4c,puVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(auStack_2c,'\x01');
          puVar4 = FUN_004797e0(local_1c,&DAT_005ad4f8,(int)&local_4c);
          local_4._0_1_ = 4;
          FUN_004093c0(local_5c,puVar4,0,0xffffffff);
          local_4._0_1_ = 1;
          FUN_004028f0(local_1c,'\x01');
        }
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + local_64[1] * 4) + 0x48))
                (local_5c);
      local_60 = local_60 + 1;
      local_64 = local_64 + 0x16;
    } while (local_60 < DAT_005d2ab0);
  }
  if (DAT_006fbaa0 == iVar9) {
    puVar4 = FUN_00493f50(local_1c,DAT_006fbaa0);
    local_4._0_1_ = 5;
    FUN_004093c0(local_5c,puVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004028f0(local_1c,'\x01');
  }
  else {
    puVar4 = FUN_00493f50(local_1c,DAT_006fbaa0 - iVar9);
    local_4._0_1_ = 6;
    FUN_004093c0(&local_4c,puVar4,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004028f0(local_1c,'\x01');
    puVar4 = FUN_004797e0(local_1c,&DAT_005ad504,(int)&local_4c);
    local_4._0_1_ = 7;
    FUN_004093c0(local_5c,puVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x48))
            (local_5c);
  FUN_004a67f0(0x7128b0);
  uVar13 = __ftol();
  if ((int)((longlong)((ulonglong)(uint)((int)uVar13 >> 0x1f) << 0x20 | uVar13 & 0xffffffff) % 600)
      < 300) {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x20))(1);
  }
  else {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + DAT_006fbaa4 * 4) + 0x20))(0);
  }
  if (iStack_50 != 0) {
    cVar1 = *(char *)(iStack_50 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(iStack_50 + -1));
    }
    else {
      *(char *)(iStack_50 + -1) = cVar1 + -1;
    }
  }
  iStack_50 = 0;
  local_4c = 0;
  uStack_48 = 0;
  if (local_60 != 0) {
    cVar1 = *(char *)(local_60 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_60 + -1) = cVar1 + -1;
      ExceptionList = pvStack_14;
      return;
    }
    FUN_0054b339((LPVOID)(local_60 + -1));
  }
  ExceptionList = pvStack_14;
  return;
}


