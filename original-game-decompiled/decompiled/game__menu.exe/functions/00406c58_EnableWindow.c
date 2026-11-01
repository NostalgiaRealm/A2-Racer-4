
/* ==== USER32.DLL::EnableWindow @ 00406c58 ==== 
 * signature: BOOL __stdcall EnableWindow(HWND hWnd, BOOL bEnable)
 * body: 00406c58-00406c5d
 * thunk to: USER32.DLL::EnableWindow
 */

BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}


