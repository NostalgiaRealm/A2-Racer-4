
/* ==== FUN_0054cebb @ 0054cebb ==== 
 * signature: int __stdcall FUN_0054cebb(void)
 * body: 0054cebb-0054d1df
 */

int FUN_0054cebb(void)

{
  int iVar1;
  void *this;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  bool bVar5;
  undefined8 uVar6;
  
  FUN_0055b39c();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *puVar3 = &PTR_FUN_0057912c;
        FUN_0054d1e0((int)puVar3);
      }
      bVar5 = DAT_0074db0c == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (bVar5) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db0c = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db0c == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db0c = DAT_0074dafc;
      }
      FUN_0054e3e2();
    }
    FUN_0054d31e();
  }
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 8;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(8);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_00579100;
      }
      if (DAT_0074db08 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db08 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db08 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db08 = DAT_0074dafc;
      }
      FUN_0054e49c();
    }
    FUN_0054d31e();
  }
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(8);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_005790e0;
      }
      if (DAT_0074db14 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db14 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db14 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db14 = DAT_0074dafc;
      }
      FUN_0054e56d();
    }
    FUN_0054d31e();
    if (uVar2 != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar3 = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          puVar3[1] = 0;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *puVar3 = &PTR_FUN_005790c4;
          FUN_0054e2ea((int)puVar3);
        }
        bVar5 = DAT_0074db10 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (bVar5) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db10 = DAT_0074dafc;
        }
      }
      else {
        if (DAT_0074db10 == 0) {
          DAT_0074dafc = DAT_0074dafc + 1;
          DAT_0074db10 = DAT_0074dafc;
        }
        FUN_0054e63e();
      }
      FUN_0054d31e();
    }
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(0x10);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_005790a4;
        uVar6 = FUN_0054eb13();
        *(undefined8 *)(puVar3 + 2) = uVar6;
      }
      if (DAT_0074db04 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db04 = DAT_0074dafc;
      }
    }
    else {
      if (DAT_0074db04 == 0) {
        DAT_0074dafc = DAT_0074dafc + 1;
        DAT_0074db04 = DAT_0074dafc;
      }
      FUN_0054e6f5();
    }
    FUN_0054d31e();
  }
  FUN_00554f69();
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  FUN_0054f087();
  this = *(void **)(unaff_EBP + 8);
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | uVar2;
  puVar4 = FUN_0054cdf7(this,(undefined1 *)(unaff_EBP + -0x20));
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004093c0((void *)(iVar1 + 0x18),puVar4,0,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0((void *)(unaff_EBP + -0x20),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


