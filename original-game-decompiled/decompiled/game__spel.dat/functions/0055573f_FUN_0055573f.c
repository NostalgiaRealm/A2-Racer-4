
/* ==== FUN_0055573f @ 0055573f ==== 
 * signature: undefined4 * __stdcall FUN_0055573f(void)
 * body: 0055573f-00555868
 */

undefined4 * FUN_0055573f(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar5;
  
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
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_005587a3((undefined1 *)(unaff_EBP + -0x50),(byte *)"%.0Lf");
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(unaff_EBP + 0x24) = *(undefined1 *)(unaff_EBP + -0x50 + iVar5);
      FUN_0047eab0((void *)(unaff_EBP + -0x28),1,(char)*(undefined4 *)(unaff_EBP + 0x24));
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  FUN_0047eab0((void *)(unaff_EBP + -0x28),*(uint *)(unaff_EBP + -0x10),0x30);
  *(undefined1 **)(unaff_EBP + 0x24) = &stack0xffffffa0;
  FUN_004028f0(&stack0xffffffa0,'\0');
  FUN_004093c0(&stack0xffffffa0,(void *)(unaff_EBP + -0x28),0,0xffffffff);
  puVar4 = FUN_005567da();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar2;
  puVar1[1] = puVar4[1];
  FUN_004028f0((void *)(unaff_EBP + -0x28),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


