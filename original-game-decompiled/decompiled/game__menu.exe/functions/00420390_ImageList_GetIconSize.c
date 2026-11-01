
/* ==== COMCTL32.DLL::ImageList_GetIconSize @ 00420390 ==== 
 * signature: BOOL __stdcall ImageList_GetIconSize(HIMAGELIST himl, int * cx, int * cy)
 * body: 00420390-00420395
 * thunk to: COMCTL32.DLL::ImageList_GetIconSize
 */

BOOL __stdcall ImageList_GetIconSize(HIMAGELIST himl,int *cx,int *cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_GetIconSize(himl,cx,cy);
  return BVar1;
}


