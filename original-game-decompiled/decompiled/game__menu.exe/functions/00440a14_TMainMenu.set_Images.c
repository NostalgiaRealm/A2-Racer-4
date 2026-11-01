
/* ==== TMainMenu.set_Images @ 00440a14 ==== 
 * signature: undefined __register TMainMenu.set_Images(int param_1, int param_2)
 * body: 00440a14-00440a4d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMainMenu_set_Images(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_0043b2a0(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 != 0) {
    FUN_0043b2e4(param_2,*(int *)(param_1 + 0x38));
    FUN_0041564c(*(int *)(param_1 + 0x3c),param_1,extraout_ECX);
  }
  FUN_004402dc(param_1);
  return;
}


