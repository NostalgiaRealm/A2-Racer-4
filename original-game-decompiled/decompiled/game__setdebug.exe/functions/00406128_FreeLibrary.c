
/* ==== KERNEL32.DLL::FreeLibrary @ 00406128 ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 00406128-0040612d
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


