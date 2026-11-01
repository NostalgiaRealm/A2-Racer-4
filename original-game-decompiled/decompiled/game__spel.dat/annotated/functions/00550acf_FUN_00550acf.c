
/* ==== FUN_00550acf @ 00550acf ==== 
 * signature: undefined4 * __stdcall FUN_00550acf(void)
 * body: 00550acf-00550b58
 */

undefined4 * FUN_00550acf(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_0055b39c();
  FUN_005521c2();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if ((char)uVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    FUN_005533c1(*(void **)(unaff_EBP + 0x28),(void *)(unaff_EBP + -0x1c),0,0xffffffff);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00553734((void *)(unaff_EBP + -0x1c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


