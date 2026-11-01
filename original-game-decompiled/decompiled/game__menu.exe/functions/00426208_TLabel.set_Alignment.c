
/* ==== TLabel.set_Alignment @ 00426208 ==== 
 * signature: undefined TLabel.set_Alignment(void)
 * body: 00426208-0042621b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_Alignment(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x4b]) {
    *(char *)(param_1 + 0x4b) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


