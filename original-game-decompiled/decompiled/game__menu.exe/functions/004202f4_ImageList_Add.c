
/* ==== COMCTL32.DLL::ImageList_Add @ 004202f4 ==== 
 * signature: int __stdcall ImageList_Add(HIMAGELIST himl, HBITMAP hbmImage, HBITMAP hbmMask)
 * body: 004202f4-004202f9
 * thunk to: COMCTL32.DLL::ImageList_Add
 */

int __stdcall ImageList_Add(HIMAGELIST himl,HBITMAP hbmImage,HBITMAP hbmMask)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_Add(himl,hbmImage,hbmMask);
  return iVar1;
}


