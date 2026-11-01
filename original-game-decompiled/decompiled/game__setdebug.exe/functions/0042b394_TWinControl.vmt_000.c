
/* ==== TWinControl.vmt_000 @ 0042b394 ==== 
 * signature: undefined TWinControl.vmt_000(void)
 * body: 0042b394-0042b3c3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  TControl_vmt_000(param_1,param_2);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TCustomAction_vmt_000_0042f24c);
  if ((char)uVar1 != '\0') {
    FUN_0042fb98(param_2,param_1[0x54]);
  }
  return;
}


