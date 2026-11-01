
/* ==== USER32.DLL::IsZoomed @ 004067a0 ==== 
 * signature: BOOL __stdcall IsZoomed(HWND hWnd)
 * body: 004067a0-004067a5
 * thunk to: USER32.DLL::IsZoomed
 */

BOOL __stdcall IsZoomed(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsZoomed(hWnd);
  return BVar1;
}


