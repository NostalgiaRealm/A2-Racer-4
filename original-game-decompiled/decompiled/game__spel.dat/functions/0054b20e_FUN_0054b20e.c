
/* ==== FUN_0054b20e @ 0054b20e ==== 
 * signature: undefined __stdcall FUN_0054b20e(void)
 * body: 0054b20e-0054b24a
 */

void FUN_0054b20e(void)

{
  exception *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_0055b39c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_00578e74;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


