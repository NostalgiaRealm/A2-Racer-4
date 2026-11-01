
/* ==== TGDIButton.set_Definition @ 00468d9c ==== 
 * signature: undefined __register TGDIButton.set_Definition(int * param_1, int param_2)
 * body: 00468d9c-00468dd3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButton_set_Definition(int *param_1,int param_2)

{
  if (param_1[0x5d] != 0) {
    FUN_00467f38(param_1[0x5d],(int)param_1);
  }
  param_1[0x5d] = param_2;
  if (param_2 != 0) {
    FUN_00467f04(param_2,(int)param_1);
  }
  (**(code **)(*param_1 + 0x74))();
  return;
}


