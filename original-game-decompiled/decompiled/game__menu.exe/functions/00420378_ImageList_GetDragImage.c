
/* ==== COMCTL32.DLL::ImageList_GetDragImage @ 00420378 ==== 
 * signature: HIMAGELIST __stdcall ImageList_GetDragImage(POINT * ppt, POINT * pptHotspot)
 * body: 00420378-0042037d
 * thunk to: COMCTL32.DLL::ImageList_GetDragImage
 */

HIMAGELIST __stdcall ImageList_GetDragImage(POINT *ppt,POINT *pptHotspot)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00420378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_GetDragImage(ppt,pptHotspot);
  return p_Var1;
}


