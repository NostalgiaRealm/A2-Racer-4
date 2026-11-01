
/* ==== FUN_00485014 @ 00485014 ==== 
 * signature: undefined __register FUN_00485014(int * param_1)
 * body: 00485014-00485052
 */

void FUN_00485014(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  if ((char)param_1[0x86] == '\0') {
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      lParam = CONCAT22((short)param_1[0xf],(short)param_1[0xe]);
      wParam = 0;
      Msg = 5;
      hWnd = (HWND)FUN_004349e0(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
    FUN_0043134c(param_1);
  }
  return;
}


