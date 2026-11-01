
/* ==== FUN_00550217 @ 00550217 ==== 
 * signature: undefined __stdcall FUN_00550217(void)
 * body: 00550217-005502bc
 */

void FUN_00550217(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  void *this;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  FUN_004d4370(*(void **)(unaff_EBP + 0x1c),(int *)(unaff_EBP + 0x1c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00551779((byte *)(unaff_EBP + -100),(undefined4 *)(unaff_EBP + 0xc),
                       (int *)(unaff_EBP + 0x14));
  fVar5 = (float10)FUN_00557ce9(this,(byte *)(unaff_EBP + -100),(int *)(unaff_EBP + -0x10),iVar3);
  *(double *)(unaff_EBP + -0x18) = (double)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  uVar4 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if ((char)uVar4 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -100) || (DAT_0074dc60 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined8 **)(unaff_EBP + 0x24) = *(undefined8 *)(unaff_EBP + -0x18);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


