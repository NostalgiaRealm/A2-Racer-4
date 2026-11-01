
/* ==== KERNEL32.DLL::SetEndOfFile @ 004012c8 ==== 
 * signature: BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * body: 004012c8-004012cd
 * thunk to: KERNEL32.DLL::SetEndOfFile
 */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


