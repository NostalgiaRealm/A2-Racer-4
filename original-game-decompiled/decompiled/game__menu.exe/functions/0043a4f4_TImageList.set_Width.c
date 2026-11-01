
/* ==== TImageList.set_Width @ 0043a4f4 ==== 
 * signature: undefined __register TImageList.set_Width(int * param_1, int param_2)
 * body: 0043a4f4-0043a537
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TImageList_set_Width(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 != param_1[10]) {
    param_1[10] = param_2;
    bVar1 = FUN_0043a3e4((int)param_1);
    if (bVar1) {
      ImageList_SetIconSize((HIMAGELIST)param_1[0xc],param_1[10],param_1[9]);
    }
    FUN_0043abf4(param_1);
    FUN_0043a3f8((int)param_1);
    FUN_00403178(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


