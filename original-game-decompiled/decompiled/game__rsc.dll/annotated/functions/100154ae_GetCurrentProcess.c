
/* ==== KERNEL32.DLL::GetCurrentProcess @ 100154ae ==== 
 * signature: HANDLE __stdcall GetCurrentProcess(void)
 * body: 100154ae-100154b3
 * thunk to: KERNEL32.DLL::GetCurrentProcess
 */

HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100154ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}


