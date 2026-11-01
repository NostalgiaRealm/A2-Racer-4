
/* ==== TDaviGraphicSlider.dyn_ffda @ 0046adc8 ==== 
 * signature: undefined TDaviGraphicSlider.dyn_ffda(void)
 * body: 0046adc8-0046ae5a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicSlider_dyn_ffda
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  HWND pHVar2;
  UINT_PTR UVar3;
  TIMERPROC pTVar4;
  
  TControl_dyn_ffda((int)param_1,param_2,param_3,param_4,param_5);
  uVar1 = FUN_0046abfc(param_1,param_1[0x81]);
  if (param_5 < (int)uVar1) {
    FUN_0046aadc(param_1,param_1[0x7e]);
    pTVar4 = (TIMERPROC)0x0;
    uVar1 = param_1[0x87];
    if ((int)uVar1 < 0) {
      uVar1 = thunk_FUN_00402808(uVar1);
    }
    UVar3 = 1;
    pHVar2 = (HWND)FUN_004349e0(param_1);
    SetTimer(pHVar2,UVar3,uVar1,pTVar4);
  }
  else {
    FUN_0046ab38(param_1,param_1[0x7e]);
    pTVar4 = (TIMERPROC)0x0;
    uVar1 = param_1[0x87];
    if ((int)uVar1 < 0) {
      uVar1 = thunk_FUN_00402808(uVar1);
    }
    UVar3 = 1;
    pHVar2 = (HWND)FUN_004349e0(param_1);
    SetTimer(pHVar2,UVar3,uVar1,pTVar4);
  }
  return;
}


