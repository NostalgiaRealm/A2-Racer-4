
/* ==== FUN_00554861 @ 00554861 ==== 
 * signature: undefined4 * __stdcall FUN_00554861(void)
 * body: 00554861-005548d2
 */

undefined4 * FUN_00554861(void)

{
  undefined2 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579254;
  FUN_0054d3cd();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar1 = FUN_0055466a(&DAT_005b2d3c);
  extraout_ECX[2] = puVar1;
  puVar1 = FUN_0055466a((char *)&PTR_DAT_005b2d40);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = puVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


