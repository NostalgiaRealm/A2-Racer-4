
/* ==== USER32.DLL::GetActiveWindow @ 004065e8 ==== 
 * signature: HWND __stdcall GetActiveWindow(void)
 * body: 004065e8-004065ed
 * thunk to: USER32.DLL::GetActiveWindow
 */

HWND __stdcall GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}


