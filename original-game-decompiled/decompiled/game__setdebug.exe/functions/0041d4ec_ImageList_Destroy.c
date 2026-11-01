
/* ==== COMCTL32.DLL::ImageList_Destroy @ 0041d4ec ==== 
 * signature: BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
 * body: 0041d4ec-0041d4f1
 * thunk to: COMCTL32.DLL::ImageList_Destroy
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Destroy(himl);
  return BVar1;
}


