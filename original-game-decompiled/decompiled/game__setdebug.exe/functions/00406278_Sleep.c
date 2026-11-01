
/* ==== KERNEL32.DLL::Sleep @ 00406278 ==== 
 * signature: void __stdcall Sleep(DWORD dwMilliseconds)
 * body: 00406278-0040627d
 * thunk to: KERNEL32.DLL::Sleep
 */

void __stdcall Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x00406278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


