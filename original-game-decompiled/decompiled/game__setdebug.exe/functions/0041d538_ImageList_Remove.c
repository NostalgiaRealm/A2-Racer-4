
/* ==== COMCTL32.DLL::ImageList_Remove @ 0041d538 ==== 
 * signature: BOOL __stdcall ImageList_Remove(HIMAGELIST himl, int i)
 * body: 0041d538-0041d53d
 * thunk to: COMCTL32.DLL::ImageList_Remove
 */

BOOL __stdcall ImageList_Remove(HIMAGELIST himl,int i)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Remove(himl,i);
  return BVar1;
}


