
/* ==== TOleControl.DefaultHandler @ 0046faa0 ==== 
 * signature: undefined TOleControl.DefaultHandler(void)
 * body: 0046faa0-0046fb00
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TOleControl_DefaultHandler(int *param_1,UINT *param_2)

{
  bool bVar1;
  HWND hWnd;
  UINT UVar2;
  UINT Msg;
  UINT wParam;
  
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    if ((0xbbff < *param_2) && (*param_2 < 0xc000)) {
      *param_2 = *param_2 - 0x9c00;
    }
    if ((*(byte *)((int)param_1 + 0x226) & 1) == 0) {
      UVar2 = param_2[2];
      wParam = param_2[1];
      Msg = *param_2;
      hWnd = (HWND)FUN_004349e0(param_1);
      UVar2 = CallWindowProcA((WNDPROC)param_1[0x4f],hWnd,Msg,wParam,UVar2);
      param_2[3] = UVar2;
      return;
    }
  }
  TWinControl_DefaultHandler((int)param_1,param_2);
  return;
}


