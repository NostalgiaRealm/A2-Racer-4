
/* ==== KERNEL32.DLL::Sleep @ 00406868 ==== 
 * signature: void __stdcall Sleep(DWORD dwMilliseconds)
 * body: 00406868-0040686d
 * thunk to: KERNEL32.DLL::Sleep
 */

void __stdcall Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x00406868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


