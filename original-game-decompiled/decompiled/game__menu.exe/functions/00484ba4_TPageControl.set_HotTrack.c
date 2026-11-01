
/* ==== TPageControl.set_HotTrack @ 00484ba4 ==== 
 * signature: undefined TPageControl.set_HotTrack(void)
 * body: 00484ba4-00484bb7
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_HotTrack(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 500)) {
    *(char *)(param_1 + 500) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


