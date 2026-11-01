
/* ==== KERNEL32.DLL::SetLastError @ 100154cc ==== 
 * signature: void __stdcall SetLastError(DWORD dwErrCode)
 * body: 100154cc-100154d1
 * thunk to: KERNEL32.DLL::SetLastError
 */

void SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x100154cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}


