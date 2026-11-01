
/* ==== TLabel.set_Color @ 00424970 ==== 
 * signature: undefined __register TLabel.set_Color(int param_1, int param_2)
 * body: 00424970-0042498a
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_Color(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    FUN_00425780(param_1,0xb00d,0,0);
  }
  return;
}


