
/* ==== USER32.DLL::ChangeDisplaySettingsA @ 00406b78 ==== 
 * signature: LONG __stdcall ChangeDisplaySettingsA(DEVMODEA * lpDevMode, DWORD dwFlags)
 * body: 00406b78-00406b7d
 * thunk to: USER32.DLL::ChangeDisplaySettingsA
 */

LONG __stdcall ChangeDisplaySettingsA(DEVMODEA *lpDevMode,DWORD dwFlags)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ChangeDisplaySettingsA(lpDevMode,dwFlags);
  return LVar1;
}


