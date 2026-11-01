
/* ==== KERNEL32.DLL::FindClose @ 00406108 ==== 
 * signature: BOOL __stdcall FindClose(HANDLE hFindFile)
 * body: 00406108-0040610d
 * thunk to: KERNEL32.DLL::FindClose
 */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


