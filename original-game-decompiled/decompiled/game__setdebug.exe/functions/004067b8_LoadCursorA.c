
/* ==== USER32.DLL::LoadCursorA @ 004067b8 ==== 
 * signature: HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName)
 * body: 004067b8-004067bd
 * thunk to: USER32.DLL::LoadCursorA
 */

HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004067b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}


