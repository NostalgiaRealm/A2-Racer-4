
/* ==== USER32.DLL::LoadIconA @ 004067c0 ==== 
 * signature: HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName)
 * body: 004067c0-004067c5
 * thunk to: USER32.DLL::LoadIconA
 */

HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}


