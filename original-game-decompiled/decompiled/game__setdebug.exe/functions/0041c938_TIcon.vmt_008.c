
/* ==== TIcon.vmt_008 @ 0041c938 ==== 
 * signature: undefined TIcon.vmt_008(void)
 * body: 0041c938-0041c994
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (int *)0x0) &&
     (uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_0041585c), (char)uVar1 == '\0')) {
    TPersistent_vmt_008(param_1,param_2);
    return;
  }
  if (param_2 == (int *)0x0) {
    FUN_0041cc10((int)param_1,0,0);
  }
  else {
    FUN_0041a6ec(param_2[8]);
    FUN_0041a6f0((int *)param_1[8]);
    param_1[8] = param_2[8];
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


