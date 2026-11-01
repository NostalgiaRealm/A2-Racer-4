
/* ==== FUN_00449efe @ 00449efe ==== 
 * signature: undefined FUN_00449efe(void)
 * body: 00449efe-00449f97
 */

void FUN_00449efe(void)

{
  byte *pbVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  code *pcStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  pcStack00000008 = FUN_00449fa2;
  if (*(int *)(DAT_004ac7d8 + 0x3c) == *(int *)(unaff_EBP + -0x18)) {
    FUN_0044b5d8(DAT_004ac7d8,*(short *)(unaff_EBP + -0x12));
  }
  else {
    FUN_0044b5d8(DAT_004ac7d8,0);
  }
  FUN_00444390(*(undefined4 **)(unaff_EBP + -0xc));
  if ((int)(*(undefined4 **)(DAT_004ac7d8 + 0x70))[2] < 1) {
    *(undefined4 *)(DAT_004ac7d8 + 0x6c) = 0;
  }
  else {
    iVar2 = FUN_004102a8(*(undefined4 **)(DAT_004ac7d8 + 0x70));
    *(int *)(DAT_004ac7d8 + 0x6c) = iVar2;
    FUN_00410448(*(int **)(DAT_004ac7d8 + 0x70),iVar2);
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    SetActiveWindow(*(HWND *)(unaff_EBP + -0x1c));
  }
  DAT_004aa938 = *(undefined4 *)(unaff_EBP + -0x10);
  pbVar1 = (byte *)(*(int *)(unaff_EBP + -4) + 0x2cc);
  *pbVar1 = *pbVar1 & 0xf7;
  return;
}


