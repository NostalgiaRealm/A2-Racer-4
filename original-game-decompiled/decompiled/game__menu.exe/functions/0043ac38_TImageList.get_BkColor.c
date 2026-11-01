
/* ==== TImageList.get_BkColor @ 0043ac38 ==== 
 * signature: int __register TImageList.get_BkColor(int * param_1)
 * body: 0043ac38-0043ac5e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TImageList_get_BkColor(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  COLORREF CVar2;
  int iVar3;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043a5b8(param_1);
    CVar2 = ImageList_GetBkColor(himl);
    iVar3 = FUN_0043a200(CVar2);
    return iVar3;
  }
  return param_1[0xe];
}


