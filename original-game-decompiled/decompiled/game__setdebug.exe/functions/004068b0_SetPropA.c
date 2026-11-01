
/* ==== USER32.DLL::SetPropA @ 004068b0 ==== 
 * signature: BOOL __stdcall SetPropA(HWND hWnd, LPCSTR lpString, HANDLE hData)
 * body: 004068b0-004068b5
 * thunk to: USER32.DLL::SetPropA
 */

BOOL __stdcall SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004068b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}


