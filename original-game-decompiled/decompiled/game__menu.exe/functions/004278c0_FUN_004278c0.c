
/* ==== FUN_004278c0 @ 004278c0 ==== 
 * signature: undefined __register FUN_004278c0(int * param_1, byte param_2)
 * body: 004278c0-00427904
 */

void FUN_004278c0(int *param_1,byte param_2)

{
  uint wParam;
  HWND pHVar1;
  UINT Msg;
  RECT *lpRect;
  LPARAM lParam;
  BOOL bErase;
  RECT RStack_18;
  
  lParam = 0;
  wParam = (uint)param_2;
  Msg = 0x14f;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  lpRect = &RStack_18;
  (**(code **)(*param_1 + 0x40))(param_1,&RStack_18);
  bErase = -1;
  pHVar1 = (HWND)FUN_004349e0(param_1);
  InvalidateRect(pHVar1,lpRect,bErase);
  return;
}


