
/* ==== USER32.DLL::SetWindowLongA @ 00406fd0 ==== 
 * signature: LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
 * body: 00406fd0-00406fd5
 * thunk to: USER32.DLL::SetWindowLongA
 */

LONG __stdcall SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}


