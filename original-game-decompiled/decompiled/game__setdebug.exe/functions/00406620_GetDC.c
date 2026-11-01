
/* ==== USER32.DLL::GetDC @ 00406620 ==== 
 * signature: HDC __stdcall GetDC(HWND hWnd)
 * body: 00406620-00406625
 * thunk to: USER32.DLL::GetDC
 */

HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


