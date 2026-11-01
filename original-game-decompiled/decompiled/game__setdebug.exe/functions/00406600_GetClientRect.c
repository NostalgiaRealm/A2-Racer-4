
/* ==== USER32.DLL::GetClientRect @ 00406600 ==== 
 * signature: BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
 * body: 00406600-00406605
 * thunk to: USER32.DLL::GetClientRect
 */

BOOL __stdcall GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}


