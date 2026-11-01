
/* ==== FUN_00426a42 @ 00426a42 ==== 
 * signature: undefined FUN_00426a42(void)
 * body: 00426a42-00426a9d
 */

void FUN_00426a42(void)

{
  uint wParam;
  HWND hWnd;
  int unaff_EBP;
  UINT Msg;
  LPARAM lParam;
  
  (**(code **)(**(int **)(unaff_EBP + -4) + 0xb4))
            (*(int **)(unaff_EBP + -4),*(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x1f0));
  FUN_0042658c(*(int **)(unaff_EBP + -4),*(byte *)(*(int *)(unaff_EBP + -4) + 0x1fd));
  if (*(char *)(*(int *)(unaff_EBP + -4) + 0x1f5) != '\0') {
    lParam = 0;
    wParam = (uint)*(byte *)(*(int *)(unaff_EBP + -4) + 0x1f5);
    Msg = 0xcc;
    hWnd = (HWND)FUN_004349e0(*(int **)(unaff_EBP + -4));
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  FUN_00426abc(*(int **)(unaff_EBP + -4));
  return;
}


