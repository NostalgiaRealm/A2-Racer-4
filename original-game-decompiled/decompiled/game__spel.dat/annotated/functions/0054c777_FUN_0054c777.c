
/* ==== FUN_0054c777 @ 0054c777 ==== 
 * signature: undefined4 * __stdcall FUN_0054c777(void)
 * body: 0054c777-0054c7da
 */

undefined4 * FUN_0054c777(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x14) = this_00;
  *(undefined1 **)(unaff_EBP + -0x10) = &DAT_00712694;
  FUN_00558853(this_00,(undefined4 *)(unaff_EBP + -0x10));
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = *puVar1;
  FUN_004028f0(this,'\0');
  FUN_004093c0(this,puVar1,0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_00579020;
  return this_00;
}


