
/* ==== USER32.DLL::ShowWindow @ 00406918 ==== 
 * signature: BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow)
 * body: 00406918-0040691d
 * thunk to: USER32.DLL::ShowWindow
 */

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}


