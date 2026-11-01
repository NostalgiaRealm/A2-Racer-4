
/* ==== USER32.DLL::ShowWindow @ 00407018 ==== 
 * signature: BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow)
 * body: 00407018-0040701d
 * thunk to: USER32.DLL::ShowWindow
 */

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}


