
/* ==== USER32.DLL::DefFrameProcA @ 00406bc0 ==== 
 * signature: LRESULT __stdcall DefFrameProcA(HWND hWnd, HWND hWndMDIClient, UINT uMsg, WPARAM wParam, LPARAM lParam)
 * body: 00406bc0-00406bc5
 * thunk to: USER32.DLL::DefFrameProcA
 */

LRESULT __stdcall DefFrameProcA(HWND hWnd,HWND hWndMDIClient,UINT uMsg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefFrameProcA(hWnd,hWndMDIClient,uMsg,wParam,lParam);
  return LVar1;
}


