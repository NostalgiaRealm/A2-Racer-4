
/* ==== USER32.DLL::EnumWindows @ 00406c80 ==== 
 * signature: BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc, LPARAM lParam)
 * body: 00406c80-00406c85
 * thunk to: USER32.DLL::EnumWindows
 */

BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumWindows(lpEnumFunc,lParam);
  return BVar1;
}


