
/* ==== TBalloonForm.WMReable @ 0047da0c ==== 
 * signature: undefined TBalloonForm.WMReable(void)
 * body: 0047da0c-0047da23
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TBalloonForm_WMReable(int *param_1)

{
  HWND hWnd;
  BOOL bEnable;
  
  bEnable = -1;
  hWnd = (HWND)FUN_004349e0(param_1);
  EnableWindow(hWnd,bEnable);
  return;
}


