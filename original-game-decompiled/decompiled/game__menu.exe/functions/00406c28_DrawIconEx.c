
/* ==== USER32.DLL::DrawIconEx @ 00406c28 ==== 
 * signature: BOOL __stdcall DrawIconEx(HDC hdc, int xLeft, int yTop, HICON hIcon, int cxWidth, int cyWidth, UINT istepIfAniCur, HBRUSH hbrFlickerFreeDraw, UINT diFlags)
 * body: 00406c28-00406c2d
 * thunk to: USER32.DLL::DrawIconEx
 */

BOOL __stdcall
DrawIconEx(HDC hdc,int xLeft,int yTop,HICON hIcon,int cxWidth,int cyWidth,UINT istepIfAniCur,
          HBRUSH hbrFlickerFreeDraw,UINT diFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIconEx(hdc,xLeft,yTop,hIcon,cxWidth,cyWidth,istepIfAniCur,hbrFlickerFreeDraw,diFlags);
  return BVar1;
}


