
/* ==== FUN_0054ff77 @ 0054ff77 ==== 
 * signature: undefined __stdcall FUN_0054ff77(void)
 * body: 0054ff77-00550020
 */

void FUN_0054ff77(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  FUN_004d4370(*(void **)(unaff_EBP + 0x1c),(int *)(unaff_EBP + 0x1c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pvVar3 = (void *)FUN_005513aa();
  uVar4 = FUN_0055ae4d(this,(byte *)(unaff_EBP + -0x30),(int *)(unaff_EBP + -0x10),pvVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  uVar5 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if ((char)uVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x30) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = uVar4;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


