
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 100154b4 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 100154b4-100154b9
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


