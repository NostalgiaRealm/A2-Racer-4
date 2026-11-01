
/* ==== TCustomForm.dyn_00a1 @ 0043e2b8 ==== 
 * signature: undefined __register TCustomForm.dyn_00a1(int * param_1, int param_2)
 * body: 0043e2b8-0043e344
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_00a1(int *param_1,int param_2)

{
  byte bVar1;
  HWND pHVar2;
  BOOL BVar3;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  WPARAM wParam;
  UINT UVar4;
  LPARAM lParam;
  
  if (((*(int *)(param_2 + 4) == 2) && (*(char *)((int)param_1 + 0x8b) == '\x01')) &&
     ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 == 0) {
      UVar4 = 7;
      cy = 0;
      cx = 0;
      Y = 0;
      X = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,X,Y,cx,cy,UVar4);
      lParam = *(LPARAM *)(param_2 + 8);
      wParam = *(WPARAM *)(param_2 + 4);
      UVar4 = 0xa2;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      PostMessageA(pHVar2,UVar4,wParam,lParam);
      if (*(char *)((int)param_1 + 0x216) == '\0') {
        return;
      }
      bVar1 = (**(code **)(*param_1 + 0x50))();
      FUN_00424e20(param_1,bVar1 ^ 1,-1);
      return;
    }
  }
  TControl_dyn_00a1(param_1,param_2);
  return;
}


