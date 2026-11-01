
/* ==== FUN_0054bd3c @ 0054bd3c ==== 
 * signature: undefined4 * __stdcall FUN_0054bd3c(void)
 * body: 0054bd3c-0054bd9b
 */

undefined4 * FUN_0054bd3c(void)

{
  undefined4 uVar1;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  FUN_004d0e40(this + 0xd);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_00578f9c;
  FUN_0054c657((int)this);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004d0e40(this + 0x13);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *this = &PTR_FUN_00578f64;
  FUN_0054c601(this,uVar1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


