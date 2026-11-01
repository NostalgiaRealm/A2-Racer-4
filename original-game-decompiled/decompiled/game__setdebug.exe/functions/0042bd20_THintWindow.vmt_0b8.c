
/* ==== THintWindow.vmt_0b8 @ 0042bd20 ==== 
 * signature: undefined __register THintWindow.vmt_0b8(int * param_1, int * param_2, uint * param_3)
 * body: 0042bd20-0042be2c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void THintWindow_vmt_0b8(int *param_1,int *param_2,uint *param_3)

{
  HWND hWnd;
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  UINT uFlags;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  int local_18 [4];
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  piVar2 = local_18;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x7e) = 1;
  pcStack_2c = thunk_FUN_00403434;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  TLabel_set_Caption((int)param_1,param_3);
  local_18[3] = local_18[3] + 4;
  FUN_00425824((int)local_8,local_18);
  iVar1 = FUN_0044019c();
  if (iVar1 < local_8[0xf] + local_18[1]) {
    local_18[1] = FUN_0044019c();
    local_18[1] = local_18[1] - local_8[0xf];
  }
  iVar1 = FUN_004401a8();
  if (iVar1 < local_8[0xe] + local_18[0]) {
    local_18[0] = FUN_004401a8();
    local_18[0] = local_18[0] - local_8[0xe];
  }
  iVar1 = FUN_00440190();
  if (local_18[0] < iVar1) {
    local_18[0] = FUN_00440190();
  }
  iVar1 = FUN_00440184();
  if (local_18[3] < iVar1) {
    local_18[3] = FUN_00440184();
  }
  uFlags = 0x50;
  iVar1 = local_8[0xf];
  cx = local_8[0xe];
  hWndInsertAfter = (HWND)0xffffffff;
  X = local_18[0];
  Y = local_18[1];
  hWnd = (HWND)FUN_0042a8b4(local_8);
  SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,iVar1,uFlags);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = uStack_30;
  *(undefined1 *)(local_8 + 0x7e) = 0;
  return;
}


