
/* ==== USER32.DLL::GetActiveWindow @ 00406ca8 ==== 
 * signature: HWND __stdcall GetActiveWindow(void)
 * body: 00406ca8-00406cad
 * thunk to: USER32.DLL::GetActiveWindow
 */

HWND __stdcall GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}


