
/* ==== FUN_00441cf4 @ 00441cf4 ==== 
 * signature: undefined __register FUN_00441cf4(int param_1)
 * body: 00441cf4-00441d91
 */

void FUN_00441cf4(int param_1)

{
  BOOL BVar1;
  HWND hWndInsertAfter;
  int iVar2;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x24));
  if (BVar1 == 0) {
    FUN_004414b8(param_1);
    SetActiveWindow(*(HWND *)(param_1 + 0x24));
    if ((*(int *)(param_1 + 0x38) == 0) ||
       ((*(char *)(param_1 + 0x4b) == '\0' && (*(char *)(*(int *)(param_1 + 0x38) + 0x47) == '\0')))
       ) {
      FUN_00440ee8(*(HWND *)(param_1 + 0x24),6);
    }
    else {
      uFlags = 0x40;
      cy = 0;
      iVar2 = *(int *)(param_1 + 0x38);
      cx = *(int *)(iVar2 + 0x38);
      Y = *(int *)(iVar2 + 0x34);
      iVar2 = *(int *)(iVar2 + 0x30);
      hWndInsertAfter = (HWND)FUN_0042a8b4(*(int **)(param_1 + 0x38));
      SetWindowPos(*(HWND *)(param_1 + 0x24),hWndInsertAfter,iVar2,Y,cx,cy,uFlags);
      DefWindowProcA(*(HWND *)(param_1 + 0x24),0x112,0xf020,0);
    }
    if (*(short *)(param_1 + 0xf2) != 0) {
      (**(code **)(param_1 + 0xf0))(*(undefined4 *)(param_1 + 0xf4),param_1);
    }
  }
  return;
}


