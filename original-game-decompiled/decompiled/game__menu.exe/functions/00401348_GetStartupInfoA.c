
/* ==== KERNEL32.DLL::GetStartupInfoA @ 00401348 ==== 
 * signature: void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
 * body: 00401348-0040134d
 * thunk to: KERNEL32.DLL::GetStartupInfoA
 */

void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00401348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}


