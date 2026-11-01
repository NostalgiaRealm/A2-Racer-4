
/* ==== TLabel.set_ShowHint @ 00424928 ==== 
 * signature: undefined __register TLabel.set_ShowHint(int param_1, char param_2)
 * body: 00424928-0042494b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_ShowHint(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x89)) {
    *(char *)(param_1 + 0x89) = param_2;
    *(undefined1 *)(param_1 + 0x8a) = 0;
    FUN_00425780(param_1,0xb022,0,0);
  }
  return;
}


