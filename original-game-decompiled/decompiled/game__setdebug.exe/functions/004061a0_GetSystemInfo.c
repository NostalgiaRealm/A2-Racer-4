
/* ==== KERNEL32.DLL::GetSystemInfo @ 004061a0 ==== 
 * signature: void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
 * body: 004061a0-004061a5
 * thunk to: KERNEL32.DLL::GetSystemInfo
 */

void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004061a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


