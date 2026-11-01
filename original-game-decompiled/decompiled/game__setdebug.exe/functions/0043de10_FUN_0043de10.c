
/* ==== FUN_0043de10 @ 0043de10 ==== 
 * signature: undefined __register FUN_0043de10(UINT param_1, int * param_2, int * param_3)
 * body: 0043de10-0043de58
 */

void FUN_0043de10(UINT param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_2 != (int *)0x0) {
    do {
      piVar2 = param_2;
      param_2 = (int *)piVar2[9];
      if (param_2 == (int *)0x0) break;
      uVar1 = FUN_00402e8c(piVar2,(int)&PTR_TWinControl_vmt_000_00438554);
    } while ((char)uVar1 == '\0');
    if ((piVar2 != (int *)0x0) && (param_3 != piVar2)) {
      lParam = 0;
      wParam = 0;
      hWnd = (HWND)FUN_0042a8b4(piVar2);
      SendMessageA(hWnd,param_1,wParam,lParam);
    }
  }
  return;
}


