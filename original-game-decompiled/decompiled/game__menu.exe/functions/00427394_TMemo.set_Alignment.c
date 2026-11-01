
/* ==== TMemo.set_Alignment @ 00427394 ==== 
 * signature: undefined TMemo.set_Alignment(void)
 * body: 00427394-004273a7
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMemo_set_Alignment(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20c)) {
    *(char *)(param_1 + 0x20c) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


