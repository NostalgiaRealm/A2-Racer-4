
/* ==== COMCTL32.DLL::ImageList_SetBkColor @ 00420304 ==== 
 * signature: COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl, COLORREF clrBk)
 * body: 00420304-00420309
 * thunk to: COMCTL32.DLL::ImageList_SetBkColor
 */

COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_SetBkColor(himl,clrBk);
  return CVar1;
}


