
/* ==== FUN_00423224 @ 00423224 ==== 
 * signature: HANDLE __register FUN_00423224(POINT * param_1)
 * body: 00423224-00423255
 */

HANDLE FUN_00423224(POINT *param_1)

{
  HWND hWnd;
  HANDLE pvVar1;
  
  hWnd = WindowFromPoint(*param_1);
  pvVar1 = (HANDLE)0x0;
  while ((hWnd != (HWND)0x0 && (pvVar1 = FUN_00421a0c(hWnd), pvVar1 == (HANDLE)0x0))) {
    hWnd = GetParent(hWnd);
  }
  return pvVar1;
}


