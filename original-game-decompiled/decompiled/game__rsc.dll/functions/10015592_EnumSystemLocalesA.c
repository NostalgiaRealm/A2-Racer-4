
/* ==== KERNEL32.DLL::EnumSystemLocalesA @ 10015592 ==== 
 * signature: BOOL __stdcall EnumSystemLocalesA(LOCALE_ENUMPROCA lpLocaleEnumProc, DWORD dwFlags)
 * body: 10015592-10015597
 * thunk to: KERNEL32.DLL::EnumSystemLocalesA
 */

BOOL EnumSystemLocalesA(LOCALE_ENUMPROCA lpLocaleEnumProc,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumSystemLocalesA(lpLocaleEnumProc,dwFlags);
  return BVar1;
}


