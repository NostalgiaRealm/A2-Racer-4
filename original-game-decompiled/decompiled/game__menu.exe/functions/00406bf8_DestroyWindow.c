
/* ==== USER32.DLL::DestroyWindow @ 00406bf8 ==== 
 * signature: BOOL __stdcall DestroyWindow(HWND hWnd)
 * body: 00406bf8-00406bfd
 * thunk to: USER32.DLL::DestroyWindow
 */

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


