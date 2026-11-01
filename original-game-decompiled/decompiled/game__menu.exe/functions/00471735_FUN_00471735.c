
/* ==== FUN_00471735 @ 00471735 ==== 
 * signature: undefined FUN_00471735(void)
 * body: 00471735-00471762
 */

void FUN_00471735(void)

{
  VARIANT *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  if ((*(int *)(unaff_ESI + 0x24) == 0) || (*(char *)(unaff_ESI + 0x49) == '\0')) {
    iVar1 = *(int *)(unaff_ESI + 0x58);
  }
  else {
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x24) + 0x58);
  }
  FUN_0046ef70(iVar1,(VARIANTARG *)(unaff_EBP + -0x20));
  FUN_00404a30(unaff_EBX,(VARIANTARG *)(unaff_EBP + -0x20));
  *in_FS_OFFSET = in_stack_00000000;
  FUN_00404578((VARIANTARG *)(unaff_EBP + -0x20),&DAT_004010f4,2);
  return;
}


