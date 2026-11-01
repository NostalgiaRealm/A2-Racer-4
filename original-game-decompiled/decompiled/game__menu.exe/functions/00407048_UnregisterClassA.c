
/* ==== USER32.DLL::UnregisterClassA @ 00407048 ==== 
 * signature: BOOL __stdcall UnregisterClassA(LPCSTR lpClassName, HINSTANCE hInstance)
 * body: 00407048-0040704d
 * thunk to: USER32.DLL::UnregisterClassA
 */

BOOL __stdcall UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassA(lpClassName,hInstance);
  return BVar1;
}


