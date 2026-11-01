
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 004053c0 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 004053c0-004053c5
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004053c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


