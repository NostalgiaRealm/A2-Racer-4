
/* ==== KERNEL32.DLL::GetTickCount @ 00406780 ==== 
 * signature: DWORD __stdcall GetTickCount(void)
 * body: 00406780-00406785
 * thunk to: KERNEL32.DLL::GetTickCount
 */

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


