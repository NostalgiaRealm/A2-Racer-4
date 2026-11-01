
/* ==== FUN_00439af8 @ 00439af8 ==== 
 * signature: undefined1 __register FUN_00439af8(void)
 * body: 00439af8-00439b21
 */

undefined1 FUN_00439af8(void)

{
  DWORD dwThreadId;
  code *lpfn;
  HWND *lParam;
  HWND local_8;
  undefined1 local_4;
  
  local_8 = GetActiveWindow();
  lParam = &local_8;
  local_4 = 0;
  lpfn = FUN_00439ad8;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
  return local_4;
}


