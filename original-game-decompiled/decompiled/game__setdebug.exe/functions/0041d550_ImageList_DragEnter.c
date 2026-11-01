
/* ==== COMCTL32.DLL::ImageList_DragEnter @ 0041d550 ==== 
 * signature: BOOL __stdcall ImageList_DragEnter(HWND hwndLock, int x, int y)
 * body: 0041d550-0041d555
 * thunk to: COMCTL32.DLL::ImageList_DragEnter
 */

BOOL __stdcall ImageList_DragEnter(HWND hwndLock,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragEnter(hwndLock,x,y);
  return BVar1;
}


