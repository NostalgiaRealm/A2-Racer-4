
/* ==== USER32.DLL::GetWindow @ 00406dd0 ==== 
 * signature: HWND __stdcall GetWindow(HWND hWnd, UINT uCmd)
 * body: 00406dd0-00406dd5
 * thunk to: USER32.DLL::GetWindow
 */

HWND __stdcall GetWindow(HWND hWnd,UINT uCmd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindow(hWnd,uCmd);
  return pHVar1;
}


