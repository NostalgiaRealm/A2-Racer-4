
/* ==== FUN_0054bf6a @ 0054bf6a ==== 
 * signature: undefined __stdcall FUN_0054bf6a(void)
 * body: 0054bf6a-0054bfce
 */

void FUN_0054bf6a(void)

{
  char cVar1;
  void *this;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00578f64;
  cVar1 = *(char *)(extraout_ECX + 0x12);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (cVar1 != '\0') {
    FUN_0054c5da(extraout_ECX);
  }
  this = (void *)extraout_ECX[0x11];
  if (this != (void *)0x0) {
    FUN_004028f0(this,'\x01');
    FUN_0054b339(this);
  }
  std::locale::~locale((locale *)(extraout_ECX + 0x13));
  *extraout_ECX = &PTR_FUN_00578f9c;
  std::locale::~locale((locale *)(extraout_ECX + 0xd));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


