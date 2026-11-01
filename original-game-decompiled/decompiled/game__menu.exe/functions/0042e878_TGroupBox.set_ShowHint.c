
/* ==== TGroupBox.set_ShowHint @ 0042e878 ==== 
 * signature: undefined __register TGroupBox.set_ShowHint(int param_1, char param_2)
 * body: 0042e878-0042e89b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_ShowHint(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x89)) {
    *(char *)(param_1 + 0x89) = param_2;
    *(undefined1 *)(param_1 + 0x8a) = 0;
    FUN_0042f720(param_1,0xb022,0,0);
  }
  return;
}


