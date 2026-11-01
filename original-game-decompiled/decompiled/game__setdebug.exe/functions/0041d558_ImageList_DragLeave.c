
/* ==== COMCTL32.DLL::ImageList_DragLeave @ 0041d558 ==== 
 * signature: BOOL __stdcall ImageList_DragLeave(HWND hwndLock)
 * body: 0041d558-0041d55d
 * thunk to: COMCTL32.DLL::ImageList_DragLeave
 */

BOOL __stdcall ImageList_DragLeave(HWND hwndLock)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragLeave(hwndLock);
  return BVar1;
}


