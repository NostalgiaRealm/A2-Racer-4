
/* ==== TControl.set_Cursor @ 0042e924 ==== 
 * signature: undefined __register TControl.set_Cursor(int param_1, short param_2)
 * body: 0042e924-0042e93c
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControl_set_Cursor(int param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x68)) {
    *(short *)(param_1 + 0x68) = param_2;
    FUN_0042f720(param_1,0xb00f,0,0);
  }
  return;
}


