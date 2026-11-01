
/* ==== USER32.DLL::FillRect @ 004065d0 ==== 
 * signature: int __stdcall FillRect(HDC hDC, RECT * lprc, HBRUSH hbr)
 * body: 004065d0-004065d5
 * thunk to: USER32.DLL::FillRect
 */

int __stdcall FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}


