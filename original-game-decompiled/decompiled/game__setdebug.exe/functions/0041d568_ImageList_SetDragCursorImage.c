
/* ==== COMCTL32.DLL::ImageList_SetDragCursorImage @ 0041d568 ==== 
 * signature: BOOL __stdcall ImageList_SetDragCursorImage(HIMAGELIST himlDrag, int iDrag, int dxHotspot, int dyHotspot)
 * body: 0041d568-0041d56d
 * thunk to: COMCTL32.DLL::ImageList_SetDragCursorImage
 */

BOOL __stdcall
ImageList_SetDragCursorImage(HIMAGELIST himlDrag,int iDrag,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetDragCursorImage(himlDrag,iDrag,dxHotspot,dyHotspot);
  return BVar1;
}


