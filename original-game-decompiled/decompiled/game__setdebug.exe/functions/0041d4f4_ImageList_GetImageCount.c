
/* ==== COMCTL32.DLL::ImageList_GetImageCount @ 0041d4f4 ==== 
 * signature: int __stdcall ImageList_GetImageCount(HIMAGELIST himl)
 * body: 0041d4f4-0041d4f9
 * thunk to: COMCTL32.DLL::ImageList_GetImageCount
 */

int __stdcall ImageList_GetImageCount(HIMAGELIST himl)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_GetImageCount(himl);
  return iVar1;
}


