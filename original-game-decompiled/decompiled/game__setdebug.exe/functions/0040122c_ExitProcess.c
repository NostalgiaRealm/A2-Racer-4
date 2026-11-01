
/* ==== KERNEL32.DLL::ExitProcess @ 0040122c ==== 
 * signature: noreturn void __stdcall ExitProcess(UINT uExitCode)
 * body: 0040122c-00401231
 * thunk to: KERNEL32.DLL::ExitProcess
 */

void __stdcall ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x0040122c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


