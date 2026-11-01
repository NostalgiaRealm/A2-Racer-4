
/* ==== KERNEL32.DLL::RaiseException @ 004011ec ==== 
 * signature: void __stdcall RaiseException(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, ULONG_PTR * lpArguments)
 * body: 004011ec-004011f1
 * thunk to: KERNEL32.DLL::RaiseException
 */

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004011ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}


