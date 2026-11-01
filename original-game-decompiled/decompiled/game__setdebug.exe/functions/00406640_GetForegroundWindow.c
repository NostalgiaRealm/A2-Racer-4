
/* ==== USER32.DLL::GetForegroundWindow @ 00406640 ==== 
 * signature: HWND __stdcall GetForegroundWindow(void)
 * body: 00406640-00406645
 * thunk to: USER32.DLL::GetForegroundWindow
 */

HWND __stdcall GetForegroundWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetForegroundWindow();
  return pHVar1;
}


