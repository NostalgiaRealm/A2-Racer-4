
/* ==== COMCTL32.DLL::ImageList_GetBkColor @ 0042030c ==== 
 * signature: COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)
 * body: 0042030c-00420311
 * thunk to: COMCTL32.DLL::ImageList_GetBkColor
 */

COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042030c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_GetBkColor(himl);
  return CVar1;
}


