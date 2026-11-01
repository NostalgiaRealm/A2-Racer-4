
/* ==== COMCTL32.DLL::ImageList_SetIconSize @ 0041d598 ==== 
 * signature: BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl, int cx, int cy)
 * body: 0041d598-0041d59d
 * thunk to: COMCTL32.DLL::ImageList_SetIconSize
 */

BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl,int cx,int cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetIconSize(himl,cx,cy);
  return BVar1;
}


