
/* ==== FUN_0042829c @ 0042829c ==== 
 * signature: undefined FUN_0042829c(void)
 * body: 0042829c-00428330
 */

void FUN_0042829c(int *param_1)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int X;
  int Y;
  UINT uFlags;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4282b2;
  iVar1 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
  if (param_1[0x81] < iVar1) {
    iVar1 = param_1[0x81];
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x8b) = 1;
  puStack_14 = &UNK_00428331;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uFlags = 0x9e;
  puStack_10 = &stack0xfffffffc;
  iVar2 = TComboBox_get_ItemHeight(param_1);
  iVar2 = iVar2 * iVar1 + param_1[0xf] + 2;
  iVar1 = param_1[0xe];
  Y = 0;
  X = 0;
  hWndInsertAfter = (HWND)0x0;
  hWnd = (HWND)FUN_004349e0(param_1);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,iVar1,iVar2,uFlags);
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  return;
}


