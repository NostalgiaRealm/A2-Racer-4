
/* ==== TWinControl.dyn_fff0 @ 0042b32c ==== 
 * signature: undefined TWinControl.dyn_fff0(void)
 * body: 0042b32c-0042b36a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_fff0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  TControl_dyn_fff0(param_1,param_2,param_3);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_vmt_000_0042f24c);
  if (((char)uVar1 != '\0') && (((char)param_3 == '\0' || (*(int *)(param_1 + 0x150) == 0)))) {
    *(int *)(param_1 + 0x150) = param_2[0x17];
  }
  return;
}


