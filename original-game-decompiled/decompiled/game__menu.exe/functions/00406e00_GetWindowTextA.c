
/* ==== USER32.DLL::GetWindowTextA @ 00406e00 ==== 
 * signature: int __stdcall GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)
 * body: 00406e00-00406e05
 * thunk to: USER32.DLL::GetWindowTextA
 */

int __stdcall GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}


