
/* ==== FUN_005546a8 @ 005546a8 ==== 
 * signature: undefined4 * __stdcall FUN_005546a8(void)
 * body: 005546a8-00554707
 */

undefined4 * FUN_005546a8(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_005792e4;
  FUN_0054d3cd();
  puVar1 = (undefined4 *)FUN_0054ec38((undefined4 *)(unaff_EBP + -0x20));
  extraout_ECX[2] = *puVar1;
  extraout_ECX[3] = puVar1[1];
  extraout_ECX[4] = puVar1[2];
  extraout_ECX[5] = puVar1[3];
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


