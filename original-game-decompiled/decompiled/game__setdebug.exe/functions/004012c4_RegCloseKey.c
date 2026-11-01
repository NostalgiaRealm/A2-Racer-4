
/* ==== ADVAPI32.DLL::RegCloseKey @ 004012c4 ==== 
 * signature: LSTATUS __stdcall RegCloseKey(HKEY hKey)
 * body: 004012c4-004012c9
 * thunk to: ADVAPI32.DLL::RegCloseKey
 */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


