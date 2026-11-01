
/* ==== TPicture.vmt_008 @ 004193ac ==== 
 * signature: undefined TPicture.vmt_008(void)
 * body: 004193ac-00419406
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPicture_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_004192fc(param_1,(undefined4 *)0x0);
    return;
  }
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPicture_vmt_000_00415478);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_00415394);
    if ((char)uVar1 == '\0') {
      TPersistent_vmt_008(param_1,param_2);
    }
    else {
      FUN_004192fc(param_1,param_2);
    }
  }
  else {
    FUN_004192fc(param_1,(undefined4 *)param_2[1]);
  }
  return;
}


