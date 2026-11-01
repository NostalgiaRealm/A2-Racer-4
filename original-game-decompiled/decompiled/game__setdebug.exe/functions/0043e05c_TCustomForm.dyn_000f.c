
/* ==== TCustomForm.dyn_000f @ 0043e05c ==== 
 * signature: undefined TCustomForm.dyn_000f(void)
 * body: 0043e05c-0043e0d4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_000f(int *param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  HDC hDC;
  HICON hIcon;
  tagPAINTSTRUCT *ptVar3;
  tagPAINTSTRUCT tStack_48;
  
  ptVar3 = &tStack_48;
  pHVar1 = (HWND)FUN_0042a8b4(param_1);
  BVar2 = IsIconic(pHVar1);
  if (BVar2 == 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 0x100;
    TWinControl_dyn_000f(param_1,param_2);
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfeff;
  }
  else {
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    hDC = BeginPaint(pHVar1,ptVar3);
    ptVar3 = &tStack_48;
    hIcon = (HICON)FUN_0043dedc((int)param_1);
    DrawIcon(hDC,0,0,hIcon);
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    EndPaint(pHVar1,ptVar3);
  }
  return;
}


