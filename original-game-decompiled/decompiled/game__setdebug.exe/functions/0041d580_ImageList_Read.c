
/* ==== COMCTL32.DLL::ImageList_Read @ 0041d580 ==== 
 * signature: HIMAGELIST __stdcall ImageList_Read(IStream * pstm)
 * body: 0041d580-0041d585
 * thunk to: COMCTL32.DLL::ImageList_Read
 */

HIMAGELIST __stdcall ImageList_Read(IStream *pstm)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Read(pstm);
  return p_Var1;
}


