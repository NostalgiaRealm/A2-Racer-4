
/* ==== COMCTL32.DLL::ImageList_Create @ 004202dc ==== 
 * signature: HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
 * body: 004202dc-004202e1
 * thunk to: COMCTL32.DLL::ImageList_Create
 */

HIMAGELIST __stdcall ImageList_Create(int cx,int cy,UINT flags,int cInitial,int cGrow)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x004202dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Create(cx,cy,flags,cInitial,cGrow);
  return p_Var1;
}


