
/* ==== ADVAPI32.DLL::RegCloseKey @ 004060a0 ==== 
 * signature: LSTATUS __stdcall RegCloseKey(HKEY hKey)
 * body: 004060a0-004060a5
 * thunk to: ADVAPI32.DLL::RegCloseKey
 */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004060a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


