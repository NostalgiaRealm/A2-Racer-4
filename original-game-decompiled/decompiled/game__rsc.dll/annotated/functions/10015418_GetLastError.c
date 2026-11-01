
/* ==== KERNEL32.DLL::GetLastError @ 10015418 ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 10015418-1001541d
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


