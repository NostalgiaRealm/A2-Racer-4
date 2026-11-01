
/* ==== USER32.DLL::IsWindowEnabled @ 00406e60 ==== 
 * signature: BOOL __stdcall IsWindowEnabled(HWND hWnd)
 * body: 00406e60-00406e65
 * thunk to: USER32.DLL::IsWindowEnabled
 */

BOOL __stdcall IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}


