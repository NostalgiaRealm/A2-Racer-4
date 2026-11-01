
/* ==== TMenuItem.set_Break @ 00434790 ==== 
 * signature: undefined TMenuItem.set_Break(void)
 * body: 00434790-0043479f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Break(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xf]) {
    *(char *)(param_1 + 0xf) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


