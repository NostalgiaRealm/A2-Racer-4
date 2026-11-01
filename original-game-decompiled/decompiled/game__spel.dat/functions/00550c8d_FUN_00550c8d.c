
/* ==== FUN_00550c8d @ 00550c8d ==== 
 * signature: undefined4 * __stdcall FUN_00550c8d(void)
 * body: 00550c8d-00550dc8
 */

undefined4 * FUN_00550c8d(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  int unaff_EBP;
  short *psVar8;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar5 = (int *)FUN_00553a7f();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + -0x14));
  psVar8 = *(short **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (psVar8 == (short *)0x0) {
    psVar8 = &DAT_00579320;
  }
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  uVar6 = FUN_0054ef7c(0x2d);
  if (*psVar8 == (short)uVar6) {
    *(undefined1 *)(unaff_EBP + -0x10) = 1;
    psVar8 = psVar8 + 1;
  }
  iVar1 = *piVar5;
  *(undefined4 *)(unaff_EBP + 0x20) = 0;
  cVar4 = (**(code **)(iVar1 + 8))();
  while (cVar4 != '\0') {
    *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
    uStack_40 = 0x550d19;
    cVar4 = (**(code **)(*piVar5 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1b);
  FUN_00553734((void *)(unaff_EBP + -0x2c),'\0');
  uStack_40 = 0x550d3a;
  FUN_0055349f((void *)(unaff_EBP + -0x2c),psVar8,*(uint *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    uVar6 = FUN_0054ef7c(0x30);
    uStack_40 = 0x550d57;
    FUN_00553039((void *)(unaff_EBP + -0x2c),1,(short)uVar6);
  }
  auStack_44[0] = *(undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 **)(unaff_EBP + 0x20) = auStack_44;
  FUN_00553734(auStack_44,'\0');
  FUN_005533c1(auStack_44,(void *)(unaff_EBP + -0x2c),0,0xffffffff);
  puVar7 = FUN_00552a63();
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *puVar7;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = uVar3;
  puVar2[1] = puVar7[1];
  FUN_00553734((void *)(unaff_EBP + -0x2c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


