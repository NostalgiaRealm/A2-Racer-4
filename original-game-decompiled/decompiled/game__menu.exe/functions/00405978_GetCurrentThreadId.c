
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 00405978 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 00405978-0040597d
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00405978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


