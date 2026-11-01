
/* ==== USER32.DLL::LoadCursorA @ 00406e88 ==== 
 * signature: HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName)
 * body: 00406e88-00406e8d
 * thunk to: USER32.DLL::LoadCursorA
 */

HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}


