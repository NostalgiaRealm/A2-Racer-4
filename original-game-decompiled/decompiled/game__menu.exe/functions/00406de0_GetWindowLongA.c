
/* ==== USER32.DLL::GetWindowLongA @ 00406de0 ==== 
 * signature: LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
 * body: 00406de0-00406de5
 * thunk to: USER32.DLL::GetWindowLongA
 */

LONG __stdcall GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


