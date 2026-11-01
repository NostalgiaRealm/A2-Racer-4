
/* ==== COMCTL32.DLL::ImageList_GetDragImage @ 0041d578 ==== 
 * signature: HIMAGELIST __stdcall ImageList_GetDragImage(POINT * ppt, POINT * pptHotspot)
 * body: 0041d578-0041d57d
 * thunk to: COMCTL32.DLL::ImageList_GetDragImage
 */

HIMAGELIST __stdcall ImageList_GetDragImage(POINT *ppt,POINT *pptHotspot)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_GetDragImage(ppt,pptHotspot);
  return p_Var1;
}


