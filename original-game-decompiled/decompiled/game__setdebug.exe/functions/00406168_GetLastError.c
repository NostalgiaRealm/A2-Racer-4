
/* ==== KERNEL32.DLL::GetLastError @ 00406168 ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 00406168-0040616d
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


