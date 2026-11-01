
/* ==== FUN_0054db75 @ 0054db75 ==== 
 * signature: undefined __stdcall FUN_0054db75(void)
 * body: 0054db75-0054dc68
 */

void FUN_0054db75(void)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *this;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_0055b39c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar4 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    DAT_0074dc60 = 0;
    FUN_004d4370(*(void **)(unaff_EBP + 0x1c),(int *)(unaff_EBP + 0x20));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pvVar2 = (void *)FUN_0054dc69();
    uVar3 = FUN_0055b06c(this,(byte *)(unaff_EBP + -0x38),(int *)(unaff_EBP + -0x14),pvVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar4 = uVar3;
    std::locale::~locale((locale *)(unaff_EBP + 0x20));
    uVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if ((char)uVar3 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if ((*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) || (DAT_0074dc60 != 0)) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar4 = puVar4 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_0054dc3d;
    uVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
    if ((char)uVar3 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek((undefined4 *)(unaff_EBP + 0xc));
    }
    if (*(char *)(unaff_EBP + 0x11) != ':') break;
    FUN_0054e379((undefined4 *)(unaff_EBP + 0xc));
  }
  *puVar1 = *puVar1 | 2;
LAB_0054dc3d:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar4[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


