
/* ==== KERNEL32.DLL::WritePrivateProfileStringA @ 004062a0 ==== 
 * signature: BOOL __stdcall WritePrivateProfileStringA(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpString, LPCSTR lpFileName)
 * body: 004062a0-004062a5
 * thunk to: KERNEL32.DLL::WritePrivateProfileStringA
 */

BOOL __stdcall
WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004062a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return BVar1;
}


