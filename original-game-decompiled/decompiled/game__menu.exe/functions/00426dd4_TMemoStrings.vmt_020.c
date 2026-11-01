
/* ==== TMemoStrings.vmt_020 @ 00426dd4 ==== 
 * signature: undefined __register TMemoStrings.vmt_020(int param_1, WPARAM param_2, undefined * param_3)
 * body: 00426dd4-00426e46
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMemoStrings_vmt_020(int param_1,WPARAM param_2,undefined *param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int lParam;
  undefined *lParam_00;
  UINT UVar4;
  WPARAM wParam;
  LPARAM LVar5;
  
  LVar5 = 0;
  UVar4 = 0xbb;
  pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar4,param_2,LVar5);
  if (-1 < (int)WVar2) {
    LVar5 = 0;
    UVar4 = 0xc1;
    wParam = WVar2;
    pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar4,wParam,LVar5);
    lParam = LVar3 + WVar2;
    UVar4 = 0xb1;
    pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar4,WVar2,lParam);
    lParam_00 = FUN_004040a0(param_3);
    WVar2 = 0;
    UVar4 = 0xc2;
    pHVar1 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar4,WVar2,(LPARAM)lParam_00);
  }
  return;
}


