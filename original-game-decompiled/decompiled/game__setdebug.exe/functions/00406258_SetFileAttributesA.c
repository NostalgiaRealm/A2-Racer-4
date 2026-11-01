
/* ==== KERNEL32.DLL::SetFileAttributesA @ 00406258 ==== 
 * signature: BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName, DWORD dwFileAttributes)
 * body: 00406258-0040625d
 * thunk to: KERNEL32.DLL::SetFileAttributesA
 */

BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName,DWORD dwFileAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileAttributesA(lpFileName,dwFileAttributes);
  return BVar1;
}


