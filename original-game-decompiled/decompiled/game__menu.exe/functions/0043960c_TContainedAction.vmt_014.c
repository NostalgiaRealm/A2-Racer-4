
/* ==== TContainedAction.vmt_014 @ 0043960c ==== 
 * signature: undefined __register TContainedAction.vmt_014(int * param_1, int * param_2, uint param_3)
 * body: 0043960c-0043963c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TContainedAction_vmt_014(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  TComponent_vmt_014(param_1,param_2,param_3);
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_00403114(piVar1,(int)&PTR_TPersistent_vmt_000_00439364);
  if ((char)uVar2 != '\0') {
    FUN_004396b4((int)param_1,(int)piVar1);
  }
  return;
}


