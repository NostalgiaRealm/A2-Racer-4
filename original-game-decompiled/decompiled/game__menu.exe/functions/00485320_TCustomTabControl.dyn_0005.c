
/* ==== TCustomTabControl.dyn_0005 @ 00485320 ==== 
 * signature: undefined __register TCustomTabControl.dyn_0005(int * param_1, undefined4 param_2)
 * body: 00485320-0048533e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomTabControl_dyn_0005(int *param_1,undefined4 param_2)

{
  HWND hWnd;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  UINT flags;
  
  TWinControl_dyn_0005(param_1,param_2);
  flags = 5;
  hrgnUpdate = (HRGN)0x0;
  lprcUpdate = (RECT *)0x0;
  hWnd = (HWND)FUN_004349e0(param_1);
  RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return;
}


