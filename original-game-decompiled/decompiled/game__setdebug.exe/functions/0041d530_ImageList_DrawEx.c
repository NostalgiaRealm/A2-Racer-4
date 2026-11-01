
/* ==== COMCTL32.DLL::ImageList_DrawEx @ 0041d530 ==== 
 * signature: BOOL __stdcall ImageList_DrawEx(HIMAGELIST himl, int i, HDC hdcDst, int x, int y, int dx, int dy, COLORREF rgbBk, COLORREF rgbFg, UINT fStyle)
 * body: 0041d530-0041d535
 * thunk to: COMCTL32.DLL::ImageList_DrawEx
 */

BOOL __stdcall
ImageList_DrawEx(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,int dx,int dy,COLORREF rgbBk,
                COLORREF rgbFg,UINT fStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DrawEx(himl,i,hdcDst,x,y,dx,dy,rgbBk,rgbFg,fStyle);
  return BVar1;
}


