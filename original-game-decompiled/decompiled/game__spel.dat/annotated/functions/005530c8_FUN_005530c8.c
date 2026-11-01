
/* ==== FUN_005530c8 @ 005530c8 ==== 
 * signature: undefined4 * __stdcall FUN_005530c8(void)
 * body: 005530c8-00553107
 */

undefined4 * FUN_005530c8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0x10);
  *extraout_ECX = &PTR_FUN_00579344;
  FUN_0055379f(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


