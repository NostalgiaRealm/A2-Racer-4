
/* ==== KERNEL32.DLL::CopyFileA @ 00406680 ==== 
 * signature: BOOL __stdcall CopyFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, BOOL bFailIfExists)
 * body: 00406680-00406685
 * thunk to: KERNEL32.DLL::CopyFileA
 */

BOOL __stdcall CopyFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName,BOOL bFailIfExists)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CopyFileA(lpExistingFileName,lpNewFileName,bFailIfExists);
  return BVar1;
}


