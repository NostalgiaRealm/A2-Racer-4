
/* ==== COMCTL32.DLL::ImageList_DragLeave @ 00420358 ==== 
 * signature: BOOL __stdcall ImageList_DragLeave(HWND hwndLock)
 * body: 00420358-0042035d
 * thunk to: COMCTL32.DLL::ImageList_DragLeave
 */

BOOL __stdcall ImageList_DragLeave(HWND hwndLock)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragLeave(hwndLock);
  return BVar1;
}


