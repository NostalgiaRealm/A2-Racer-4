
/* ==== FUN_00551e61 @ 00551e61 ==== 
 * signature: undefined4 * __stdcall FUN_00551e61(void)
 * body: 00551e61-0055210e
 */

undefined4 * FUN_00551e61(void)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int unaff_EBP;
  int iVar10;
  undefined4 uVar11;
  
  FUN_0055b39c();
  cVar2 = **(char **)(unaff_EBP + 0x1c);
  if ((cVar2 == '+') || (cVar2 == '-')) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
  }
  else if ((cVar2 == '0') &&
          ((cVar2 = (*(char **)(unaff_EBP + 0x1c))[1], cVar2 == 'x' || (cVar2 == 'X')))) {
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  FUN_004d4370(*(void **)(unaff_EBP + 0x14),(int *)(unaff_EBP + -0x1c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = (int *)FUN_00553cd8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + -0x1c));
  FUN_005533aa(piVar4,unaff_EBP + -0x34);
  iVar10 = *piVar4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar5 = (**(code **)(iVar10 + 8))();
  pcVar9 = *(char **)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
  pcVar6 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar6 = pcVar9;
  }
  bVar3 = false;
  if ('\0' < *pcVar6) {
    pcVar6 = "";
    if (pcVar9 != (char *)0x0) {
      pcVar6 = pcVar9;
    }
    iVar10 = *(int *)(unaff_EBP + 0x20);
    bVar3 = false;
    while (((cVar2 = *pcVar6, cVar2 != '\x7f' && ('\0' < cVar2)) &&
           ((uint)(int)cVar2 < (uint)(iVar10 - *(int *)(unaff_EBP + -0x14))))) {
      iVar10 = iVar10 - cVar2;
      puVar1 = (undefined4 *)(iVar10 + *(int *)(unaff_EBP + 0x1c));
      FUN_005580e0((undefined4 *)(iVar10 + 1 + *(int *)(unaff_EBP + 0x1c)),puVar1,
                   (*(int *)(unaff_EBP + 0x20) - iVar10) + 1);
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      *(undefined1 *)puVar1 = 0x2c;
      if ('\0' < pcVar6[1]) {
        pcVar6 = pcVar6 + 1;
      }
      bVar3 = true;
    }
  }
  uVar7 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0x14);
  if (((int)uVar7 < 1) || (uVar7 <= *(uint *)(unaff_EBP + 0x20))) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(uint *)(unaff_EBP + -0x10) = uVar7 - *(int *)(unaff_EBP + 0x20);
  }
  uVar7 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 0x1c0;
  if (uVar7 == 0x40) {
    uVar11 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    if (uVar7 == 0x100) {
      iVar10 = *(int *)(unaff_EBP + -0x14);
      pcVar9 = *(char **)(unaff_EBP + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar7 = FUN_0054ef7c((int)*pcVar9);
        FUN_00551357((void *)(unaff_EBP + -0x24),uVar7);
        pcVar9 = pcVar9 + 1;
      }
      iVar10 = *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + -0x14);
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) - *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x20);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_00551357((void *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar11 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    else {
      iVar10 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_00551357((void *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar11 = *(undefined4 *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (bVar3) {
    while( true ) {
      iVar8 = FUN_0055a6c0(*(byte **)(unaff_EBP + 0x1c),&DAT_005b2ec4);
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar11;
      for (iVar10 = iVar8; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar7 = FUN_0054ef7c((int)**(char **)(unaff_EBP + 0x10));
        FUN_00551357((void *)(unaff_EBP + -0x24),uVar7);
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
      }
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar8;
      piVar4 = (int *)(unaff_EBP + 0x20);
      *piVar4 = *piVar4 - iVar8;
      uVar5 = *(undefined4 *)(unaff_EBP + -0x24);
      uVar11 = *(undefined4 *)(unaff_EBP + -0x20);
      if (*piVar4 == 0) break;
      if (*(short *)(unaff_EBP + -0x1c) != 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
        FUN_00551357((void *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x1c));
        uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + -1;
    }
  }
  else {
    pcVar9 = *(char **)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    iVar10 = *(int *)(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + 0x10) = uVar11;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar7 = FUN_0054ef7c((int)*pcVar9);
      FUN_00551357((void *)(unaff_EBP + 0xc),uVar7);
      pcVar9 = pcVar9 + 1;
    }
    uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar11 = *(undefined4 *)(unaff_EBP + 0x10);
  }
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  iVar10 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + 0x10) = uVar11;
  *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0x14) = 0;
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    FUN_00551357((void *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar1[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0((void *)(unaff_EBP + -0x34),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


