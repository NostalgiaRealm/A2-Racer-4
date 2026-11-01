
/* ==== USER32.DLL::GetWindowLongA @ 00406718 ==== 
 * signature: LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
 * body: 00406718-0040671d
 * thunk to: USER32.DLL::GetWindowLongA
 */

LONG __stdcall GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


