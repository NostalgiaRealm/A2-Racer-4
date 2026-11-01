
/* ==== USER32.DLL::GetWindow @ 004066b0 ==== 
 * signature: HWND __stdcall GetWindow(HWND hWnd, UINT uCmd)
 * body: 004066b0-004066b5
 * thunk to: USER32.DLL::GetWindow
 */

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}


