
/* ==== COMCTL32.DLL::ImageList_DragEnter @ 00420350 ==== 
 * signature: BOOL __stdcall ImageList_DragEnter(HWND hwndLock, int x, int y)
 * body: 00420350-00420355
 * thunk to: COMCTL32.DLL::ImageList_DragEnter
 */

BOOL __stdcall ImageList_DragEnter(HWND hwndLock,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragEnter(hwndLock,x,y);
  return BVar1;
}


