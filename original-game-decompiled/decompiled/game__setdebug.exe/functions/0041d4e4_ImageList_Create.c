
/* ==== COMCTL32.DLL::ImageList_Create @ 0041d4e4 ==== 
 * signature: HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
 * body: 0041d4e4-0041d4e9
 * thunk to: COMCTL32.DLL::ImageList_Create
 */

HIMAGELIST __stdcall ImageList_Create(int cx,int cy,UINT flags,int cInitial,int cGrow)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
  return p_Var1;
}


