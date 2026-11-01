
/* ==== TMemo.set_ScrollBars @ 004273b8 ==== 
 * signature: undefined TMemo.set_ScrollBars(void)
 * body: 004273b8-004273cb
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMemo_set_ScrollBars(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20d)) {
    *(char *)(param_1 + 0x20d) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


