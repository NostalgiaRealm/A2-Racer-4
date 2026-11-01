
/* ==== USER32.DLL::PostMessageA @ 00406808 ==== 
 * signature: BOOL __stdcall PostMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 00406808-0040680d
 * thunk to: USER32.DLL::PostMessageA
 */

BOOL __stdcall PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


