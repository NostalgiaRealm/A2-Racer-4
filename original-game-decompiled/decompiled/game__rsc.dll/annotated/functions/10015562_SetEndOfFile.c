
/* ==== KERNEL32.DLL::SetEndOfFile @ 10015562 ==== 
 * signature: BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * body: 10015562-10015567
 * thunk to: KERNEL32.DLL::SetEndOfFile
 */

BOOL SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


