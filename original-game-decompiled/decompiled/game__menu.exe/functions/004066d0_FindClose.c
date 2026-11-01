
/* ==== KERNEL32.DLL::FindClose @ 004066d0 ==== 
 * signature: BOOL __stdcall FindClose(HANDLE hFindFile)
 * body: 004066d0-004066d5
 * thunk to: KERNEL32.DLL::FindClose
 */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


