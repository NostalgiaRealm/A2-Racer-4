
/* ==== FUN_00445378 @ 00445378 ==== 
 * signature: undefined __register FUN_00445378(int param_1)
 * body: 00445378-0044548e
 */

void FUN_00445378(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar1 = FUN_00444c8c(param_1);
    iVar1 = *(int *)(param_1 + 0x10) - iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  FUN_00444c8c(param_1);
  FUN_00445270();
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_004349e0(*(int **)(param_1 + 4));
  (**(code **)PTR_DAT_004ab89c)();
  TControlScrollBar_set_Position(param_1,*(int *)(param_1 + 0xc));
  iVar1 = FUN_00444c8c(param_1);
  uVar2 = (iVar1 * 9) / 10;
  *(short *)(param_1 + 10) = (short)uVar2;
  if (*(char *)(param_1 + 0x1f) != '\0') {
    *(short *)(param_1 + 8) = (short)((ulonglong)(uVar2 & 0xffff) / 10);
  }
  return;
}


