
/* ==== USER32.DLL::GetLastActivePopup @ 00406678 ==== 
 * signature: HWND __stdcall GetLastActivePopup(HWND hWnd)
 * body: 00406678-0040667d
 * thunk to: USER32.DLL::GetLastActivePopup
 */

HWND __stdcall GetLastActivePopup(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetLastActivePopup(hWnd);
  return pHVar1;
}


