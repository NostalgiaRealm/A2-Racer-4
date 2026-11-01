
/* ==== COMCTL32.DLL::ImageList_BeginDrag @ 0041d540 ==== 
 * signature: BOOL __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack, int iTrack, int dxHotspot, int dyHotspot)
 * body: 0041d540-0041d545
 * thunk to: COMCTL32.DLL::ImageList_BeginDrag
 */

BOOL __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack,int iTrack,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_BeginDrag(himlTrack,iTrack,dxHotspot,dyHotspot);
  return BVar1;
}


