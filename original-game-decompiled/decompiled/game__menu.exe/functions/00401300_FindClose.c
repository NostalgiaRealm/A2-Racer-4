
/* ==== KERNEL32.DLL::FindClose @ 00401300 ==== 
 * signature: BOOL __stdcall FindClose(HANDLE hFindFile)
 * body: 00401300-00401305
 * thunk to: KERNEL32.DLL::FindClose
 */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


