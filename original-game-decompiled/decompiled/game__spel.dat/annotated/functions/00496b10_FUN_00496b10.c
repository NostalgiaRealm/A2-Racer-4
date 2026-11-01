
/* ==== FUN_00496b10 @ 00496b10 ==== 
 * signature: undefined __fastcall FUN_00496b10(int param_1)
 * body: 00496b10-00496dc3
 */

void __fastcall FUN_00496b10(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined4 uStack_130;
  undefined1 local_12c [4];
  undefined1 auStack_128 [4];
  int aiStack_124 [2];
  undefined1 local_11c [12];
  byte abStack_110 [4];
  byte local_10c [244];
  void *pvStack_18;
  undefined1 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056e3c3;
  pvStack_c = ExceptionList;
  local_11c[0] = uStack_130._3_1_;
  ExceptionList = &pvStack_c;
  FUN_004028f0(local_11c,'\0');
  local_4 = 0;
  iVar3 = FUN_00458b90(0x27);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006fd14c + iVar3 * 0x100;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar7 = (byte *)(pcVar9 + -uVar5);
  pbVar10 = local_10c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar10 = pbVar10 + 1;
  }
  iVar3 = -1;
  pbVar7 = local_10c;
  do {
    pbVar10 = pbVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pbVar10 = pbVar7 + 1;
    bVar2 = *pbVar7;
    pbVar7 = pbVar10;
  } while (bVar2 != 0);
  *(undefined4 *)(pbVar10 + -1) = DAT_005adc0c;
  *(undefined2 *)(pbVar10 + 3) = DAT_005adc10;
  pbVar10[5] = DAT_005adc12;
  puVar4 = FUN_0049df90(local_12c,local_10c);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x48))(puVar4);
  pcStack_8 = (code *)((uint)pcStack_8 & 0xffffff00);
  FUN_004028f0(&uStack_130,'\x01');
  iVar3 = FUN_00458b90(0x26);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006fd14c + iVar3 * 0x100;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar7 = (byte *)(pcVar9 + -uVar5);
  pbVar10 = abStack_110;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar10 = pbVar10 + 1;
  }
  iVar3 = -1;
  pbVar7 = abStack_110;
  do {
    pbVar10 = pbVar7;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pbVar10 = pbVar7 + 1;
    bVar2 = *pbVar7;
    pbVar7 = pbVar10;
  } while (bVar2 != 0);
  *(undefined4 *)(pbVar10 + -1) = DAT_005adc14;
  *(undefined2 *)(pbVar10 + 3) = DAT_005adc18;
  pbVar10[5] = DAT_005adc1a;
  puVar4 = FUN_0049df90((undefined1 *)&uStack_130,abStack_110);
  pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,2);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x48))(puVar4);
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  if (uStack_130 != 0) {
    cVar1 = *(char *)(uStack_130 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(uStack_130 + -1));
    }
    else {
      *(char *)(uStack_130 + -1) = cVar1 + -1;
    }
  }
  iVar3 = FUN_00448470(0);
  puVar4 = FUN_00497230(&stack0xfffffecc,iVar3);
  pvStack_c._0_1_ = 3;
  FUN_004093c0(aiStack_124,puVar4,0,0xffffffff);
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  if (uStack_130 != 0) {
    cVar1 = *(char *)(uStack_130 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(uStack_130 + -1));
    }
    else {
      *(char *)(uStack_130 + -1) = cVar1 + -1;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x48))(aiStack_124);
  if ((&DAT_006fa61c)[DAT_006fb898 * 0x25] == 1) {
    iVar3 = FUN_00448470(0xb);
    puVar4 = FUN_00497230(&stack0xfffffec8,iVar3);
    uStack_10 = 4;
    FUN_004093c0(auStack_128,puVar4,0,0xffffffff);
    uStack_10 = 0;
    if (unaff_EBX != 0) {
      cVar1 = *(char *)(unaff_EBX + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(unaff_EBX + -1));
      }
      else {
        *(char *)(unaff_EBX + -1) = cVar1 + -1;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))(auStack_128);
  }
  if (aiStack_124[0] != 0) {
    cVar1 = *(char *)(aiStack_124[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(aiStack_124[0] + -1));
    }
    else {
      *(char *)(aiStack_124[0] + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_18;
  return;
}


