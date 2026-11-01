
/* ==== COMCTL32.DLL::ImageList_Write @ 00420388 ==== 
 * signature: BOOL __stdcall ImageList_Write(HIMAGELIST himl, IStream * pstm)
 * body: 00420388-0042038d
 * thunk to: COMCTL32.DLL::ImageList_Write
 */

BOOL __stdcall ImageList_Write(HIMAGELIST himl,IStream *pstm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00420388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Write(himl,pstm);
  return BVar1;
}


