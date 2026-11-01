
/* ==== FUN_004428f8 @ 004428f8 ==== 
 * signature: undefined FUN_004428f8(void)
 * body: 004428f8-00442958
 */

void FUN_004428f8(int param_1)

{
  LPARAM lParam;
  LONG dwNewLong;
  BOOL BVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar2;
  
  if (*PTR_DAT_00446be0 == '\0') {
    BVar1 = IsIconic(*(HWND *)(param_1 + 0x24));
    uVar2 = extraout_var_00;
    if (BVar1 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,-1);
      uVar2 = extraout_var_01;
    }
  }
  else {
    lParam = FUN_00441cd8(param_1);
    SendMessageA(*(HWND *)(param_1 + 0x24),0x80,1,lParam);
    dwNewLong = FUN_00441cd8(param_1);
    SetClassLongA(*(HWND *)(param_1 + 0x24),-0xe,dwNewLong);
    uVar2 = extraout_var;
  }
  FUN_004428bc(param_1,CONCAT22(uVar2,0xb01d));
  return;
}


