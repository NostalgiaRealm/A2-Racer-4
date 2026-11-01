
/* ==== FUN_0054c949 @ 0054c949 ==== 
 * signature: undefined __stdcall FUN_0054c949(void)
 * body: 0054c949-0054c998
 */

void FUN_0054c949(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00579030;
  iVar1 = extraout_ECX[9];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) ||
     ((&DAT_0074dae4)[iVar1] = (&DAT_0074dae4)[iVar1] + -1,
     (char)(&DAT_0074dae4)[extraout_ECX[9]] < '\x01')) {
    FUN_0054ca28(extraout_ECX);
  }
  std::locale::~locale((locale *)(extraout_ECX + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


