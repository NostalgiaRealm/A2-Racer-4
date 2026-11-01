
/* ==== KERNEL32.DLL::DeleteFileA @ 004066a8 ==== 
 * signature: BOOL __stdcall DeleteFileA(LPCSTR lpFileName)
 * body: 004066a8-004066ad
 * thunk to: KERNEL32.DLL::DeleteFileA
 */

BOOL __stdcall DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}


