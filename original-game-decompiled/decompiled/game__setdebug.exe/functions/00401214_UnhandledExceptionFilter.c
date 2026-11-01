
/* ==== KERNEL32.DLL::UnhandledExceptionFilter @ 00401214 ==== 
 * signature: LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo)
 * body: 00401214-00401219
 * thunk to: KERNEL32.DLL::UnhandledExceptionFilter
 */

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


