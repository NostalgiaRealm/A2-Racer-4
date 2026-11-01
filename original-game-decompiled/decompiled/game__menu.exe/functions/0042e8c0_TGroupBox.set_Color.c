
/* ==== TGroupBox.set_Color @ 0042e8c0 ==== 
 * signature: undefined __register TGroupBox.set_Color(int param_1, int param_2)
 * body: 0042e8c0-0042e8da
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_Color(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    FUN_0042f720(param_1,0xb00d,0,0);
  }
  return;
}


