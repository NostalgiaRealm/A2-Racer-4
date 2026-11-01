
/* ==== TLabel.set_Alignment @ 0041f5b4 ==== 
 * signature: undefined TLabel.set_Alignment(void)
 * body: 0041f5b4-0041f5c7
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


