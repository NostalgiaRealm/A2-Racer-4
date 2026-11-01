
/* ==== FUN_0054b9c9 @ 0054b9c9 ==== 
 * signature: undefined4 __stdcall FUN_0054b9c9(void)
 * body: 0054b9c9-0054bb2f
 */

undefined4 FUN_0054b9c9(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  bVar2 = DAT_005c7254 < 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (bVar2) {
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d9d8;
    DAT_005c7254 = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0054bd3c();
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d980;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0054bd3c();
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074da68;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0054bd3c();
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d940;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_0054bc75();
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074da30;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_0054bb57();
    iVar1 = DAT_0074d940;
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d8c8;
    *(undefined **)(&DAT_0074d96c + *(int *)(iVar1 + 4)) = &DAT_0074da30;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_0054bb57();
    iVar1 = DAT_0074d8c8;
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d908;
    *(undefined **)(&DAT_0074d8f4 + *(int *)(iVar1 + 4)) = &DAT_0074da30;
    *(uint *)(&DAT_0074d8d4 + *(int *)(DAT_0074d8c8 + 4)) =
         *(uint *)(&DAT_0074d8d4 + *(int *)(DAT_0074d8c8 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_0054bb57();
    *(undefined **)(&DAT_0074d934 + *(int *)(DAT_0074d908 + 4)) = &DAT_0074da30;
  }
  else {
    DAT_005c7254 = DAT_005c7254 + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


