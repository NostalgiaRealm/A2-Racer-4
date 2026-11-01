
/* ==== FUN_0044da84 @ 0044da84 ==== 
 * signature: undefined FUN_0044da84(void)
 * body: 0044da84-0044dae4
 */

void FUN_0044da84(int param_1)

{
  LPARAM lParam;
  LONG dwNewLong;
  BOOL BVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar2;
  
  if (*PTR_DAT_004ab7d4 == '\0') {
    BVar1 = IsIconic(*(HWND *)(param_1 + 0x24));
    uVar2 = extraout_var_00;
    if (BVar1 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,-1);
      uVar2 = extraout_var_01;
    }
  }
  else {
    lParam = FUN_0044cc78(param_1);
    SendMessageA(*(HWND *)(param_1 + 0x24),0x80,1,lParam);
    dwNewLong = FUN_0044cc78(param_1);
    SetClassLongA(*(HWND *)(param_1 + 0x24),-0xe,dwNewLong);
    uVar2 = extraout_var;
  }
  FUN_0044da48(param_1,CONCAT22(uVar2,0xb01d));
  return;
}


