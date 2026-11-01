
/* ==== KERNEL32.DLL::Sleep @ 1001557a ==== 
 * signature: void __stdcall Sleep(DWORD dwMilliseconds)
 * body: 1001557a-1001557f
 * thunk to: KERNEL32.DLL::Sleep
 */

void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x1001557a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


