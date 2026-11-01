
/* ==== FUN_0040366c @ 0040366c ==== 
 * signature: undefined __register FUN_0040366c(void)
 * body: 0040366c-00403689
 */

void FUN_0040366c(void)

{
  int iVar1;
  int unaff_EBP;
  int *in_FS_OFFSET;
  
  DAT_004474a0 = (int *)(unaff_EBP + -0xc);
  iVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)DAT_004474a0;
  *DAT_004474a0 = iVar1;
  *(code **)(unaff_EBP + -8) = FUN_004035d0;
  *(int *)(unaff_EBP + -4) = unaff_EBP;
  return;
}


