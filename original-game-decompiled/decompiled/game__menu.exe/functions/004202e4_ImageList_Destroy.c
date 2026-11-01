
/* ==== COMCTL32.DLL::ImageList_Destroy @ 004202e4 ==== 
 * signature: BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
 * body: 004202e4-004202e9
 * thunk to: COMCTL32.DLL::ImageList_Destroy
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Destroy(himl);
  return BVar1;
}


