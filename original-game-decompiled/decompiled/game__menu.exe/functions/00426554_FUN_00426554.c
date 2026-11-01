
/* ==== FUN_00426554 @ 00426554 ==== 
 * signature: undefined1 __register FUN_00426554(int * param_1)
 * body: 00426554-00426588
 */

undefined1 FUN_00426554(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined1 uVar3;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar3 = *(undefined1 *)((int)param_1 + 0x1fd);
  bVar1 = FUN_00434cdc((int)param_1);
  if (bVar1) {
    lParam = 0;
    wParam = 0;
    Msg = 0xb8;
    hWnd = (HWND)FUN_004349e0(param_1);
    LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
    uVar3 = LVar2 != 0;
  }
  return uVar3;
}


