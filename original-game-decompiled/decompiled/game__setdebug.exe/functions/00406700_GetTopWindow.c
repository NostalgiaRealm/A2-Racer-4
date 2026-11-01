
/* ==== USER32.DLL::GetTopWindow @ 00406700 ==== 
 * signature: HWND __stdcall GetTopWindow(HWND hWnd)
 * body: 00406700-00406705
 * thunk to: USER32.DLL::GetTopWindow
 */

HWND __stdcall GetTopWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetTopWindow(hWnd);
  return pHVar1;
}


