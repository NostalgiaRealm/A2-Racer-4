
/* ==== TClipboard.vmt_008 @ 00429790 ==== 
 * signature: undefined TClipboard.vmt_008(void)
 * body: 00429790-004297da
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TClipboard_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPicture_vmt_000_0041702c);
  if ((char)uVar1 != '\0') {
    FUN_00429688((int)param_1,(int)param_2);
    return;
  }
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00416f48);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_008(param_1,param_2);
  }
  else {
    FUN_0042970c(param_1,param_2);
  }
  return;
}


