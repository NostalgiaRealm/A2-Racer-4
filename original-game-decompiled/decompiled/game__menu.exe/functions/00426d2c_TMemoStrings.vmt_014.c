
/* ==== TMemoStrings.vmt_014 @ 00426d2c ==== 
 * signature: LRESULT __register TMemoStrings.vmt_014(int param_1)
 * body: 00426d2c-00426d8f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

LRESULT TMemoStrings_vmt_014(int param_1)

{
  bool bVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  LPARAM lParam;
  
  LVar4 = 0;
  bVar1 = FUN_00434cdc(*(int *)(param_1 + 0xc));
  if (bVar1) {
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0xba;
    pHVar2 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    LVar4 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    lParam = 0;
    LVar7 = 0;
    WVar6 = LVar4 - 1;
    UVar5 = 0xbb;
    pHVar2 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    UVar5 = 0xc1;
    pHVar2 = (HWND)FUN_004349e0(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar2,UVar5,WVar6,lParam);
    if (LVar3 == 0) {
      LVar4 = LVar4 + -1;
    }
  }
  return LVar4;
}


