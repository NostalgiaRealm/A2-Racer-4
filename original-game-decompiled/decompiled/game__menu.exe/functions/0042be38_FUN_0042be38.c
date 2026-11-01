
/* ==== FUN_0042be38 @ 0042be38 ==== 
 * signature: HWND __register FUN_0042be38(void)
 * body: 0042be38-0042be4f
 */

HWND FUN_0042be38(void)

{
  HWND hWnd;
  
  hWnd = FUN_0044463c();
  SetCapture(hWnd);
  return hWnd;
}


