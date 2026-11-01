
/* ==== FUN_00554f69 @ 00554f69 ==== 
 * signature: undefined __stdcall FUN_00554f69(void)
 * body: 00554f69-005553e4
 */

void FUN_00554f69(void)

{
  int iVar1;
  void *pvVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  
  FUN_0055b39c();
  iVar1 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (iVar1 == 0) {
      puVar4 = operator_new(0x10);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579564;
        uVar7 = FUN_00557cfe();
        *(undefined8 *)(puVar4 + 2) = uVar7;
      }
      if (DAT_0074dbfc == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbfc = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbfc == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbfc = DAT_0074dafc;
      }
      FUN_00557115();
    }
    FUN_0054d31e();
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (iVar1 == 0) {
      puVar4 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *puVar4 = &PTR_FUN_00579550;
        FUN_00555f45((int)puVar4);
      }
      bVar6 = DAT_0074dbf0 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf0 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbf0 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf0 = DAT_0074dafc;
      }
      FUN_005571cc();
    }
    FUN_0054d31e();
  }
  uVar5 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar5 != 0) {
    if (iVar1 == 0) {
      puVar4 = operator_new(8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579540;
      }
      if (DAT_0074dbf8 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf8 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbf8 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf8 = DAT_0074dafc;
      }
      FUN_00557283();
    }
    FUN_0054d31e();
  }
  if (uVar5 != 0) {
    if (iVar1 == 0) {
      puVar4 = operator_new(8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579530;
      }
      if (DAT_0074dbe0 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe0 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbe0 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe0 = DAT_0074dafc;
      }
      FUN_00557354();
    }
    FUN_0054d31e();
  }
  uVar5 = *(uint *)(unaff_EBP + 0xc) & 8;
  if (uVar5 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_00556d85();
        *puVar4 = &PTR_FUN_00579504;
      }
      bVar6 = DAT_0074dbf4 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf4 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbf4 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbf4 = DAT_0074dafc;
      }
      FUN_00557425();
    }
    FUN_0054d31e();
  }
  if (uVar5 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_00556d85();
        *puVar4 = &PTR_FUN_005794d8;
      }
      bVar6 = DAT_0074dbe4 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe4 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbe4 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe4 = DAT_0074dafc;
      }
      FUN_005574e8();
    }
    FUN_0054d31e();
  }
  uVar5 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar5 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        pvVar2 = *(void **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *puVar4 = &PTR_FUN_005794b8;
        FUN_00556dc5(puVar4,pvVar2);
      }
      bVar6 = DAT_0074dbe8 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe8 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbe8 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbe8 = DAT_0074dafc;
      }
      FUN_005575ab();
    }
    FUN_0054d31e();
  }
  if (uVar5 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0x14) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        puVar4[2] = 0;
        pvVar3 = *(LPVOID *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *puVar4 = &PTR_FUN_005794ac;
        FUN_00551317(puVar4,pvVar3);
      }
      bVar6 = DAT_0074dbec == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbec = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074dbec == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074dbec = DAT_0074dafc;
      }
      FUN_00557662();
    }
    FUN_0054d31e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


