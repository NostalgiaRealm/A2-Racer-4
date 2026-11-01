
/* ==== USER32.DLL::ReleaseDC @ 00406840 ==== 
 * signature: int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
 * body: 00406840-00406845
 * thunk to: USER32.DLL::ReleaseDC
 */

int __stdcall ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}


