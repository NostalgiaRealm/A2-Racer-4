
/* ==== TContainedAction.dyn_fff9 @ 0042f4ec ==== 
 * signature: undefined TContainedAction.dyn_fff9(void)
 * body: 0042f4ec-0042f514
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TContainedAction_dyn_fff9(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_0042f174);
    if ((char)uVar1 != '\0') {
      FUN_0042f4c4(param_1,(int)param_2);
    }
  }
  return;
}


