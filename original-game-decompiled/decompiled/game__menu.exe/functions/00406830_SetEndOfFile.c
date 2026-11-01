
/* ==== KERNEL32.DLL::SetEndOfFile @ 00406830 ==== 
 * signature: BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * body: 00406830-00406835
 * thunk to: KERNEL32.DLL::SetEndOfFile
 */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


