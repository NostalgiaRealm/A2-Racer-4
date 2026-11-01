
/* ==== FUN_00557838 @ 00557838 ==== 
 * signature: undefined4 * __stdcall FUN_00557838(void)
 * body: 00557838-005578a4
 */

undefined4 * FUN_00557838(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_005794ac;
  FUN_0054d3cd();
  puVar1 = FUN_0055133f((undefined4 *)(unaff_EBP + 8));
  extraout_ECX[2] = *puVar1;
  *puVar1 = 0;
  FUN_00559d4e(*(LPVOID *)(unaff_EBP + 8));
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


