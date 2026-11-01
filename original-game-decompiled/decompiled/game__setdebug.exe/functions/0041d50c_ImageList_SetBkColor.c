
/* ==== COMCTL32.DLL::ImageList_SetBkColor @ 0041d50c ==== 
 * signature: COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl, COLORREF clrBk)
 * body: 0041d50c-0041d511
 * thunk to: COMCTL32.DLL::ImageList_SetBkColor
 */

COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_SetBkColor(himl,clrBk);
  return CVar1;
}


