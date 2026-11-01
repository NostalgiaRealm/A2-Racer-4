
/* ==== FUN_0044c090 @ 0044c090 ==== 
 * signature: undefined __stdcall FUN_0044c090(void)
 * body: 0044c090-0044c1f8
 */

void FUN_0044c090(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 in_stack_ffffffa0;
  byte *pbVar14;
  undefined1 uStack_3d;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [7];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056a4f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00472190();
  piVar2 = (int *)FUN_00472230();
  (**(code **)(*piVar2 + 4))();
  uVar6 = 0xffffffff;
  pcVar9 = s_Invulnerable_005a1344;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  pcStack_34 = (char *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  uVar3 = FUN_00402a00(&uStack_38,uVar6,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar9 = s_Invulnerable_005a1344;
    pcVar11 = pcStack_34;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_004029e0(&uStack_38,uVar6);
  }
  uStack_4 = 0;
  FUN_00472e00(auStack_28,&uStack_38,&DAT_006fb96c);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  if (pcStack_34 != (char *)0x0) {
    cVar1 = pcStack_34[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(pcStack_34 + -1);
    }
    else {
      pcStack_34[-1] = cVar1 + -1;
    }
  }
  pcStack_34 = (char *)0x0;
  uVar3 = CONCAT31((int3)((uint)in_stack_ffffffa0 >> 8),uStack_3d);
  uVar6 = 0xffffffff;
  pbVar14 = (byte *)0x0;
  uVar7 = 0;
  uStack_30 = 0;
  pcVar9 = &DAT_005a1354;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uStack_2c = 0;
  uVar4 = FUN_00402a00(&stack0xffffffa0,uVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pbVar10 = &DAT_005a1354;
    pbVar12 = pbVar14;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar12 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar12 + 1;
    }
    FUN_004029e0(&stack0xffffffa0,uVar6);
  }
  puVar13 = auStack_28;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  iVar5 = FUN_00472230();
  FUN_00473220((void *)(iVar5 + 0x30),puVar13,uVar3,pbVar14,uVar7);
  uStack_4 = 0xffffffff;
  FUN_004728d0(auStack_28);
  ExceptionList = pvStack_c;
  return;
}


