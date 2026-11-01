
/* ==== KERNEL32.DLL::FreeLibrary @ 004066f8 ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 004066f8-004066fd
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004066f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


