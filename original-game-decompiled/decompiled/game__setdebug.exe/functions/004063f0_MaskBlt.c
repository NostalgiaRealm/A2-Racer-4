
/* ==== GDI32.DLL::MaskBlt @ 004063f0 ==== 
 * signature: BOOL __stdcall MaskBlt(HDC hdcDest, int xDest, int yDest, int width, int height, HDC hdcSrc, int xSrc, int ySrc, HBITMAP hbmMask, int xMask, int yMask, DWORD rop)
 * body: 004063f0-004063f5
 * thunk to: GDI32.DLL::MaskBlt
 */

BOOL __stdcall
MaskBlt(HDC hdcDest,int xDest,int yDest,int width,int height,HDC hdcSrc,int xSrc,int ySrc,
       HBITMAP hbmMask,int xMask,int yMask,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004063f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MaskBlt(hdcDest,xDest,yDest,width,height,hdcSrc,xSrc,ySrc,hbmMask,xMask,yMask,rop);
  return BVar1;
}


