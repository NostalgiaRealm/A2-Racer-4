
/* ==== KERNEL32.DLL::GetCurrentProcessId @ 00406710 ==== 
 * signature: DWORD __stdcall GetCurrentProcessId(void)
 * body: 00406710-00406715
 * thunk to: KERNEL32.DLL::GetCurrentProcessId
 */

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}


