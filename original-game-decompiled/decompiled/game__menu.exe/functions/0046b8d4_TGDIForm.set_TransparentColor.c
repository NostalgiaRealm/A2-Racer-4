
/* ==== TGDIForm.set_TransparentColor @ 0046b8d4 ==== 
 * signature: undefined __register TGDIForm.set_TransparentColor(int * param_1, int param_2)
 * body: 0046b8d4-0046b8fa
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIForm_set_TransparentColor(int *param_1,int param_2)

{
  if (param_2 != param_1[0xb8]) {
    param_1[0xb8] = param_2;
    FUN_0046b828(param_1);
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


