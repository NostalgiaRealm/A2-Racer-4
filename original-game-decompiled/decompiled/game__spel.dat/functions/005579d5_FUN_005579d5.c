
/* ==== FUN_005579d5 @ 005579d5 ==== 
 * signature: undefined4 * __stdcall FUN_005579d5(void)
 * body: 005579d5-00557a33
 */

undefined4 * FUN_005579d5(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0xc);
  *extraout_ECX = &PTR_FUN_00579578;
  FUN_0054d3cd();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00556fda(extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


