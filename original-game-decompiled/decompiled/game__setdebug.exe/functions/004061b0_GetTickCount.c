
/* ==== KERNEL32.DLL::GetTickCount @ 004061b0 ==== 
 * signature: DWORD __stdcall GetTickCount(void)
 * body: 004061b0-004061b5
 * thunk to: KERNEL32.DLL::GetTickCount
 */

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


