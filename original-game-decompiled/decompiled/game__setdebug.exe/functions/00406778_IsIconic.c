
/* ==== USER32.DLL::IsIconic @ 00406778 ==== 
 * signature: BOOL __stdcall IsIconic(HWND hWnd)
 * body: 00406778-0040677d
 * thunk to: USER32.DLL::IsIconic
 */

BOOL __stdcall IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}


