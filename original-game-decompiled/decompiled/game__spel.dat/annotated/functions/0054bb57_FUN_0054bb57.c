
/* ==== FUN_0054bb57 @ 0054bb57 ==== 
 * signature: int * __stdcall FUN_0054bb57(void)
 * body: 0054bb57-0054bbc0
 */

int * FUN_0054bb57(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_00578f50;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00578f4c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  cVar1 = *(char *)(unaff_EBP + 0x10);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_00578f44;
  if (cVar1 != '\0') {
    FUN_0054c537((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),
                 *(undefined4 *)(unaff_EBP + 8),(char)*(undefined4 *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


