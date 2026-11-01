
/* ==== TLabel.set_ShowAccelChar @ 00426258 ==== 
 * signature: undefined TLabel.set_ShowAccelChar(void)
 * body: 00426258-0042626b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_ShowAccelChar(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4c]) {
    *(char *)(param_1 + 0x4c) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


