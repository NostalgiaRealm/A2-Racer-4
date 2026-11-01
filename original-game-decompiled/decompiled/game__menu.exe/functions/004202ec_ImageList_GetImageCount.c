
/* ==== COMCTL32.DLL::ImageList_GetImageCount @ 004202ec ==== 
 * signature: int __stdcall ImageList_GetImageCount(HIMAGELIST himl)
 * body: 004202ec-004202f1
 * thunk to: COMCTL32.DLL::ImageList_GetImageCount
 */

int __stdcall ImageList_GetImageCount(HIMAGELIST himl)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_GetImageCount(himl);
  return iVar1;
}


