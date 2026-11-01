
/* ==== USER32.DLL::GetFocus @ 00406638 ==== 
 * signature: HWND __stdcall GetFocus(void)
 * body: 00406638-0040663d
 * thunk to: USER32.DLL::GetFocus
 */

HWND __stdcall GetFocus(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetFocus();
  return pHVar1;
}


