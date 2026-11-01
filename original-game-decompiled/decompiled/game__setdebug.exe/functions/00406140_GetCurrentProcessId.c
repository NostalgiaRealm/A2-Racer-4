
/* ==== KERNEL32.DLL::GetCurrentProcessId @ 00406140 ==== 
 * signature: DWORD __stdcall GetCurrentProcessId(void)
 * body: 00406140-00406145
 * thunk to: KERNEL32.DLL::GetCurrentProcessId
 */

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}


