
/* ==== USER32.DLL::FrameRect @ 00406ca0 ==== 
 * signature: int __stdcall FrameRect(HDC hDC, RECT * lprc, HBRUSH hbr)
 * body: 00406ca0-00406ca5
 * thunk to: USER32.DLL::FrameRect
 */

int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}


