
/* ==== USER32.DLL::GetParent @ 004066b8 ==== 
 * signature: HWND __stdcall GetParent(HWND hWnd)
 * body: 004066b8-004066bd
 * thunk to: USER32.DLL::GetParent
 */

HWND __stdcall GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}


