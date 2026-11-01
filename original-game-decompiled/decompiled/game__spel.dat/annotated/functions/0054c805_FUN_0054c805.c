
/* ==== FUN_0054c805 @ 0054c805 ==== 
 * signature: undefined __stdcall FUN_0054c805(void)
 * body: 0054c805-0054c841
 */

void FUN_0054c805(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_00579020;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


