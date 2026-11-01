
/* ==== KERNEL32.DLL::GetLastError @ 00401320 ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 00401320-00401325
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


