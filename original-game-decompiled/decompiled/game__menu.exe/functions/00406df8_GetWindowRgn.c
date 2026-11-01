
/* ==== USER32.DLL::GetWindowRgn @ 00406df8 ==== 
 * signature: int __stdcall GetWindowRgn(HWND hWnd, HRGN hRgn)
 * body: 00406df8-00406dfd
 * thunk to: USER32.DLL::GetWindowRgn
 */

int __stdcall GetWindowRgn(HWND hWnd,HRGN hRgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowRgn(hWnd,hRgn);
  return iVar1;
}


