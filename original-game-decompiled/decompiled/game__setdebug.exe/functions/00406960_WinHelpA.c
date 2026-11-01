
/* ==== USER32.DLL::WinHelpA @ 00406960 ==== 
 * signature: BOOL __stdcall WinHelpA(HWND hWndMain, LPCSTR lpszHelp, UINT uCommand, ULONG_PTR dwData)
 * body: 00406960-00406965
 * thunk to: USER32.DLL::WinHelpA
 */

BOOL __stdcall WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
  return BVar1;
}


