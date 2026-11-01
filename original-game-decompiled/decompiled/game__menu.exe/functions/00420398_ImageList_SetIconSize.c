
/* ==== COMCTL32.DLL::ImageList_SetIconSize @ 00420398 ==== 
 * signature: BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl, int cx, int cy)
 * body: 00420398-0042039d
 * thunk to: COMCTL32.DLL::ImageList_SetIconSize
 */

BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl,int cx,int cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetIconSize(himl,cx,cy);
  return BVar1;
}


