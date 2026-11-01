
/* ==== FUN_00498414 @ 00498414 ==== 
 * signature: undefined __register FUN_00498414(int * param_1)
 * body: 00498414-004984a2
 */

void FUN_00498414(int *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_24 = (code *)0x498435;
  uVar1 = FUN_0045f46c();
  pcStack_24 = (code *)0x498445;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowNewPlayerDlg",2);
  pcStack_24 = (code *)0x498453;
  local_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_00494ba4,'\x01',0);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  TGroupBox_get_Caption(local_c[0xbe],(int *)&local_10);
  FUN_00403cb0(param_1,local_10);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_004984aa;
  pcStack_28 = (code *)0x4984a2;
  FUN_00402f9c(local_c);
  return;
}


