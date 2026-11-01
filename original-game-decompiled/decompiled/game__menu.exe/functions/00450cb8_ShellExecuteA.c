
/* ==== SHELL32.DLL::ShellExecuteA @ 00450cb8 ==== 
 * signature: HINSTANCE __stdcall ShellExecuteA(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd)
 * body: 00450cb8-00450cbd
 * thunk to: SHELL32.DLL::ShellExecuteA
 */

HINSTANCE __stdcall
ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,LPCSTR lpDirectory,
             INT nShowCmd)

{
  HINSTANCE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00450cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  return pHVar1;
}


