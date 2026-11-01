
/* ==== TControl.set_Cursor @ 004249d4 ==== 
 * signature: undefined TControl.set_Cursor(void)
 * body: 004249d4-004249ec
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControl_set_Cursor(int param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x68)) {
    *(short *)(param_1 + 0x68) = param_2;
    FUN_00425780(param_1,0xb00f,0,0);
  }
  return;
}


