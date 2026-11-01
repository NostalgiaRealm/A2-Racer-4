
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 00406148 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 00406148-0040614d
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


