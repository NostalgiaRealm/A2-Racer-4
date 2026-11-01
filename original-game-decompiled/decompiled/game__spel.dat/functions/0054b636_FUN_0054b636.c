
/* ==== FUN_0054b636 @ 0054b636 ==== 
 * signature: int * __stdcall FUN_0054b636(void)
 * body: 0054b636-0054b69f
 */

int * FUN_0054b636(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_0055b39c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_00578ec0;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_00578ebc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  cVar1 = *(char *)(unaff_EBP + 0x10);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_FUN_00578eb4;
  if (cVar1 != '\0') {
    FUN_004d6870((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),
                 *(undefined4 *)(unaff_EBP + 8),(char)*(undefined4 *)(unaff_EBP + 0xc));
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


