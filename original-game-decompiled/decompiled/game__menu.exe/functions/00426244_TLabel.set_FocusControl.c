
/* ==== TLabel.set_FocusControl @ 00426244 ==== 
 * signature: undefined TLabel.set_FocusControl(void)
 * body: 00426244-00426254
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_FocusControl(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 0x128) = param_2;
  if (param_2 != 0) {
    FUN_0041564c(param_2,param_1,param_3);
  }
  return;
}


