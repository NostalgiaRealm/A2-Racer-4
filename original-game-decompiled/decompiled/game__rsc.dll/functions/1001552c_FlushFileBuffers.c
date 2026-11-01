
/* ==== KERNEL32.DLL::FlushFileBuffers @ 1001552c ==== 
 * signature: BOOL __stdcall FlushFileBuffers(HANDLE hFile)
 * body: 1001552c-10015531
 * thunk to: KERNEL32.DLL::FlushFileBuffers
 */

BOOL FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}


