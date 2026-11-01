
/* ==== TDaviGraphicButton.vmt_074 @ 00469e00 ==== 
 * signature: undefined TDaviGraphicButton.vmt_074(void)
 * body: 00469e00-00469e46
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviGraphicButton_vmt_074(int param_1)

{
  bool bVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT RStack_14;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    bVar1 = FUN_00434cdc(*(int *)(param_1 + 0x24));
    if (bVar1) {
      FUN_0042e13c(param_1,&RStack_14.left);
      bErase = -1;
      lpRect = &RStack_14;
      hWnd = (HWND)FUN_004349e0(*(int **)(param_1 + 0x24));
      InvalidateRect(hWnd,lpRect,bErase);
    }
  }
  TWinControl_vmt_074(param_1);
  return;
}


