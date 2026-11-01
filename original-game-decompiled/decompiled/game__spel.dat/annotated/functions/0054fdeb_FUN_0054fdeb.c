
/* ==== FUN_0054fdeb @ 0054fdeb ==== 
 * signature: undefined __stdcall FUN_0054fdeb(void)
 * body: 0054fdeb-0054feb2
 */

void FUN_0054fdeb(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  void *this;
  int unaff_EBP;
  byte *pbVar6;
  
  FUN_0055b39c();
  DAT_0074dc60 = 0;
  FUN_004d4370(*(void **)(unaff_EBP + 0x1c),(int *)(unaff_EBP + 0x1c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pvVar3 = (void *)FUN_005513aa();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  pbVar6 = (byte *)(unaff_EBP + -0x2f);
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    pbVar6 = (byte *)(unaff_EBP + -0x30);
  }
  uVar4 = FUN_0055b06c(this,pbVar6,(int *)(unaff_EBP + -0x10),pvVar3);
  uVar5 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if ((char)uVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(byte **)(unaff_EBP + -0x10) == pbVar6) || (DAT_0074dc60 != 0)) || (0xffff < uVar4)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0x30) == '-') {
      uVar4 = -uVar4;
    }
    **(undefined2 **)(unaff_EBP + 0x24) = (short)uVar4;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


