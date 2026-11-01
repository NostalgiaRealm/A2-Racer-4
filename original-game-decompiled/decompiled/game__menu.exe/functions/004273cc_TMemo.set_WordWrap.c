
/* ==== TMemo.set_WordWrap @ 004273cc ==== 
 * signature: undefined TMemo.set_WordWrap(void)
 * body: 004273cc-004273df
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMemo_set_WordWrap(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x20e)) {
    *(char *)(param_1 + 0x20e) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


