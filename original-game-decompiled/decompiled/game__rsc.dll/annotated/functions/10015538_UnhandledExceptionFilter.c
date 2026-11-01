
/* ==== KERNEL32.DLL::UnhandledExceptionFilter @ 10015538 ==== 
 * signature: LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo)
 * body: 10015538-1001553d
 * thunk to: KERNEL32.DLL::UnhandledExceptionFilter
 */

LONG UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


