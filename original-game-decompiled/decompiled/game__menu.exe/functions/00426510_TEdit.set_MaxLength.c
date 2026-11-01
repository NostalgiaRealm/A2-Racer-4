
/* ==== TEdit.set_MaxLength @ 00426510 ==== 
 * signature: undefined TEdit.set_MaxLength(void)
 * body: 00426510-0042653d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_MaxLength(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != param_1[0x7c]) {
    param_1[0x7c] = param_2;
    bVar1 = FUN_00434cdc((int)param_1);
    if (bVar1) {
      (**(code **)(*param_1 + 0xb4))(param_1,param_2);
    }
  }
  return;
}


