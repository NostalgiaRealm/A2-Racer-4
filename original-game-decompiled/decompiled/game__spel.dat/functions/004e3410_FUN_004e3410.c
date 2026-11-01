
/* ==== FUN_004e3410 @ 004e3410 ==== 
 * signature: undefined __thiscall FUN_004e3410(void * this, void * param_1)
 * body: 004e3410-004e3654
 */

void __thiscall FUN_004e3410(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iStack_5c;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [16];
  int aiStack_1c [3];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00571808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)this + 0x14))();
  if (*(int *)(iVar2 + 4) == 1) {
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_005b74f8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar3 = FUN_00402a00(param_1,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar9 = (undefined4 *)&DAT_005b74f8;
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
    piVar4 = (int *)(**(code **)(*(int *)this + 0x10))();
    pvVar5 = (void *)(**(code **)(*piVar4 + 4))(auStack_2c);
    pcStack_8 = (code *)0x0;
    FUN_004093c0(param_1,pvVar5,0,0xffffffff);
    pcStack_8 = (code *)0xffffffff;
    FUN_004028f0(auStack_30,'\x01');
  }
  else {
    uVar7 = 0xffffffff;
    pcVar10 = (char *)&DAT_005b74f4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar3 = FUN_00402a00(param_1,uVar7,'\x01');
    if ((char)uVar3 != '\0') {
      puVar9 = &DAT_005b74f4;
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
      *(uint *)((int)param_1 + 8) = uVar7;
      *(undefined1 *)(*(int *)((int)param_1 + 4) + uVar7) = 0;
    }
    piVar4 = (int *)(**(code **)(*(int *)this + 0x10))();
    iVar2 = (**(code **)(*piVar4 + 4))(aiStack_1c);
    pcStack_8 = (code *)0x1;
    piVar4 = (int *)(**(code **)(*(int *)this + 0x14))();
    puVar6 = (undefined1 *)(**(code **)(*piVar4 + 4))(auStack_40);
    pcStack_8._0_1_ = 2;
    puVar6 = FUN_004796b0(auStack_50,puVar6,&DAT_005b7258);
    pcStack_8._0_1_ = 3;
    puVar6 = FUN_0047c9a0(&stack0xffffffa0,puVar6,iVar2);
    pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,4);
    FUN_004093c0(param_1,puVar6,0,0xffffffff);
    if (iStack_5c != 0) {
      cVar1 = *(char *)(iStack_5c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_5c + -1));
      }
      else {
        *(char *)(iStack_5c + -1) = cVar1 + -1;
      }
    }
    if (iStack_4c != 0) {
      cVar1 = *(char *)(iStack_4c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_4c + -1));
      }
      else {
        *(char *)(iStack_4c + -1) = cVar1 + -1;
      }
    }
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    if (aiStack_1c[0] != 0) {
      cVar1 = *(char *)(aiStack_1c[0] + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(aiStack_1c[0] + -1));
      }
      else {
        *(char *)(aiStack_1c[0] + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


