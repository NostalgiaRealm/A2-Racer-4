
/* ==== FUN_004807d0 @ 004807d0 ==== 
 * signature: undefined __thiscall FUN_004807d0(void * this, int * param_1)
 * body: 004807d0-00480ac6
 */

void __thiscall FUN_004807d0(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  undefined1 auStack_4c [4];
  char *pcStack_48;
  undefined1 auStack_3c [4];
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056c3a2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)(**(code **)(*param_1 + 0x1c))();
  if (piVar3 != (int *)0x0) {
    param_1._0_1_ = SUB41(piVar3,0);
    auStack_4c[0] = param_1._0_1_;
    FUN_004028f0(auStack_4c,'\0');
    uVar7 = 0xffffffff;
    pcVar9 = s_Width_005aa064;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar4 = FUN_00402a00(auStack_4c,uVar7,'\x01');
    if ((char)uVar4 != '\0') {
      pcVar9 = s_Width_005aa064;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcStack_48 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcStack_48 = pcStack_48 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcStack_48 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcStack_48 = pcStack_48 + 1;
      }
      FUN_004029e0(auStack_4c,uVar7);
    }
    puVar6 = auStack_4c;
    uStack_4 = 0;
    iVar5 = FUN_0047bc10((int)piVar2);
    FUN_004877e0(auStack_2c,iVar5,(int)puVar6);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    FUN_004028f0(auStack_4c,'\x01');
    if (iStack_24 != 0) {
      auStack_3c[0] = param_1._0_1_;
      FUN_004028f0(auStack_3c,'\0');
      uVar7 = 0xffffffff;
      pcVar9 = s_Width_005aa064;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      uVar4 = FUN_00402a00(auStack_3c,uVar7,'\x01');
      if ((char)uVar4 != '\0') {
        pcVar9 = s_Width_005aa064;
        pcVar10 = pcStack_38;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        FUN_004029e0(auStack_3c,uVar7);
      }
      puVar6 = auStack_3c;
      uStack_4._0_1_ = 3;
      iVar5 = FUN_0047bc10((int)piVar2);
      fVar11 = FUN_00487640(iVar5,(int)puVar6);
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      FUN_004028f0(auStack_3c,'\x01');
      (**(code **)(*piVar3 + 0x34))((float)fVar11 / *(float *)((int)this + 0x18));
    }
    auStack_3c[0] = param_1._0_1_;
    FUN_004028f0(auStack_3c,'\0');
    uVar7 = 0xffffffff;
    pcVar9 = s_Height_005aa06c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    uVar4 = FUN_00402a00(auStack_3c,uVar7,'\x01');
    if ((char)uVar4 != '\0') {
      pcVar9 = s_Height_005aa06c;
      pcVar10 = pcStack_38;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_004029e0(auStack_3c,uVar7);
    }
    puVar6 = auStack_3c;
    uStack_4._0_1_ = 4;
    iVar5 = FUN_0047bc10((int)piVar2);
    puVar6 = FUN_004877e0(auStack_1c,iVar5,(int)puVar6);
    uStack_4._0_1_ = 5;
    FUN_004093c0(auStack_2c,puVar6,0,0xffffffff);
    uStack_4._0_1_ = 4;
    FUN_004028f0(auStack_1c,'\x01');
    uStack_4._0_1_ = 2;
    FUN_004028f0(auStack_3c,'\x01');
    if (iStack_24 != 0) {
      auStack_3c[0] = param_1._0_1_;
      uVar7 = 0xffffffff;
      pcStack_38 = (char *)0x0;
      uStack_34 = 0;
      uStack_30 = 0;
      pcVar9 = s_Height_005aa06c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00402940(auStack_3c,(undefined4 *)s_Height_005aa06c,~uVar7 - 1);
      puVar6 = auStack_3c;
      uStack_4._0_1_ = 6;
      iVar5 = FUN_0047bc10((int)piVar2);
      fVar11 = FUN_00487640(iVar5,(int)puVar6);
      uStack_4._0_1_ = 2;
      if (pcStack_38 != (char *)0x0) {
        cVar1 = pcStack_38[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(pcStack_38 + -1);
        }
        else {
          pcStack_38[-1] = cVar1 + -1;
        }
      }
      (**(code **)(*piVar3 + 0x38))((float)fVar11 / *(float *)((int)this + 0x1c));
    }
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      FUN_0054b339((LPVOID)(iStack_28 + -1));
    }
  }
  ExceptionList = pvStack_c;
  return;
}


