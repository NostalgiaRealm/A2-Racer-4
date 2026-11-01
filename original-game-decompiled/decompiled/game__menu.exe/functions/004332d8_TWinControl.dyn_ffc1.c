
/* ==== TWinControl.dyn_ffc1 @ 004332d8 ==== 
 * signature: undefined TWinControl.dyn_ffc1(void)
 * body: 004332d8-00433332
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffc1
               (int *param_1,undefined4 param_2,LPRECT param_3,undefined4 param_4,
               undefined4 *param_5)

{
  HWND hWnd;
  LPRECT lpRect;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = *param_5;
  uStack_8 = param_5[1];
  lpRect = param_3;
  hWnd = (HWND)FUN_004349e0(param_1);
  GetWindowRect(hWnd,lpRect);
  InflateRect(param_3,10,10);
  if (*(short *)((int)param_1 + 0x1aa) != 0) {
    (*(code *)param_1[0x6a])(param_1[0x6b],param_1,param_2,param_4,&uStack_c,param_3);
  }
  return;
}


