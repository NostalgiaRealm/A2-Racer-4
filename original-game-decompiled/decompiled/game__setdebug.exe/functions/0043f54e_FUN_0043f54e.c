
/* ==== FUN_0043f54e @ 0043f54e ==== 
 * signature: undefined FUN_0043f54e(void)
 * body: 0043f54e-0043f5e7
 */

void FUN_0043f54e(void)

{
  byte *pbVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  code *pcStack00000008;
  
  *in_FS_OFFSET = in_stack_00000000;
  pcStack00000008 = FUN_0043f5f2;
  if (*(int *)(DAT_004477c8 + 0x3c) == *(int *)(unaff_EBP + -0x18)) {
    FUN_00440638(DAT_004477c8,*(short *)(unaff_EBP + -0x12));
  }
  else {
    FUN_00440638(DAT_004477c8,0);
  }
  FUN_004399e0(*(undefined4 **)(unaff_EBP + -0xc));
  if ((int)(*(undefined4 **)(DAT_004477c8 + 0x70))[2] < 1) {
    *(undefined4 *)(DAT_004477c8 + 0x6c) = 0;
  }
  else {
    iVar2 = FUN_0040f01c(*(undefined4 **)(DAT_004477c8 + 0x70));
    *(int *)(DAT_004477c8 + 0x6c) = iVar2;
    FUN_0040f164(*(int **)(DAT_004477c8 + 0x70),iVar2);
  }
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    SetActiveWindow(*(HWND *)(unaff_EBP + -0x1c));
  }
  DAT_00446864 = *(undefined4 *)(unaff_EBP + -0x10);
  pbVar1 = (byte *)(*(int *)(unaff_EBP + -4) + 0x2cc);
  *pbVar1 = *pbVar1 & 0xf7;
  return;
}


