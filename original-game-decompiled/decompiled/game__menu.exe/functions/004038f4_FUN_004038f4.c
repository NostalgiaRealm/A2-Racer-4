
/* ==== FUN_004038f4 @ 004038f4 ==== 
 * signature: undefined __register FUN_004038f4(void)
 * body: 004038f4-00403911
 */

void FUN_004038f4(void)

{
  int iVar1;
  int unaff_EBP;
  int *in_FS_OFFSET;
  
  DAT_004ac4a8 = (int *)(unaff_EBP + -0xc);
  iVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)DAT_004ac4a8;
  *DAT_004ac4a8 = iVar1;
  *(code **)(unaff_EBP + -8) = FUN_00403858;
  *(int *)(unaff_EBP + -4) = unaff_EBP;
  return;
}


