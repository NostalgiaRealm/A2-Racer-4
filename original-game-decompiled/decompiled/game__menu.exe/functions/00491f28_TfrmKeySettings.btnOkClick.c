
/* ==== TfrmKeySettings.btnOkClick @ 00491f28 ==== 
 * signature: undefined __register TfrmKeySettings.btnOkClick(int param_1)
 * body: 00491f28-00491f95
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmKeySettings_btnOkClick(int param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00492524(param_1);
  uVar1 = FUN_004925dc(param_1);
  if (uVar1 == 0) {
    FUN_00492580(param_1);
    *(undefined4 *)(param_1 + 0x234) = 1;
  }
  else {
    uVar1 = FUN_004925dc(param_1);
    FUN_00491d98(param_1,uVar1,(int *)&local_8);
    FUN_00498828(param_1,local_8);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00491f9d;
  pcStack_14 = (code *)0x491f95;
  FUN_00403c5c((int *)&local_8);
  return;
}


