
/* ==== USER32.DLL::FrameRect @ 004065e0 ==== 
 * signature: int __stdcall FrameRect(HDC hDC, RECT * lprc, HBRUSH hbr)
 * body: 004065e0-004065e5
 * thunk to: USER32.DLL::FrameRect
 */

int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004065e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}


