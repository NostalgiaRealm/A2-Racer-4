
/* ==== USER32.DLL::GetLastActivePopup @ 00406d38 ==== 
 * signature: HWND __stdcall GetLastActivePopup(HWND hWnd)
 * body: 00406d38-00406d3d
 * thunk to: USER32.DLL::GetLastActivePopup
 */

HWND __stdcall GetLastActivePopup(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetLastActivePopup(hWnd);
  return pHVar1;
}


