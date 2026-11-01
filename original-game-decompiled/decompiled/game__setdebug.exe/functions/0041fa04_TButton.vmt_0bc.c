
/* ==== TButton.vmt_0bc @ 0041fa04 ==== 
 * signature: undefined __register TButton.vmt_0bc(int * param_1, char param_2)
 * body: 0041fa04-0041fa55
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
  
  bVar1 = FUN_0042abb0((int)param_1);
  if (bVar1) {
    wParam = (uint)(param_2 != '\0');
    nIndex = -0x10;
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    uVar3 = GetWindowLongA(pHVar2,nIndex);
    if ((uVar3 & 0xf) != wParam) {
      lParam = 1;
      Msg = 0xf4;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
    }
  }
  return;
}


