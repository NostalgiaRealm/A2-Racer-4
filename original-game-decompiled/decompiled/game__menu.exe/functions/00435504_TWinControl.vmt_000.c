
/* ==== TWinControl.vmt_000 @ 00435504 ==== 
 * signature: undefined TWinControl.vmt_000(void)
 * body: 00435504-00435533
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_000(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  TControl_vmt_000(param_1,param_2);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_vmt_000_0043943c);
  if ((char)uVar1 != '\0') {
    FUN_00439d88(param_2,param_1[0x54]);
  }
  return;
}


