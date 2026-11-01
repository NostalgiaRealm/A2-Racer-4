
/* ==== USER32.DLL::GetParent @ 00406d80 ==== 
 * signature: HWND __stdcall GetParent(HWND hWnd)
 * body: 00406d80-00406d85
 * thunk to: USER32.DLL::GetParent
 */

HWND __stdcall GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}


