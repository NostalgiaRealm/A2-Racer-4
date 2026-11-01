
/* ==== FUN_0054f087 @ 0054f087 ==== 
 * signature: undefined __stdcall FUN_0054f087(void)
 * body: 0054f087-0054f7c3
 */

void FUN_0054f087(void)

{
  void *pvVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  bool bVar6;
  undefined8 uVar7;
  
  FUN_0055b39c();
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x14) = uVar3;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_005792e4;
        puVar5 = (undefined4 *)FUN_0054ec38((undefined4 *)(unaff_EBP + -0x28));
        puVar4[2] = *puVar5;
        puVar4[3] = puVar5[1];
        puVar4[4] = puVar5[2];
        puVar4[5] = puVar5[3];
      }
      if (DAT_0074db60 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db60 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db60 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db60 = DAT_0074dafc;
      }
      FUN_00553a7f();
    }
    FUN_0054d31e();
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 8;
  *(uint *)(unaff_EBP + -0x10) = uVar3;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_005792b8;
      }
      if (DAT_0074db64 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db64 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db64 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db64 = DAT_0074dafc;
      }
      FUN_00553b36();
    }
    FUN_0054d31e();
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579298;
      }
      if (DAT_0074db54 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db54 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db54 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db54 = DAT_0074dafc;
      }
      FUN_00553c07();
    }
    FUN_0054d31e();
    if (uVar3 != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar4 = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[1] = 0;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          *puVar4 = &PTR_FUN_0057927c;
          FUN_0055213d((int)puVar4);
        }
        bVar6 = DAT_0074db44 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (bVar6) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db44 = DAT_0074dafc;
        }
      }
      else {
        if (DAT_0074db44 == 0) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db44 = DAT_0074dafc;
        }
        FUN_00553cd8();
      }
      FUN_0054d31e();
    }
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x10);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579268;
        uVar7 = FUN_00557cfe();
        *(undefined8 *)(puVar4 + 2) = uVar7;
      }
      if (DAT_0074db58 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db58 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db58 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db58 = DAT_0074dafc;
      }
      FUN_00553d8f();
    }
    FUN_0054d31e();
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        *puVar4 = &PTR_FUN_00579254;
        FUN_0055219a((int)puVar4);
      }
      bVar6 = DAT_0074db4c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db4c = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db4c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db4c = DAT_0074dafc;
      }
      FUN_00553e46();
    }
    FUN_0054d31e();
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579244;
      }
      if (DAT_0074db48 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db48 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db48 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db48 = DAT_0074dafc;
      }
      FUN_00553efd();
    }
    FUN_0054d31e();
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579234;
      }
      if (DAT_0074db74 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db74 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db74 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db74 = DAT_0074dafc;
      }
      FUN_00553fce();
    }
    FUN_0054d31e();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_005530c8();
        *puVar4 = &PTR_FUN_00579208;
      }
      bVar6 = DAT_0074db70 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db70 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db70 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db70 = DAT_0074dafc;
      }
      FUN_0055409f();
    }
    FUN_0054d31e();
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar4 = operator_new(0x2c);
        *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (puVar4 != (undefined4 *)0x0) {
          FUN_005530c8();
          *puVar4 = &PTR_FUN_005791dc;
        }
        bVar6 = DAT_0074db50 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (bVar6) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db50 = DAT_0074dafc;
        }
      }
      else {
        if (DAT_0074db50 == 0) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db50 = DAT_0074dafc;
        }
        FUN_00554162();
      }
      FUN_0054d31e();
    }
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        pvVar1 = *(void **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        *puVar4 = &PTR_FUN_005791bc;
        FUN_00553108(puVar4,pvVar1);
      }
      bVar6 = DAT_0074db5c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db5c = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db5c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db5c = DAT_0074dafc;
      }
      FUN_00554225();
    }
    FUN_0054d31e();
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        puVar4[2] = 0;
        pvVar2 = *(LPVOID *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        *puVar4 = &PTR_FUN_005791b0;
        FUN_00551317(puVar4,pvVar2);
      }
      bVar6 = DAT_0074db6c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar6) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db6c = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db6c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db6c = DAT_0074dafc;
      }
      FUN_005542dc();
    }
    FUN_0054d31e();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar4 = operator_new(0x10);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_00579190;
        uVar7 = FUN_0054eb13();
        *(undefined8 *)(puVar4 + 2) = uVar7;
      }
      if (DAT_0074db68 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db68 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db68 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db68 = DAT_0074dafc;
      }
      FUN_00554393();
    }
    FUN_0054d31e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


