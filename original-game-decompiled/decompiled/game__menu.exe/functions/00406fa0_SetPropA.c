
/* ==== USER32.DLL::SetPropA @ 00406fa0 ==== 
 * signature: BOOL __stdcall SetPropA(HWND hWnd, LPCSTR lpString, HANDLE hData)
 * body: 00406fa0-00406fa5
 * thunk to: USER32.DLL::SetPropA
 */

BOOL __stdcall SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}


