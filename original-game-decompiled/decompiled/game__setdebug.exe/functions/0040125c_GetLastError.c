
/* ==== KERNEL32.DLL::GetLastError @ 0040125c ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 0040125c-00401261
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


