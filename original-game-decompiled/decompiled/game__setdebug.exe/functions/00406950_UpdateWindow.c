
/* ==== USER32.DLL::UpdateWindow @ 00406950 ==== 
 * signature: BOOL __stdcall UpdateWindow(HWND hWnd)
 * body: 00406950-00406955
 * thunk to: USER32.DLL::UpdateWindow
 */

BOOL __stdcall UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}


