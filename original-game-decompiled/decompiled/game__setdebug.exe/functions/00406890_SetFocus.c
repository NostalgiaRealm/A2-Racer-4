
/* ==== USER32.DLL::SetFocus @ 00406890 ==== 
 * signature: HWND __stdcall SetFocus(HWND hWnd)
 * body: 00406890-00406895
 * thunk to: USER32.DLL::SetFocus
 */

HWND __stdcall SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}


