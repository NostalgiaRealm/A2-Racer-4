
/* ==== FUN_005577df @ 005577df ==== 
 * signature: undefined4 * __stdcall FUN_005577df(void)
 * body: 005577df-00557837
 */

undefined4 * FUN_005577df(void)

{
  undefined1 *puVar1;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  this[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_005794b8;
  puVar1 = FUN_0054d3cd();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00556dc5(this,puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


