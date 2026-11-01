
/* ==== TPageControl.dyn_b005 @ 00486118 ==== 
 * signature: undefined __register TPageControl.dyn_b005(int * param_1, int param_2, undefined4 param_3)
 * body: 00486118-00486181
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_b005(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  SHORT SVar2;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar3;
  
  cVar1 = FUN_00403178(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    hWnd = GetFocus();
    hWndParent = (HWND)FUN_004349e0(param_1);
    BVar3 = IsChild(hWndParent,hWnd);
    if (BVar3 == 0) goto LAB_00486175;
  }
  if ((*(short *)(param_2 + 4) == 9) && (SVar2 = GetKeyState(0x11), SVar2 < 0)) {
    SVar2 = GetKeyState(0x10);
    FUN_00485f48(param_1,-1 < SVar2);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
LAB_00486175:
  TWinControl_dyn_b005((int)param_1,param_2);
  return;
}


