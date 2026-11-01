
/* ==== FUN_004d495e @ 004d495e ==== 
 * signature: uint __stdcall FUN_004d495e(void)
 * body: 004d495e-004d498b;004d49a7-004d49d1
 */

uint FUN_004d495e(void)

{
  uint uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(*(int *)(**(int **)(unaff_EBP + -0x14) + 4) + 4 + (int)*(int **)(unaff_EBP + -0x14))
      == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 1;
  }
  uVar1 = FUN_0054c6db();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1 & 0xffffff00;
}


