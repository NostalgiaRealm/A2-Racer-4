
/* ==== USER32.DLL::IsIconic @ 00406e48 ==== 
 * signature: BOOL __stdcall IsIconic(HWND hWnd)
 * body: 00406e48-00406e4d
 * thunk to: USER32.DLL::IsIconic
 */

BOOL __stdcall IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}


