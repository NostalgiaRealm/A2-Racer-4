
/* ==== FUN_005503b9 @ 005503b9 ==== 
 * signature: undefined4 * __stdcall FUN_005503b9(void)
 * body: 005503b9-0055056b
 */

undefined4 * FUN_005503b9(void)

{
  int *piVar1;
  void *this;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  int unaff_EBP;
  int iVar7;
  undefined2 *puVar8;
  
  FUN_0055b39c();
  this = *(void **)(unaff_EBP + 0x14);
  FUN_004d4370(this,(int *)(unaff_EBP + 0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pvVar4 = (void *)FUN_00553cd8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x14));
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_00553734((void *)(unaff_EBP + -0x2c),'\0');
  uVar5 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((uVar5 & 0x4000) == 0) {
    uVar5 = FUN_0054ef7c((int)(char)((*(char *)(unaff_EBP + 0x1c) != '\0') + '0'));
    FUN_00553039((void *)(unaff_EBP + -0x2c),1,(short)uVar5);
  }
  else {
    if (*(char *)(unaff_EBP + 0x1c) == '\0') {
      pvVar4 = (void *)FUN_0055210f(pvVar4,unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_005533c1((void *)(unaff_EBP + -0x2c),pvVar4,0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      pvVar4 = (void *)FUN_00552126(pvVar4,unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_005533c1((void *)(unaff_EBP + -0x2c),pvVar4,0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    FUN_00553734((void *)(unaff_EBP + -0x1c),'\x01');
  }
  uVar5 = *(uint *)((int)this + 0x14);
  if (((int)uVar5 < 1) || (uVar5 <= *(uint *)(unaff_EBP + -0x24))) {
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  }
  else {
    *(uint *)(unaff_EBP + 0x1c) = uVar5 - *(int *)(unaff_EBP + -0x24);
  }
  if ((*(uint *)((int)this + 0xc) & 0x1c0) != 0x40) {
    iVar7 = *(int *)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_00551357((void *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 0x18));
    }
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  puVar8 = *(undefined2 **)(unaff_EBP + -0x28);
  if (puVar8 == (undefined2 *)0x0) {
    puVar8 = &DAT_00579320;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
  puVar6 = *(undefined1 **)(unaff_EBP + -0x24);
  if (puVar6 != (undefined1 *)0x0) {
    *(undefined1 **)(unaff_EBP + 0x14) = puVar6;
    do {
      puVar6 = FUN_00551357((void *)(unaff_EBP + -0x14),
                            CONCAT22((short)((uint)puVar6 >> 0x10),*puVar8));
      puVar8 = puVar8 + 1;
      piVar1 = (int *)(unaff_EBP + 0x14);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar7 = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    FUN_00551357((void *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00553734((void *)(unaff_EBP + -0x2c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


