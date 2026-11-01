
/* ==== TCustomForm.dyn_0002 @ 0043e348 ==== 
 * signature: undefined TCustomForm.dyn_0002(void)
 * body: 0043e348-0043e3a7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0002(int *param_1,undefined4 param_2)

{
  HWND pHVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  HMENU hMenu;
  
  if (*PTR_DAT_00446be0 != '\0') {
    lParam = 0;
    wParam = 1;
    Msg = 0x80;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  if ((param_1[0x8c] != 0) && (*(char *)((int)param_1 + 0x217) != '\x01')) {
    hMenu = (HMENU)0x0;
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    SetMenu(pHVar1,hMenu);
    FUN_00436284((int *)param_1[0x8c],0);
  }
  TWinControl_dyn_0002(param_1,param_2);
  return;
}


