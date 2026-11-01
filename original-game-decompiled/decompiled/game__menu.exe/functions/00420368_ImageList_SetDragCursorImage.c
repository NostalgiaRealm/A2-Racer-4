
/* ==== COMCTL32.DLL::ImageList_SetDragCursorImage @ 00420368 ==== 
 * signature: BOOL __stdcall ImageList_SetDragCursorImage(HIMAGELIST himlDrag, int iDrag, int dxHotspot, int dyHotspot)
 * body: 00420368-0042036d
 * thunk to: COMCTL32.DLL::ImageList_SetDragCursorImage
 */

BOOL __stdcall
ImageList_SetDragCursorImage(HIMAGELIST himlDrag,int iDrag,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetDragCursorImage(himlDrag,iDrag,dxHotspot,dyHotspot);
  return BVar1;
}


