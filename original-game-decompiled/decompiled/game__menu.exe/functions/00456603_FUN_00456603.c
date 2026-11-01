
/* ==== FUN_00456603 @ 00456603 ==== 
 * signature: undefined FUN_00456603(void)
 * body: 00456603-00456624
 */

void FUN_00456603(void)

{
  HDC hdc;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  HPALETTE hPal;
  BOOL bForceBkgd;
  undefined4 uStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  uStack00000008 = 0x45662c;
  bForceBkgd = 0;
  hPal = *(HPALETTE *)(unaff_EBP + -8);
  hdc = (HDC)FUN_004194d8(*(int **)(unaff_EBP + -4));
  SelectPalette(hdc,hPal,bForceBkgd);
  return;
}


