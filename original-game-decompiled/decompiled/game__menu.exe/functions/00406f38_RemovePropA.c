
/* ==== USER32.DLL::RemovePropA @ 00406f38 ==== 
 * signature: HANDLE __stdcall RemovePropA(HWND hWnd, LPCSTR lpString)
 * body: 00406f38-00406f3d
 * thunk to: USER32.DLL::RemovePropA
 */

HANDLE __stdcall RemovePropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemovePropA(hWnd,lpString);
  return pvVar1;
}


