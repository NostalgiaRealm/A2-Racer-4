
/* ==== TControl.vmt_004 @ 0042f9dc ==== 
 * signature: undefined __register TControl.vmt_004(undefined4 param_1, int * param_2)
 * body: 0042f9dc-0042fa15
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_004(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = FUN_0042f98c;
  pcVar2 = FUN_0042f9a0;
  uVar4 = param_1;
  uVar1 = FUN_0042f9ac();
  (**(code **)(*param_2 + 4))(param_2,"IsControl",uVar1,pcVar2,param_1,pcVar3,uVar4);
  return;
}


