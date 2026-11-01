
/* ==== USER32.DLL::GetCapture @ 00406cb0 ==== 
 * signature: HWND __stdcall GetCapture(void)
 * body: 00406cb0-00406cb5
 * thunk to: USER32.DLL::GetCapture
 */

HWND __stdcall GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCapture();
  return pHVar1;
}


