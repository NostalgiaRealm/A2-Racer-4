
/* ==== FUN_0054bcdd @ 0054bcdd ==== 
 * signature: int * __stdcall FUN_0054bcdd(void)
 * body: 0054bcdd-0054bd3b
 */

int * FUN_0054bcdd(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_00578f58;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_00578f4c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_00578f3c;
  FUN_0054c9bb(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


