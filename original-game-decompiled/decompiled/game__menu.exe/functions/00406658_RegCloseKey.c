
/* ==== ADVAPI32.DLL::RegCloseKey @ 00406658 ==== 
 * signature: LSTATUS __stdcall RegCloseKey(HKEY hKey)
 * body: 00406658-0040665d
 * thunk to: ADVAPI32.DLL::RegCloseKey
 */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


