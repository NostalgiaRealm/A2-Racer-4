
/* ==== FUN_0054d4fb @ 0054d4fb ==== 
 * signature: undefined __stdcall FUN_0054d4fb(void)
 * body: 0054d4fb-0054d6a2
 */

void FUN_0054d4fb(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  void *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  pvVar3 = *(void **)(unaff_EBP + 0x1c);
  if ((*(uint *)((int)pvVar3 + 0xc) & 0x4000) == 0) {
    DAT_0074dc60 = 0;
    FUN_004d4370(pvVar3,(int *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -4) = 4;
    pvVar3 = (void *)FUN_0054dc69();
    uVar6 = FUN_0055b06c(this,(byte *)(unaff_EBP + -0x48),(int *)(unaff_EBP + -0x18),pvVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + -0x14));
    if (((*(int *)(unaff_EBP + -0x18) != unaff_EBP + -0x48) && (DAT_0074dc60 == 0)) && (uVar6 < 2))
    {
      *(uint *)(unaff_EBP + -0x10) = uVar6;
    }
  }
  else {
    FUN_004d4370(pvVar3,(int *)(unaff_EBP + 0x1c));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pvVar3 = (void *)FUN_0054e63e();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + 0x1c));
    *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
    FUN_004028f0((void *)(unaff_EBP + -0x28),'\0');
    FUN_0054e333((void *)(unaff_EBP + -0x28),1,'\0');
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_004d6060(pvVar3,unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00483d90((void *)(unaff_EBP + -0x28),iVar4,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004028f0((void *)(unaff_EBP + -0x38),'\x01');
    FUN_0047eab0((void *)(unaff_EBP + -0x28),1,0);
    iVar4 = FUN_004d6080(pvVar3,unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00483d90((void *)(unaff_EBP + -0x28),iVar4,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004028f0((void *)(unaff_EBP + -0x38),'\x01');
    uVar5 = FUN_0054e7ac();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    FUN_004028f0((void *)(unaff_EBP + -0x28),'\x01');
  }
  uVar5 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if ((char)uVar5 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) < 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(bool *)*(undefined4 *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x10) != 0;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


