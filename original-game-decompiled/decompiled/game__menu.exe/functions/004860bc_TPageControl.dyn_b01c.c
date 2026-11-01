
/* ==== TPageControl.dyn_b01c @ 004860bc ==== 
 * signature: undefined __register TPageControl.dyn_b01c(int * param_1, int param_2)
 * body: 004860bc-00486116
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_b01c(int *param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  UINT Msg;
  WPARAM wParam;
  int *lParam;
  int local_20;
  undefined4 local_1c;
  int local_14;
  undefined4 local_10;
  
  lParam = &local_20;
  FUN_004070e8(*(undefined4 *)(param_2 + 8),&local_14);
  local_20 = local_14;
  local_1c = local_10;
  wParam = 0;
  Msg = 0x130d;
  hWnd = (HWND)FUN_004349e0(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (-1 < LVar1) {
    iVar2 = FUN_00484b6c(param_1);
    if (LVar1 != iVar2) {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}


