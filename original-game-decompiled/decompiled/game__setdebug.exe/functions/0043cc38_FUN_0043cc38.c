
/* ==== FUN_0043cc38 @ 0043cc38 ==== 
 * signature: undefined __register FUN_0043cc38(int * param_1)
 * body: 0043cc38-0043ccb0
 */

void FUN_0043cc38(int *param_1)

{
  HWND pHVar1;
  HMENU pHVar2;
  HMENU wParam;
  LPARAM lParam;
  
  if ((*(char *)((int)param_1 + 0x217) == '\x02') && (param_1[0x8f] != 0)) {
    wParam = (HMENU)0x0;
    if ((int *)param_1[0x8c] != (int *)0x0) {
      wParam = (HMENU)(**(code **)(*(int *)param_1[0x8c] + 0x34))();
    }
    lParam = 0;
    if (param_1[0x90] != 0) {
      lParam = FUN_00432fe8(param_1[0x90]);
    }
    pHVar1 = (HWND)FUN_0042a8b4(param_1);
    pHVar2 = GetMenu(pHVar1);
    SendMessageA((HWND)param_1[0x8f],0x230,(WPARAM)wParam,lParam);
    if (wParam != pHVar2) {
      pHVar1 = (HWND)FUN_0042a8b4(param_1);
      DrawMenuBar(pHVar1);
    }
  }
  return;
}


