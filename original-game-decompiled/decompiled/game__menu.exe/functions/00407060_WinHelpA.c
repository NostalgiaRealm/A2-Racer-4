
/* ==== USER32.DLL::WinHelpA @ 00407060 ==== 
 * signature: BOOL __stdcall WinHelpA(HWND hWndMain, LPCSTR lpszHelp, UINT uCommand, ULONG_PTR dwData)
 * body: 00407060-00407065
 * thunk to: USER32.DLL::WinHelpA
 */

BOOL __stdcall WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
  return BVar1;
}


