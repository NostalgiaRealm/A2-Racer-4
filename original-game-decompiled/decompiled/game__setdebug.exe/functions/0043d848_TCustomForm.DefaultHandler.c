
/* ==== TCustomForm.DefaultHandler @ 0043d848 ==== 
 * signature: undefined TCustomForm.DefaultHandler(void)
 * body: 0043d848-0043d8a9
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomForm_DefaultHandler(int *param_1,UINT *param_2)

{
  HWND pHVar1;
  UINT UVar2;
  HWND hWnd;
  UINT UVar3;
  UINT UVar4;
  
  if (param_1[0x8f] == 0) {
    TWinControl_DefaultHandler((int)param_1,param_2);
  }
  else {
    if (*param_2 != 5) {
      UVar2 = param_2[2];
      UVar4 = param_2[1];
      UVar3 = *param_2;
      pHVar1 = (HWND)param_1[0x8f];
      hWnd = (HWND)FUN_0042a8b4(param_1);
      UVar2 = DefFrameProcA(hWnd,pHVar1,UVar3,UVar4,UVar2);
      param_2[3] = UVar2;
      return;
    }
    UVar2 = param_2[2];
    UVar4 = param_2[1];
    UVar3 = *param_2;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    UVar2 = DefWindowProcA(pHVar1,UVar3,UVar4,UVar2);
    param_2[3] = UVar2;
  }
  return;
}


