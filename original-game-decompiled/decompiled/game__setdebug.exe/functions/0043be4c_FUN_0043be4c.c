
/* ==== FUN_0043be4c @ 0043be4c ==== 
 * signature: undefined __register FUN_0043be4c(int * param_1)
 * body: 0043be4c-0043bea4
 */

void FUN_0043be4c(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND pHVar2;
  BOOL BVar3;
  UINT Msg;
  WPARAM wParam;
  
  if (*PTR_DAT_00446be0 == '\0') {
    pHVar2 = (HWND)FUN_0042a8b4(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 != 0) {
      (**(code **)(*param_1 + 0x74))();
    }
  }
  else {
    bVar1 = FUN_0042abb0((int)param_1);
    if ((bVar1) && (*(char *)((int)param_1 + 0x211) != '\x03')) {
      lParam = FUN_0043dedc((int)param_1);
      wParam = 1;
      Msg = 0x80;
      pHVar2 = (HWND)FUN_0042a8b4(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
      return;
    }
  }
  return;
}


