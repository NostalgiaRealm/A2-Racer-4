
/* ==== USER32.DLL::SetCapture @ 00406878 ==== 
 * signature: HWND __stdcall SetCapture(HWND hWnd)
 * body: 00406878-0040687d
 * thunk to: USER32.DLL::SetCapture
 */

HWND __stdcall SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}


