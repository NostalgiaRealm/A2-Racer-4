
/* ==== KERNEL32.DLL::RaiseException @ 004012b0 ==== 
 * signature: void __stdcall RaiseException(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, ULONG_PTR * lpArguments)
 * body: 004012b0-004012b5
 * thunk to: KERNEL32.DLL::RaiseException
 */

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004012b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}


