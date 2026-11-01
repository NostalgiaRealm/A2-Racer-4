
/* ==== TButtonControl.dyn_fff0 @ 00428880 ==== 
 * signature: undefined TButtonControl.dyn_fff0(void)
 * body: 00428880-004288c7
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TButtonControl_dyn_fff0(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  TWinControl_dyn_fff0(param_1,param_2,param_3);
  uVar2 = FUN_00403114(param_2,(int)&PTR_TCustomAction_vmt_000_0043943c);
  if ((char)uVar2 != '\0') {
    if (((char)param_3 != '\0') && (cVar1 = (**(code **)(*param_1 + 0xb4))(), cVar1 != '\0')) {
      return;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,(char)param_2[0x16]);
  }
  return;
}


