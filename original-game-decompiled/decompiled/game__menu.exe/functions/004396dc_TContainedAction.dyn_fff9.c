
/* ==== TContainedAction.dyn_fff9 @ 004396dc ==== 
 * signature: undefined TContainedAction.dyn_fff9(void)
 * body: 004396dc-00439704
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TContainedAction_dyn_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00439364);
    if ((char)uVar1 != '\0') {
      FUN_004396b4(param_1,(int)param_2);
    }
  }
  return;
}


