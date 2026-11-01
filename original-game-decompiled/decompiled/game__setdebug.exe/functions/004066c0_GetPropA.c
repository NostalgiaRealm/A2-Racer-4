
/* ==== USER32.DLL::GetPropA @ 004066c0 ==== 
 * signature: HANDLE __stdcall GetPropA(HWND hWnd, LPCSTR lpString)
 * body: 004066c0-004066c5
 * thunk to: USER32.DLL::GetPropA
 */

HANDLE __stdcall GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}


