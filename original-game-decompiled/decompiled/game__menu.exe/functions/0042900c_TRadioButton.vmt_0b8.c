
/* ==== TRadioButton.vmt_0b8 @ 0042900c ==== 
 * signature: undefined __register TRadioButton.vmt_0b8(int * param_1, char param_2)
 * body: 0042900c-00429092
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TRadioButton_vmt_0b8(int *param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(char *)((int)param_1 + 0x1f9)) {
    *(char *)((int)param_1 + 0x1f9) = param_2;
    TGroupBox_set_TabStop((int)param_1,param_2);
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      lParam = 0;
      uVar2 = (**(code **)(*param_1 + 0xb4))();
      uVar2 = uVar2 & 0x7f;
      Msg = 0xf1;
      hWnd = (HWND)FUN_004349e0(param_1);
      SendMessageA(hWnd,Msg,uVar2,lParam);
    }
    if (param_2 != '\0') {
      FUN_00428fa4();
      FUN_0042e3a0((int)param_1);
      if ((char)param_1[0x7c] == '\0') {
        FUN_00403178(param_1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return;
}


