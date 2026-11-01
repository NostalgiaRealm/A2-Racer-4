
/* ==== USER32.DLL::EnumDisplaySettingsA @ 00406c70 ==== 
 * signature: BOOL __stdcall EnumDisplaySettingsA(LPCSTR lpszDeviceName, DWORD iModeNum, DEVMODEA * lpDevMode)
 * body: 00406c70-00406c75
 * thunk to: USER32.DLL::EnumDisplaySettingsA
 */

BOOL __stdcall EnumDisplaySettingsA(LPCSTR lpszDeviceName,DWORD iModeNum,DEVMODEA *lpDevMode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumDisplaySettingsA(lpszDeviceName,iModeNum,lpDevMode);
  return BVar1;
}


