
/* ==== USER32.DLL::IsWindow @ 00406e58 ==== 
 * signature: BOOL __stdcall IsWindow(HWND hWnd)
 * body: 00406e58-00406e5d
 * thunk to: USER32.DLL::IsWindow
 */

BOOL __stdcall IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}


