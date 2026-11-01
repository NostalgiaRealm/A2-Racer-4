
/* ==== FUN_0054c85e @ 0054c85e ==== 
 * signature: undefined4 * __stdcall FUN_0054c85e(void)
 * body: 0054c85e-0054c8ba
 */

undefined4 * FUN_0054c85e(void)

{
  undefined4 *this;
  undefined1 uVar1;
  int iVar2;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_0055b39c();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = this_00;
  FUN_00558890(this_00,iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = uVar1;
  FUN_004028f0(this,'\0');
  FUN_004093c0(this,(void *)(iVar2 + 0xc),0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_00579020;
  return this_00;
}


