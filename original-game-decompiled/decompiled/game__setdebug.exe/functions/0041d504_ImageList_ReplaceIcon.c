
/* ==== COMCTL32.DLL::ImageList_ReplaceIcon @ 0041d504 ==== 
 * signature: int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
 * body: 0041d504-0041d509
 * thunk to: COMCTL32.DLL::ImageList_ReplaceIcon
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl,int i,HICON hicon)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0041d504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_ReplaceIcon(himl,i,hicon);
  return iVar1;
}


