
/* ==== USER32.DLL::GetDesktopWindow @ 00406cf0 ==== 
 * signature: HWND __stdcall GetDesktopWindow(void)
 * body: 00406cf0-00406cf5
 * thunk to: USER32.DLL::GetDesktopWindow
 */

HWND __stdcall GetDesktopWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDesktopWindow();
  return pHVar1;
}


