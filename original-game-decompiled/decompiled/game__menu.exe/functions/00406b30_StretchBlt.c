
/* ==== GDI32.DLL::StretchBlt @ 00406b30 ==== 
 * signature: BOOL __stdcall StretchBlt(HDC hdcDest, int xDest, int yDest, int wDest, int hDest, HDC hdcSrc, int xSrc, int ySrc, int wSrc, int hSrc, DWORD rop)
 * body: 00406b30-00406b35
 * thunk to: GDI32.DLL::StretchBlt
 */

BOOL __stdcall
StretchBlt(HDC hdcDest,int xDest,int yDest,int wDest,int hDest,HDC hdcSrc,int xSrc,int ySrc,int wSrc
          ,int hSrc,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00406b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = StretchBlt(hdcDest,xDest,yDest,wDest,hDest,hdcSrc,xSrc,ySrc,wSrc,hSrc,rop);
  return BVar1;
}


