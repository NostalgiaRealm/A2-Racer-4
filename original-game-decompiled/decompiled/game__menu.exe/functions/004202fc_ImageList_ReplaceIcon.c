
/* ==== COMCTL32.DLL::ImageList_ReplaceIcon @ 004202fc ==== 
 * signature: int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
 * body: 004202fc-00420301
 * thunk to: COMCTL32.DLL::ImageList_ReplaceIcon
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl,int i,HICON hicon)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004202fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_ReplaceIcon(himl,i,hicon);
  return iVar1;
}


