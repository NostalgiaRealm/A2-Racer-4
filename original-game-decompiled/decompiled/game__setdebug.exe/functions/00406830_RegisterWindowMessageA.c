
/* ==== USER32.DLL::RegisterWindowMessageA @ 00406830 ==== 
 * signature: UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)
 * body: 00406830-00406835
 * thunk to: USER32.DLL::RegisterWindowMessageA
 */

UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageA(lpString);
  return UVar1;
}


