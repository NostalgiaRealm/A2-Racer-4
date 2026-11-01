
/* ==== FUN_005547b4 @ 005547b4 ==== 
 * signature: undefined4 * __stdcall FUN_005547b4(void)
 * body: 005547b4-0055480c
 */

undefined4 * FUN_005547b4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_0057927c;
  FUN_0054d3cd();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0055213d((int)extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


