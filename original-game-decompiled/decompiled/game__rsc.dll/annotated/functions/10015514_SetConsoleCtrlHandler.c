
/* ==== KERNEL32.DLL::SetConsoleCtrlHandler @ 10015514 ==== 
 * signature: BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
 * body: 10015514-10015519
 * thunk to: KERNEL32.DLL::SetConsoleCtrlHandler
 */

BOOL SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}


