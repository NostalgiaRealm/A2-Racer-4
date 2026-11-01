
/* ==== USER32.DLL::IsWindowVisible @ 00406e68 ==== 
 * signature: BOOL __stdcall IsWindowVisible(HWND hWnd)
 * body: 00406e68-00406e6d
 * thunk to: USER32.DLL::IsWindowVisible
 */

BOOL __stdcall IsWindowVisible(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}


