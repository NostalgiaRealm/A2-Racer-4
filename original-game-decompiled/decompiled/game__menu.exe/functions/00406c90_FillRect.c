
/* ==== USER32.DLL::FillRect @ 00406c90 ==== 
 * signature: int __stdcall FillRect(HDC hDC, RECT * lprc, HBRUSH hbr)
 * body: 00406c90-00406c95
 * thunk to: USER32.DLL::FillRect
 */

int __stdcall FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}


