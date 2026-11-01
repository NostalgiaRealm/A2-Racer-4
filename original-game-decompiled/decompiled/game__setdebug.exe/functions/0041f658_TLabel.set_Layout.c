
/* ==== TLabel.set_Layout @ 0041f658 ==== 
 * signature: undefined TLabel.set_Layout(void)
 * body: 0041f658-0041f66b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_Layout(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x12e)) {
    *(char *)((int)param_1 + 0x12e) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


