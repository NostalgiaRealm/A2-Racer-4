
/* ==== USER32.DLL::RemovePropA @ 00406850 ==== 
 * signature: HANDLE __stdcall RemovePropA(HWND hWnd, LPCSTR lpString)
 * body: 00406850-00406855
 * thunk to: USER32.DLL::RemovePropA
 */

HANDLE __stdcall RemovePropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemovePropA(hWnd,lpString);
  return pvVar1;
}


