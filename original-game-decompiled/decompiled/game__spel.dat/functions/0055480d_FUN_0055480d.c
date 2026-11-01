
/* ==== FUN_0055480d @ 0055480d ==== 
 * signature: undefined4 * __stdcall FUN_0055480d(void)
 * body: 0055480d-00554860
 */

undefined4 * FUN_0055480d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00579268;
  FUN_0054d3cd();
  uVar1 = FUN_00557cfe();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


