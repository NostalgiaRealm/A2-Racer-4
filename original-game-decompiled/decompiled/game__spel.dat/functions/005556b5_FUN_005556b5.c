
/* ==== FUN_005556b5 @ 005556b5 ==== 
 * signature: undefined4 * __stdcall FUN_005556b5(void)
 * body: 005556b5-0055573e
 */

undefined4 * FUN_005556b5(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  FUN_00555f6d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if ((char)uVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    FUN_004093c0(*(void **)(unaff_EBP + 0x28),(void *)(unaff_EBP + -0x1c),0,0xffffffff);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0((void *)(unaff_EBP + -0x1c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


