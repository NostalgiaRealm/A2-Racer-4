
/* ==== KERNEL32.DLL::GetCurrentThread @ 100154d8 ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 100154d8-100154dd
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


