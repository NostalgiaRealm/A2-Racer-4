
/* ==== USER32.DLL::EnumWindows @ 004065c0 ==== 
 * signature: BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc, LPARAM lParam)
 * body: 004065c0-004065c5
 * thunk to: USER32.DLL::EnumWindows
 */

BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumWindows(lpEnumFunc,lParam);
  return BVar1;
}


