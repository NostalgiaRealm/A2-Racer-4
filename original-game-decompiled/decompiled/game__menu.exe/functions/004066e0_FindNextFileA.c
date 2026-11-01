
/* ==== KERNEL32.DLL::FindNextFileA @ 004066e0 ==== 
 * signature: BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)
 * body: 004066e0-004066e5
 * thunk to: KERNEL32.DLL::FindNextFileA
 */

BOOL __stdcall FindNextFileA(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindNextFileA(hFindFile,lpFindFileData);
  return BVar1;
}


