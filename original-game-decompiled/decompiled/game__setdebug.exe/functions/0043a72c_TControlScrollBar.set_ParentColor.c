
/* ==== TControlScrollBar.set_ParentColor @ 0043a72c ==== 
 * signature: undefined TControlScrollBar.set_ParentColor(void)
 * body: 0043a72c-0043a742
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControlScrollBar_set_ParentColor(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x2c)) &&
     (*(char *)(param_1 + 0x2c) = param_2, param_2 != '\0')) {
    TControlScrollBar_set_Color(param_1,0x80000014);
  }
  return;
}


