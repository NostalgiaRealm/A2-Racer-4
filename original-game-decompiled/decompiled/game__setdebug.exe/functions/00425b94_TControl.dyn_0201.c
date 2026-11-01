
/* ==== TControl.dyn_0201 @ 00425b94 ==== 
 * signature: undefined TControl.dyn_0201(void)
 * body: 00425b94-00425bd9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_0201(int *param_1,int param_2)

{
  FUN_004243c4(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_00424a00(param_1,'\x01');
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
  }
  FUN_00425b50(param_1,param_2,0,0);
  return;
}


