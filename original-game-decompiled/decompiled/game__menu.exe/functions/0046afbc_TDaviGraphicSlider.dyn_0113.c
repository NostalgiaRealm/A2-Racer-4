
/* ==== TDaviGraphicSlider.dyn_0113 @ 0046afbc ==== 
 * signature: undefined TDaviGraphicSlider.dyn_0113(void)
 * body: 0046afbc-0046b01b
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicSlider_dyn_0113(int *param_1,int param_2)

{
  HWND pHVar1;
  uint uElapse;
  UINT_PTR UVar2;
  TIMERPROC lpTimerFunc;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (*(int *)(param_2 + 4) == 1) {
    UVar2 = 1;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    KillTimer(pHVar1,UVar2);
    lpTimerFunc = (TIMERPROC)0x0;
    uElapse = param_1[0x88];
    if ((int)uElapse < 0) {
      uElapse = thunk_FUN_00402808(uElapse);
    }
    UVar2 = 2;
    pHVar1 = (HWND)FUN_004349e0(param_1);
    SetTimer(pHVar1,UVar2,uElapse,lpTimerFunc);
    FUN_0046b01c(param_1);
  }
  if (*(int *)(param_2 + 4) == 2) {
    FUN_0046b01c(param_1);
  }
  return;
}


