
/* ==== COMCTL32.DLL::ImageList_BeginDrag @ 00420340 ==== 
 * signature: BOOL __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack, int iTrack, int dxHotspot, int dyHotspot)
 * body: 00420340-00420345
 * thunk to: COMCTL32.DLL::ImageList_BeginDrag
 */

BOOL __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack,int iTrack,int dxHotspot,int dyHotspot)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_BeginDrag(himlTrack,iTrack,dxHotspot,dyHotspot);
  return BVar1;
}


