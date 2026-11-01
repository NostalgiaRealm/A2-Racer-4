
/* ==== TCustomForm.vmt_09c @ 004481b4 ==== 
 * signature: undefined TCustomForm.vmt_09c(void)
 * body: 004481b4-004481f5
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
    wParam = FUN_004349e0(param_1);
    SendMessageA(*(HWND *)(*(int *)(DAT_004ac7d4 + 0x38) + 0x23c),0x221,wParam,lParam);
  }
  param_1[0x8f] = 0;
  return;
}


