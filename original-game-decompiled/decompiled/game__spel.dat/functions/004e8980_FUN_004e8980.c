
/* ==== FUN_004e8980 @ 004e8980 ==== 
 * signature: undefined __thiscall FUN_004e8980(void * this, void * param_1, void * param_2)
 * body: 004e8980-004e8bc6
 */

void __thiscall FUN_004e8980(void *this,void *param_1,void *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 auStack_7c [4];
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int aiStack_68 [4];
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571ec8;
  pvStack_c = ExceptionList;
  uVar7 = 0xffffffff;
  pcVar10 = &DAT_005b7784;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00402a00(param_1,uVar7,'\x01');
  if ((char)uVar2 != '\0') {
    puVar9 = (undefined4 *)&DAT_005b7784;
    puVar11 = *(undefined4 **)((int)param_1 + 4);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_004029e0(param_1,uVar7);
  }
  piVar3 = (int *)(**(code **)(*(int *)this + 0x10))();
  iVar4 = (**(code **)(*piVar3 + 4))(auStack_1c);
  pcStack_8 = (code *)0x0;
  iVar5 = FUN_004e8200(aiStack_68 + 2,*(int *)((int)this + 0x10));
  piVar3 = (int *)(**(code **)(*(int *)this + 0x14))();
  puVar6 = (undefined1 *)(**(code **)(*piVar3 + 4))(aiStack_68);
  uStack_4._0_1_ = 2;
  puVar6 = FUN_004796b0(auStack_7c,puVar6,&DAT_005b74a0);
  uStack_4._0_1_ = 3;
  puVar6 = FUN_0047c9a0(auStack_2c,puVar6,iVar5);
  uStack_4._0_1_ = 4;
  puVar6 = FUN_004796b0(auStack_3c,puVar6,(char *)&DAT_005b36c4);
  uStack_4._0_1_ = 5;
  puVar6 = FUN_0047c9a0(auStack_4c,puVar6,iVar4);
  uStack_4._0_1_ = 6;
  FUN_004093c0(param_2,puVar6,0,0xffffffff);
  uStack_4._0_1_ = 5;
  FUN_004028f0(auStack_4c,'\x01');
  uStack_4._0_1_ = 4;
  FUN_004028f0(auStack_3c,'\x01');
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  FUN_004028f0(auStack_2c,'\x01');
  if (iStack_78 != 0) {
    cVar1 = *(char *)(iStack_78 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iStack_78 + -1));
    }
    else {
      *(char *)(iStack_78 + -1) = cVar1 + -1;
    }
  }
  iStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  if (aiStack_68[0] != 0) {
    cVar1 = *(char *)(aiStack_68[0] + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(aiStack_68[0] + -1));
    }
    else {
      *(char *)(aiStack_68[0] + -1) = cVar1 + -1;
    }
  }
  aiStack_68[0] = 0;
  aiStack_68[1] = 0;
  aiStack_68[2] = 0;
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
  uStack_54 = 0;
  uStack_50 = 0;
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_0054b339((char *)(iStack_18 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}


