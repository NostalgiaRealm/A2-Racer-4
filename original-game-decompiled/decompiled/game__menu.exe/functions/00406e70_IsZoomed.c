
/* ==== USER32.DLL::IsZoomed @ 00406e70 ==== 
 * signature: BOOL __stdcall IsZoomed(HWND hWnd)
 * body: 00406e70-00406e75
 * thunk to: USER32.DLL::IsZoomed
 */

BOOL __stdcall IsZoomed(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsZoomed(hWnd);
  return BVar1;
}


