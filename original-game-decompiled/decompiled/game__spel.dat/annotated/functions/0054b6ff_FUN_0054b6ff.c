
/* ==== FUN_0054b6ff @ 0054b6ff ==== 
 * signature: int * __stdcall FUN_0054b6ff(void)
 * body: 0054b6ff-0054b75d
 */

int * FUN_0054b6ff(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_005777b0;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_00578ebc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_00578eac;
  FUN_0054c9bb(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


