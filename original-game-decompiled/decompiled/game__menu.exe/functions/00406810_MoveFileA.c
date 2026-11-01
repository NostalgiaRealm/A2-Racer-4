
/* ==== KERNEL32.DLL::MoveFileA @ 00406810 ==== 
 * signature: BOOL __stdcall MoveFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName)
 * body: 00406810-00406815
 * thunk to: KERNEL32.DLL::MoveFileA
 */

BOOL __stdcall MoveFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveFileA(lpExistingFileName,lpNewFileName);
  return BVar1;
}


