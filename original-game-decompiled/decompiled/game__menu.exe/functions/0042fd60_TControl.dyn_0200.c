
/* ==== TControl.dyn_0200 @ 0042fd60 ==== 
 * signature: undefined __register TControl.dyn_0200(int * param_1, int param_2)
 * body: 0042fd60-0042fd98
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_0200(int *param_1,int param_2)

{
  byte bVar1;
  undefined3 extraout_var;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00444718(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00403178(param_1,CONCAT31(extraout_var,bVar1),(int)*(short *)(param_2 + 8));
  }
  return;
}


