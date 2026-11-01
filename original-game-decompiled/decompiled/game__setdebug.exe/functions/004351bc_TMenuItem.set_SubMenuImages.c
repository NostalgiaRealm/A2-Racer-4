
/* ==== TMenuItem.set_SubMenuImages @ 004351bc ==== 
 * signature: undefined TMenuItem.set_SubMenuImages(void)
 * body: 004351bc-004351f5
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_SubMenuImages(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_00430bc0(*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x70) = param_2;
  if (param_2 != 0) {
    FUN_00430c04(param_2,*(int *)(param_1 + 0x6c));
    FUN_00413a98(*(int *)(param_1 + 0x70),param_1,extraout_ECX);
  }
  FUN_0043522c(param_1);
  return;
}


