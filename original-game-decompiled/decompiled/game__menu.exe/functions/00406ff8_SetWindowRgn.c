
/* ==== USER32.DLL::SetWindowRgn @ 00406ff8 ==== 
 * signature: int __stdcall SetWindowRgn(HWND hWnd, HRGN hRgn, BOOL bRedraw)
 * body: 00406ff8-00406ffd
 * thunk to: USER32.DLL::SetWindowRgn
 */

int __stdcall SetWindowRgn(HWND hWnd,HRGN hRgn,BOOL bRedraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowRgn(hWnd,hRgn,bRedraw);
  return iVar1;
}


