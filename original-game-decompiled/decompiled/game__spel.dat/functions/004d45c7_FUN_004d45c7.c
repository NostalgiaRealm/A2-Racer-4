
/* ==== FUN_004d45c7 @ 004d45c7 ==== 
 * signature: undefined4 __stdcall FUN_004d45c7(void)
 * body: 004d45c7-004d45cc
 */

undefined4 FUN_004d45c7(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0054c6db();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


