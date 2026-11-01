
/* ==== USER32.DLL::EnableWindow @ 004065a8 ==== 
 * signature: BOOL __stdcall EnableWindow(HWND hWnd, BOOL bEnable)
 * body: 004065a8-004065ad
 * thunk to: USER32.DLL::EnableWindow
 */

BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}


