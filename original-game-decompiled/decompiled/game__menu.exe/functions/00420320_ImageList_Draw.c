
/* ==== COMCTL32.DLL::ImageList_Draw @ 00420320 ==== 
 * signature: BOOL __stdcall ImageList_Draw(HIMAGELIST himl, int i, HDC hdcDst, int x, int y, UINT fStyle)
 * body: 00420320-00420325
 * thunk to: COMCTL32.DLL::ImageList_Draw
 */

BOOL __stdcall ImageList_Draw(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,UINT fStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Draw(himl,i,hdcDst,x,y,fStyle);
  return BVar1;
}


