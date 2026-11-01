
/* ==== KERNEL32.DLL::SetEndOfFile @ 00401204 ==== 
 * signature: BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * body: 00401204-00401209
 * thunk to: KERNEL32.DLL::SetEndOfFile
 */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


