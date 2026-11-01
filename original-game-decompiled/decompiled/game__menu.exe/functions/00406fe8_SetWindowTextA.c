
/* ==== USER32.DLL::SetWindowTextA @ 00406fe8 ==== 
 * signature: BOOL __stdcall SetWindowTextA(HWND hWnd, LPCSTR lpString)
 * body: 00406fe8-00406fed
 * thunk to: USER32.DLL::SetWindowTextA
 */

BOOL __stdcall SetWindowTextA(HWND hWnd,LPCSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowTextA(hWnd,lpString);
  return BVar1;
}


