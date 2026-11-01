
/* ==== USER32.DLL::SendMessageA @ 00406f50 ==== 
 * signature: LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 00406f50-00406f55
 * thunk to: USER32.DLL::SendMessageA
 */

LRESULT __stdcall SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


