
/* ==== FUN_004487c0 @ 004487c0 ==== 
 * signature: undefined __register FUN_004487c0(UINT param_1, int * param_2, int * param_3)
 * body: 004487c0-00448808
 */

void FUN_004487c0(UINT param_1,int *param_2,int *param_3)

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
      uVar1 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_00442cf0);
    } while ((char)uVar1 == '\0');
    if ((piVar2 != (int *)0x0) && (param_3 != piVar2)) {
      lParam = 0;
      wParam = 0;
      hWnd = (HWND)FUN_004349e0(piVar2);
      SendMessageA(hWnd,param_1,wParam,lParam);
    }
  }
  return;
}


