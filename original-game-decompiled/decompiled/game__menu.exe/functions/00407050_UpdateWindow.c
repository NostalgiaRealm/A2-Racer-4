
/* ==== USER32.DLL::UpdateWindow @ 00407050 ==== 
 * signature: BOOL __stdcall UpdateWindow(HWND hWnd)
 * body: 00407050-00407055
 * thunk to: USER32.DLL::UpdateWindow
 */

BOOL __stdcall UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}


