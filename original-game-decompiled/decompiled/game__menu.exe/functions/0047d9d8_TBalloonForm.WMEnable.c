
/* ==== TBalloonForm.WMEnable @ 0047d9d8 ==== 
 * signature: undefined TBalloonForm.WMEnable(void)
 * body: 0047d9d8-0047da09
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TBalloonForm_WMEnable(int *param_1,int param_2)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (*(int *)(param_2 + 4) == 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x6643;
    hWnd = (HWND)FUN_004349e0(param_1);
    PostMessageA(hWnd,Msg,wParam,lParam);
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


