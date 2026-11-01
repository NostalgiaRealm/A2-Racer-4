
/* ==== TControl.vmt_004 @ 00425a3c ==== 
 * signature: undefined __register TControl.vmt_004(undefined4 param_1, int * param_2)
 * body: 00425a3c-00425a75
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_004(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_004259ec;
  pcVar2 = FUN_00425a00;
  uVar4 = param_1;
  uVar1 = FUN_00425a0c();
  (**(code **)(*param_2 + 4))(param_2,"IsControl",uVar1,pcVar2,param_1,pcVar3,uVar4);
  return;
}


