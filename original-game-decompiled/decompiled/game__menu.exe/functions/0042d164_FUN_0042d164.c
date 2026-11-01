
/* ==== FUN_0042d164 @ 0042d164 ==== 
 * signature: HANDLE __register FUN_0042d164(POINT * param_1)
 * body: 0042d164-0042d195
 */

HANDLE FUN_0042d164(POINT *param_1)

{
  HWND hWnd;
  HANDLE pvVar1;
  
  hWnd = WindowFromPoint(*param_1);
  pvVar1 = (HANDLE)0x0;
  while ((hWnd != (HWND)0x0 && (pvVar1 = FUN_0042b94c(hWnd), pvVar1 == (HANDLE)0x0))) {
    hWnd = GetParent(hWnd);
  }
  return pvVar1;
}


