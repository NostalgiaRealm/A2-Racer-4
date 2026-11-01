
/* ==== TDaviSpeedButton.dyn_fff0 @ 00475888 ==== 
 * signature: undefined TDaviSpeedButton.dyn_fff0(void)
 * body: 00475888-004758e6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TDaviSpeedButton_dyn_fff0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  TControl_dyn_fff0(param_1,param_2);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TCustomAction_vmt_000_0043943c);
  if (((((char)uVar1 != '\0') && (iVar2 = param_2[0x13], iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x2c) != 0)) && (-1 < param_2[0x19])) {
    iVar2 = FUN_0043a91c(*(int **)(iVar2 + 0x2c));
    if (param_2[0x19] < iVar2) {
      FUN_00475824(*(int **)(param_2[0x13] + 0x2c),param_2[0x19],extraout_ECX,(int)&stack0xfffffffc)
      ;
    }
  }
  return;
}


