
/* ==== FUN_00550b59 @ 00550b59 ==== 
 * signature: undefined4 * __stdcall FUN_00550b59(void)
 * body: 00550b59-00550c8c
 */

undefined4 * FUN_00550b59(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  if (*(double *)(unaff_EBP + 0x20) < 0.0) {
    *(double *)(unaff_EBP + 0x20) = -*(double *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x14) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((1e+35 <= *(double *)(unaff_EBP + 0x20) && (*(uint *)(unaff_EBP + -0x10) < 5000))) {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    *(double *)(unaff_EBP + 0x20) = *(double *)(unaff_EBP + 0x20) * 1e-10;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_00553734((void *)(unaff_EBP + -0x28),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_005587a3((undefined1 *)(unaff_EBP + -0x50),(byte *)"%.0Lf");
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      uVar4 = FUN_0054ef7c((int)*(char *)(unaff_EBP + -0x50 + iVar6));
      FUN_00553039((void *)(unaff_EBP + -0x28),1,(short)uVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  uVar4 = FUN_0054ef7c(0x30);
  FUN_00553039((void *)(unaff_EBP + -0x28),*(uint *)(unaff_EBP + -0x10),(short)uVar4);
  *(undefined1 **)(unaff_EBP + 0x24) = &stack0xffffffa0;
  FUN_00553734(&stack0xffffffa0,'\0');
  FUN_005533c1(&stack0xffffffa0,(void *)(unaff_EBP + -0x28),0,0xffffffff);
  puVar5 = FUN_00552a63();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *puVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar2;
  puVar1[1] = puVar5[1];
  FUN_00553734((void *)(unaff_EBP + -0x28),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


