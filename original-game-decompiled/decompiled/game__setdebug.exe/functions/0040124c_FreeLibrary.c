
/* ==== KERNEL32.DLL::FreeLibrary @ 0040124c ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 0040124c-00401251
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


