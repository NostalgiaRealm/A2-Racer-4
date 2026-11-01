
/* ==== TPageControl.set_ScrollOpposite @ 00484d58 ==== 
 * signature: undefined TPageControl.set_ScrollOpposite(void)
 * body: 00484d58-00484d75
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_ScrollOpposite(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20c)) {
    *(char *)(param_1 + 0x20c) = param_2;
    if (param_2 != '\0') {
      *(char *)(param_1 + 0x200) = param_2;
    }
    FUN_00431e04(param_1);
  }
  return;
}


