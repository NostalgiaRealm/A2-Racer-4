
/* ==== FUN_005502bd @ 005502bd ==== 
 * signature: undefined __stdcall FUN_005502bd(void)
 * body: 005502bd-005503b8
 */

void FUN_005502bd(void)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  void *this;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_0055b39c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar5 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    DAT_0074dc60 = 0;
    FUN_004d4370(*(void **)(unaff_EBP + 0x1c),(int *)(unaff_EBP + 0x20));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pvVar2 = (void *)FUN_005513aa();
    uVar3 = FUN_0055b06c(this,(byte *)(unaff_EBP + -0x38),(int *)(unaff_EBP + -0x14),pvVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar5 = uVar3;
    std::locale::~locale((locale *)(unaff_EBP + 0x20));
    uVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if ((char)uVar3 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if ((*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) || (DAT_0074dc60 != 0)) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar5 = puVar5 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_0055038d;
    uVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if ((char)uVar3 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek((undefined4 *)(unaff_EBP + 0xc));
    }
    uVar4 = FUN_0054ef7c(0x3a);
    if (*(short *)(unaff_EBP + 0x12) != (short)uVar4) break;
    FUN_0055331d((undefined4 *)(unaff_EBP + 0xc));
  }
  *puVar1 = *puVar1 | 2;
LAB_0055038d:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


