
/* ==== USER32.DLL::GetPropA @ 00406d88 ==== 
 * signature: HANDLE __stdcall GetPropA(HWND hWnd, LPCSTR lpString)
 * body: 00406d88-00406d8d
 * thunk to: USER32.DLL::GetPropA
 */

HANDLE __stdcall GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}


