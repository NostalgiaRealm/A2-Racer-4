
/* ==== TControl.dyn_0201 @ 0042fb34 ==== 
 * signature: undefined __register TControl.dyn_0201(int * param_1, int param_2)
 * body: 0042fb34-0042fb79
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_0201(int *param_1,int param_2)

{
  FUN_0042e304(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_0042e950(param_1,'\x01');
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
  }
  FUN_0042faf0(param_1,param_2,0,0);
  return;
}


