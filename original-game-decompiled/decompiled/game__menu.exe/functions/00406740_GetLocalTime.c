
/* ==== KERNEL32.DLL::GetLocalTime @ 00406740 ==== 
 * signature: void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)
 * body: 00406740-00406745
 * thunk to: KERNEL32.DLL::GetLocalTime
 */

void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00406740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}


