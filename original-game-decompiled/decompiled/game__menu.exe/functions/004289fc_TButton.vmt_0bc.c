
/* ==== TButton.vmt_0bc @ 004289fc ==== 
 * signature: undefined __register TButton.vmt_0bc(int * param_1, char param_2)
 * body: 004289fc-00428a4d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButton_vmt_0bc(int *param_1,char param_2)

{
  bool bVar1;
  HWND pHVar2;
  uint uVar3;
  uint wParam;
  UINT Msg;
  int nIndex;
  LPARAM lParam;
  
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    wParam = (uint)(param_2 != '\0');
    nIndex = -0x10;
    pHVar2 = (HWND)FUN_004349e0(param_1);
    uVar3 = GetWindowLongA(pHVar2,nIndex);
    if ((uVar3 & 0xf) != wParam) {
      lParam = 1;
      Msg = 0xf4;
      pHVar2 = (HWND)FUN_004349e0(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
    }
  }
  return;
}


