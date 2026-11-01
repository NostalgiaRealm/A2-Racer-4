
/* ==== TIcon.vmt_008 @ 0041f370 ==== 
 * signature: undefined TIcon.vmt_008(void)
 * body: 0041f370-0041f3cc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (int *)0x0) &&
     (uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_004174e4), (char)uVar1 == '\0')) {
    TPersistent_vmt_008(param_1,param_2);
    return;
  }
  if (param_2 == (int *)0x0) {
    FUN_0041f648((int)param_1,0,0);
  }
  else {
    FUN_0041cf10(param_2[8]);
    FUN_0041cf14((int *)param_1[8]);
    param_1[8] = param_2[8];
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


