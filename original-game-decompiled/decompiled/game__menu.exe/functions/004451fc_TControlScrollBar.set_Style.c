
/* ==== TControlScrollBar.set_Style @ 004451fc ==== 
 * signature: undefined TControlScrollBar.set_Style(void)
 * body: 004451fc-00445210
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControlScrollBar_set_Style(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x34)) {
    *(char *)(param_1 + 0x34) = param_2;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
  }
  return;
}


