
/* ==== FUN_00498828 @ 00498828 ==== 
 * signature: undefined __register FUN_00498828(undefined4 param_1, undefined4 * param_2)
 * body: 00498828-004988a9
 */

void FUN_00498828(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  puStack_14 = (undefined1 *)0x498839;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_20 = (code *)0x49884c;
  puStack_14 = &stack0xfffffffc;
  uVar1 = FUN_0045f46c();
  pcStack_20 = (code *)0x49885c;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowDoubleKeysDlg",2);
  pcStack_20 = (code *)0x49886a;
  local_10 = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_004948a8,'\x01',0);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  FUN_00494a40((int)local_10,local_8);
  local_c = (**(code **)(*local_10 + 0xd8))();
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004988b1;
  pcStack_24 = (code *)0x4988a9;
  FUN_00402f9c(local_10);
  return;
}


