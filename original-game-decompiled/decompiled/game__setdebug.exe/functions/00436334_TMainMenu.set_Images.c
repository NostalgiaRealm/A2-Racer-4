
/* ==== TMainMenu.set_Images @ 00436334 ==== 
 * signature: undefined __register TMainMenu.set_Images(int param_1, int param_2)
 * body: 00436334-0043636d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMainMenu_set_Images(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00430bc0(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 != 0) {
    FUN_00430c04(param_2,*(int *)(param_1 + 0x38));
    FUN_00413a98(*(int *)(param_1 + 0x3c),param_1,extraout_ECX);
  }
  FUN_00435bfc(param_1);
  return;
}


