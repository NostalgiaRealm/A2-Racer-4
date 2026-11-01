
/* ==== TDaviGraphicButton.vmt_098 @ 00469a44 ==== 
 * signature: undefined TDaviGraphicButton.vmt_098(void)
 * body: 00469a44-00469ac2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviGraphicButton_vmt_098(int *param_1)

{
  HRGN pHVar1;
  HWND hWnd;
  BOOL bRedraw;
  
  TButton_vmt_098(param_1);
  if ((HGDIOBJ)param_1[0x85] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x85]);
    param_1[0x85] = 0;
  }
  if ((param_1[0x82] != 0) && (*(int *)(param_1[0x82] + 0x40) != 0)) {
    pHVar1 = CreateRectRgn(0,0,1,1);
    param_1[0x85] = (int)pHVar1;
    CombineRgn(pHVar1,*(HRGN *)(param_1[0x82] + 0x40),(HRGN)0x0,5);
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    bRedraw = -1;
    pHVar1 = (HRGN)param_1[0x85];
    hWnd = (HWND)FUN_004349e0(param_1);
    SetWindowRgn(hWnd,pHVar1,bRedraw);
  }
  return;
}


