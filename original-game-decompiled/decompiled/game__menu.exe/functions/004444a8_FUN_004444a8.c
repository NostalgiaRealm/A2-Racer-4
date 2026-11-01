
/* ==== FUN_004444a8 @ 004444a8 ==== 
 * signature: undefined1 __register FUN_004444a8(void)
 * body: 004444a8-004444d1
 */

undefined1 FUN_004444a8(void)

{
  DWORD dwThreadId;
  code *lpfn;
  HWND *lParam;
  HWND local_8;
  undefined1 local_4;
  
  local_8 = GetActiveWindow();
  lParam = &local_8;
  local_4 = 0;
  lpfn = FUN_00444488;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
  return local_4;
}


