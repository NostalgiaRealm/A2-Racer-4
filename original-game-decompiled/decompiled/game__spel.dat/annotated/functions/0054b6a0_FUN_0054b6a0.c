
/* ==== FUN_0054b6a0 @ 0054b6a0 ==== 
 * signature: int * __stdcall FUN_0054b6a0(void)
 * body: 0054b6a0-0054b6fe
 */

int * FUN_0054b6a0(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_00578ec0;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00578ebc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_00578eb4;
  FUN_0054c9bb(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


