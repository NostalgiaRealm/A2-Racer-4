
/* ==== TMenuItem.set_SubMenuImages @ 0043f89c ==== 
 * signature: undefined TMenuItem.set_SubMenuImages(void)
 * body: 0043f89c-0043f8d5
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_SubMenuImages(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x70) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x6c));
    FUN_0041564c(*(int *)(param_1 + 0x70),param_1,extraout_ECX);
  }
  FUN_0043f90c(param_1);
  return;
}


