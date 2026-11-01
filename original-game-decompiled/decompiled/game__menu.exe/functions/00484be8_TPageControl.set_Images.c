
/* ==== TPageControl.set_Images @ 00484be8 ==== 
 * signature: undefined __register TPageControl.set_Images(int param_1, int param_2)
 * body: 00484be8-00484c56
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_Images(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x1fc),*(int *)(param_1 + 0x1f8));
  }
  *(int *)(param_1 + 0x1fc) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x1f8));
    FUN_0041564c(*(int *)(param_1 + 0x1fc),param_1,extraout_ECX);
    iVar1 = FUN_0043a5b8(*(int **)(param_1 + 0x1fc));
    FUN_0042f720(param_1,0x1303,0,iVar1);
    return;
  }
  FUN_0042f720(param_1,0x1303,0,0);
  return;
}


