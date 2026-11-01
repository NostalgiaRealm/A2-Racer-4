
/* ==== TForm.set_BorderWidth @ 0042a9d4 ==== 
 * signature: undefined TForm.set_BorderWidth(void)
 * body: 0042a9d4-0042a9f0
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_BorderWidth(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = param_2;
    FUN_00425780(param_1,0xb03b,0,0);
  }
  return;
}


