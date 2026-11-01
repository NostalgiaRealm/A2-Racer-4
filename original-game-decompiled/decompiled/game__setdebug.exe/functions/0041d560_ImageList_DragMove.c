
/* ==== COMCTL32.DLL::ImageList_DragMove @ 0041d560 ==== 
 * signature: BOOL __stdcall ImageList_DragMove(int x, int y)
 * body: 0041d560-0041d565
 * thunk to: COMCTL32.DLL::ImageList_DragMove
 */

BOOL __stdcall ImageList_DragMove(int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragMove(x,y);
  return BVar1;
}


