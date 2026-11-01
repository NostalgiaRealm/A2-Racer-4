
/* ==== USER32.DLL::GetDC @ 00406ce0 ==== 
 * signature: HDC __stdcall GetDC(HWND hWnd)
 * body: 00406ce0-00406ce5
 * thunk to: USER32.DLL::GetDC
 */

HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


