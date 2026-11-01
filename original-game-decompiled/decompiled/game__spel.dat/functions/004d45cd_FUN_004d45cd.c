
/* ==== FUN_004d45cd @ 004d45cd ==== 
 * signature: undefined __stdcall FUN_004d45cd(void)
 * body: 004d45cd-004d460a
 */

void FUN_004d45cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0054c6db();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


