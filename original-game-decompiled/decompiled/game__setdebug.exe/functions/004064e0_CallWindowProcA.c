
/* ==== USER32.DLL::CallWindowProcA @ 004064e0 ==== 
 * signature: LRESULT __stdcall CallWindowProcA(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 004064e0-004064e5
 * thunk to: USER32.DLL::CallWindowProcA
 */

LRESULT __stdcall
CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004064e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallWindowProcA(lpPrevWndFunc,hWnd,Msg,wParam,lParam);
  return LVar1;
}


