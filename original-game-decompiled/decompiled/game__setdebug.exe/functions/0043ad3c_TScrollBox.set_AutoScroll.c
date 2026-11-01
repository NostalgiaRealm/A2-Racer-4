
/* ==== TScrollBox.set_AutoScroll @ 0043ad3c ==== 
 * signature: undefined __register TScrollBox.set_AutoScroll(int param_1, char param_2)
 * body: 0043ad3c-0043ad75
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TScrollBox_set_AutoScroll(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    if (param_2 == '\0') {
      TControlScrollBar_set_Range(*(int *)(param_1 + 0x1f0),0);
      TControlScrollBar_set_Range(*(int *)(param_1 + 500),0);
    }
    else {
      FUN_0043ad18(param_1);
    }
  }
  return;
}


