
/* ==== COMCTL32.DLL::ImageList_Add @ 0041d4fc ==== 
 * signature: int __stdcall ImageList_Add(HIMAGELIST himl, HBITMAP hbmImage, HBITMAP hbmMask)
 * body: 0041d4fc-0041d501
 * thunk to: COMCTL32.DLL::ImageList_Add
 */

int __stdcall ImageList_Add(HIMAGELIST himl,HBITMAP hbmImage,HBITMAP hbmMask)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_Add(himl,hbmImage,hbmMask);
  return iVar1;
}


