
/* ==== COMCTL32.DLL::ImageList_Read @ 00420380 ==== 
 * signature: HIMAGELIST __stdcall ImageList_Read(IStream * pstm)
 * body: 00420380-00420385
 * thunk to: COMCTL32.DLL::ImageList_Read
 */

HIMAGELIST __stdcall ImageList_Read(IStream *pstm)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00420380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Read(pstm);
  return p_Var1;
}


