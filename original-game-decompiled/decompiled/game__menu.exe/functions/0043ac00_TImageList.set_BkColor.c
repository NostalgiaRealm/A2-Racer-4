
/* ==== TImageList.set_BkColor @ 0043ac00 ==== 
 * signature: undefined __register TImageList.set_BkColor(int * param_1, uint param_2)
 * body: 0043ac00-0043ac34
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImageList_set_BkColor(int *param_1,uint param_2)

{
  bool bVar1;
  COLORREF clrBk;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  if (bVar1) {
    clrBk = FUN_0043a1e0(param_2);
    ImageList_SetBkColor((HIMAGELIST)param_1[0xc],clrBk);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    param_1[0xe] = param_2;
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
  }
  FUN_00403178(param_1,uVar3,uVar2);
  return;
}


