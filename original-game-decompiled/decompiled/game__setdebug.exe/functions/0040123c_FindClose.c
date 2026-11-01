
/* ==== KERNEL32.DLL::FindClose @ 0040123c ==== 
 * signature: BOOL __stdcall FindClose(HANDLE hFindFile)
 * body: 0040123c-00401241
 * thunk to: KERNEL32.DLL::FindClose
 */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040123c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


