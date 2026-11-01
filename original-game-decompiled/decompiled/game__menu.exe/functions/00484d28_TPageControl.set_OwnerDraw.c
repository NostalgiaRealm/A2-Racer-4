
/* ==== TPageControl.set_OwnerDraw @ 00484d28 ==== 
 * signature: undefined TPageControl.set_OwnerDraw(void)
 * body: 00484d28-00484d3b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_OwnerDraw(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x202)) {
    *(char *)(param_1 + 0x202) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


