
/* ==== KERNEL32.DLL::GetVersionExA @ 00406798 ==== 
 * signature: BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
 * body: 00406798-0040679d
 * thunk to: KERNEL32.DLL::GetVersionExA
 */

BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


