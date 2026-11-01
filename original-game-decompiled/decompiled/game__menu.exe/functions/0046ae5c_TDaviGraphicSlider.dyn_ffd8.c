
/* ==== TDaviGraphicSlider.dyn_ffd8 @ 0046ae5c ==== 
 * signature: undefined __register TDaviGraphicSlider.dyn_ffd8(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0046ae5c-0046ae9b
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviGraphicSlider_dyn_ffd8
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  HWND pHVar1;
  UINT_PTR UVar2;
  
  TControl_dyn_ffd8((int)param_1,param_2,param_3,param_4,param_5);
  UVar2 = 1;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  KillTimer(pHVar1,UVar2);
  UVar2 = 2;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  KillTimer(pHVar1,UVar2);
  return;
}


