
/* ==== KERNEL32.DLL::UnhandledExceptionFilter @ 004012d8 ==== 
 * signature: LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo)
 * body: 004012d8-004012dd
 * thunk to: KERNEL32.DLL::UnhandledExceptionFilter
 */

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


