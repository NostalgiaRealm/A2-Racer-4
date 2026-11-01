
/* ==== KERNEL32.DLL::GetVersionExA @ 1001559e ==== 
 * signature: BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
 * body: 1001559e-100155a3
 * thunk to: KERNEL32.DLL::GetVersionExA
 */

BOOL GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001559e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


