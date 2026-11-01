
/* ==== FUN_005548d3 @ 005548d3 ==== 
 * signature: undefined4 * __stdcall FUN_005548d3(void)
 * body: 005548d3-0055492b
 */

undefined4 * FUN_005548d3(void)

{
  undefined1 *puVar1;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  this[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_005791bc;
  puVar1 = FUN_0054d3cd();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00553108(this,puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0054d486();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


