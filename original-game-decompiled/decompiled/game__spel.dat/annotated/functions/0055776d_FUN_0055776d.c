
/* ==== FUN_0055776d @ 0055776d ==== 
 * signature: undefined4 * __stdcall FUN_0055776d(void)
 * body: 0055776d-005577de
 */

undefined4 * FUN_0055776d(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579550;
  FUN_0054d3cd();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_0054e986(&DAT_005b2d3c);
  extraout_ECX[2] = uVar1;
  uVar1 = FUN_0054e986((char *)&PTR_DAT_005b2d40);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


