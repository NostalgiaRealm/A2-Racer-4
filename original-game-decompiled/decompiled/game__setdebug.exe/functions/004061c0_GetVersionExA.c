
/* ==== KERNEL32.DLL::GetVersionExA @ 004061c0 ==== 
 * signature: BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
 * body: 004061c0-004061c5
 * thunk to: KERNEL32.DLL::GetVersionExA
 */

BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004061c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


