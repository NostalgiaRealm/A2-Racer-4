
/* ==== TControlScrollBar.set_Color @ 004450c0 ==== 
 * signature: undefined TControlScrollBar.set_Color(void)
 * body: 004450c0-004450d8
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControlScrollBar_set_Color(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
  }
  return;
}


