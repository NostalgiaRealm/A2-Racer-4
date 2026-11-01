
/* ==== USER32.DLL::GetCapture @ 004065f0 ==== 
 * signature: HWND __stdcall GetCapture(void)
 * body: 004065f0-004065f5
 * thunk to: USER32.DLL::GetCapture
 */

HWND __stdcall GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCapture();
  return pHVar1;
}


