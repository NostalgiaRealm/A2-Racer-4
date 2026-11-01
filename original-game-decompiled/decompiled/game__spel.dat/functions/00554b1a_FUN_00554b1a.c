
/* ==== FUN_00554b1a @ 00554b1a ==== 
 * signature: undefined4 * __stdcall FUN_00554b1a(void)
 * body: 00554b1a-00554b78
 */

undefined4 * FUN_00554b1a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0xc);
  *extraout_ECX = &PTR_FUN_00579344;
  FUN_0054d3cd();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0055379f(extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


