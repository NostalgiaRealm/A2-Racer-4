
/* ==== USER32.DLL::GetWindowDC @ 00406dd8 ==== 
 * signature: HDC __stdcall GetWindowDC(HWND hWnd)
 * body: 00406dd8-00406ddd
 * thunk to: USER32.DLL::GetWindowDC
 */

HDC __stdcall GetWindowDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetWindowDC(hWnd);
  return pHVar1;
}


