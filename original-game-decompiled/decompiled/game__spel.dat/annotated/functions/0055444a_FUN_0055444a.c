
/* ==== FUN_0055444a @ 0055444a ==== 
 * signature: undefined4 * __stdcall FUN_0055444a(void)
 * body: 0055444a-0055449d
 */

undefined4 * FUN_0055444a(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579190;
  FUN_0054d3cd();
  uVar1 = FUN_0054eb13();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


