
/* ==== USER32.DLL::IsWindow @ 00406788 ==== 
 * signature: BOOL __stdcall IsWindow(HWND hWnd)
 * body: 00406788-0040678d
 * thunk to: USER32.DLL::IsWindow
 */

BOOL __stdcall IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}


