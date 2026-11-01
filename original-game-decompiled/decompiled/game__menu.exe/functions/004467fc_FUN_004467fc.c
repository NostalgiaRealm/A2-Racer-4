
/* ==== FUN_004467fc @ 004467fc ==== 
 * signature: undefined __register FUN_004467fc(int * param_1)
 * body: 004467fc-00446854
 */

void FUN_004467fc(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND pHVar2;
  BOOL BVar3;
  UINT Msg;
  WPARAM wParam;
  
  if (*PTR_DAT_004ab7d4 == '\0') {
    pHVar2 = (HWND)FUN_004349e0(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 != 0) {
      (**(code **)(*param_1 + 0x74))();
    }
  }
  else {
    bVar1 = FUN_00434cdc((int)param_1);
    if ((bVar1) && (*(char *)((int)param_1 + 0x211) != '\x03')) {
      lParam = FUN_0044888c((int)param_1);
      wParam = 1;
      Msg = 0x80;
      pHVar2 = (HWND)FUN_004349e0(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
      return;
    }
  }
  return;
}


