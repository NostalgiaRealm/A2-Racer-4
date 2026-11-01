
/* ==== FUN_00421ef8 @ 00421ef8 ==== 
 * signature: HWND __register FUN_00421ef8(void)
 * body: 00421ef8-00421f0f
 */

HWND FUN_00421ef8(void)

{
  HWND hWnd;
  
  hWnd = FUN_00439c8c();
  SetCapture(hWnd);
  return hWnd;
}


