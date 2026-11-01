
/* ==== TCustomForm.vmt_09c @ 0043d804 ==== 
 * signature: undefined TCustomForm.vmt_09c(void)
 * body: 0043d804-0043d845
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_09c(int *param_1)

{
  WPARAM wParam;
  LPARAM lParam;
  
  if ((*(byte *)(param_1 + 0xb3) & 0x10) == 0) {
    TWinControl_vmt_09c((int)param_1);
  }
  else {
    lParam = 0;
    wParam = FUN_0042a8b4(param_1);
    SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x221,wParam,lParam);
  }
  param_1[0x8f] = 0;
  return;
}


