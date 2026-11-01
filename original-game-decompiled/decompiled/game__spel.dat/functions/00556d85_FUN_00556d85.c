
/* ==== FUN_00556d85 @ 00556d85 ==== 
 * signature: undefined4 * __stdcall FUN_00556d85(void)
 * body: 00556d85-00556dc4
 */

undefined4 * FUN_00556d85(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0x10);
  *extraout_ECX = &PTR_FUN_00579578;
  FUN_00556fda(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


