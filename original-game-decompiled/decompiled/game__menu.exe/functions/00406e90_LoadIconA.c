
/* ==== USER32.DLL::LoadIconA @ 00406e90 ==== 
 * signature: HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName)
 * body: 00406e90-00406e95
 * thunk to: USER32.DLL::LoadIconA
 */

HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}


