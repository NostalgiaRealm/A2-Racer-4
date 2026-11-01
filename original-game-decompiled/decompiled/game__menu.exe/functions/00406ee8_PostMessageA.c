
/* ==== USER32.DLL::PostMessageA @ 00406ee8 ==== 
 * signature: BOOL __stdcall PostMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 00406ee8-00406eed
 * thunk to: USER32.DLL::PostMessageA
 */

BOOL __stdcall PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


