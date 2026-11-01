
/* ==== TControl.dyn_0203 @ 0042fb9c ==== 
 * signature: undefined __register TControl.dyn_0203(int * param_1, int param_2)
 * body: 0042fb9c-0042fbe9
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_0203(int *param_1,int param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  
  FUN_0042e304(param_1,param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_0042e950(param_1,'\x01');
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    FUN_00403178(param_1,uVar2,uVar1);
  }
  FUN_0042faf0(param_1,param_2,0,0x40);
  return;
}


