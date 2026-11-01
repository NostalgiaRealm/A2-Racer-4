
/* ==== FUN_0054fb67 @ 0054fb67 ==== 
 * signature: undefined4 * __stdcall FUN_0054fb67(void)
 * body: 0054fb67-0054fc42
 */

undefined4 * FUN_0054fb67(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x14) = 0x782521;
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x24) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_004028f0((void *)(unaff_EBP + -0x24),'\0');
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    *(undefined1 *)(unaff_EBP + -0x12) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  else {
    *(char *)(unaff_EBP + -0x12) = *(char *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x11) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  uVar5 = 0x10;
  while( true ) {
    FUN_0047eab0((void *)(unaff_EBP + -0x24),uVar5,0);
    puVar2 = *(undefined **)(extraout_ECX + 8);
    *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
    FUN_00471de0((void *)(unaff_EBP + -0x24));
    iVar4 = FUN_0055c701(*(byte **)(unaff_EBP + -0x20),*(uint *)(unaff_EBP + 0x1c),
                         (byte *)(unaff_EBP + -0x14),*(int **)(unaff_EBP + 0x18),puVar2);
    if (iVar4 != 0) break;
    uVar5 = uVar5 * 2;
  }
  FUN_00471de0((void *)(unaff_EBP + -0x24));
  iVar6 = *(int *)(unaff_EBP + -0x20);
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    pcVar1 = (char *)(iVar6 + 1);
    iVar6 = iVar6 + 1;
    uVar5 = FUN_0054ef7c((int)*pcVar1);
    FUN_00551357((void *)(unaff_EBP + 0xc),uVar5);
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0((void *)(unaff_EBP + -0x24),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


