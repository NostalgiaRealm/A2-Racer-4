
/* ==== COMCTL32.DLL::ImageList_Replace @ 00420328 ==== 
 * signature: BOOL __stdcall ImageList_Replace(HIMAGELIST himl, int i, HBITMAP hbmImage, HBITMAP hbmMask)
 * body: 00420328-0042032d
 * thunk to: COMCTL32.DLL::ImageList_Replace
 */

BOOL __stdcall ImageList_Replace(HIMAGELIST himl,int i,HBITMAP hbmImage,HBITMAP hbmMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Replace(himl,i,hbmImage,hbmMask);
  return BVar1;
}


