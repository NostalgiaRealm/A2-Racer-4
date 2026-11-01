
/* ==== KERNEL32.DLL::FreeLibrary @ 00401310 ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 00401310-00401315
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


