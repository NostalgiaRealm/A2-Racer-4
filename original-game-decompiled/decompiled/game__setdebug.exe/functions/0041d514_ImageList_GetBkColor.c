
/* ==== COMCTL32.DLL::ImageList_GetBkColor @ 0041d514 ==== 
 * signature: COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)
 * body: 0041d514-0041d519
 * thunk to: COMCTL32.DLL::ImageList_GetBkColor
 */

COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_GetBkColor(himl);
  return CVar1;
}


