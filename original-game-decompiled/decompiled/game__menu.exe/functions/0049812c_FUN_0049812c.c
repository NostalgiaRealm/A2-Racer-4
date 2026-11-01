
/* ==== FUN_0049812c @ 0049812c ==== 
 * signature: undefined __register FUN_0049812c(void)
 * body: 0049812c-004981b6
 */

void FUN_0049812c(void)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int *local_c;
  undefined4 local_8;
  
  pcStack_10 = (code *)0x498137;
  uVar1 = FUN_0045f46c();
  pcStack_10 = (code *)0x498147;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowStartInfoDlg",0);
  if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 0xc) + 0x24)
      == '\0') {
    pcStack_10 = (code *)0x49816f;
    local_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_0049796c,'\x01',0);
  }
  else {
    pcStack_10 = (code *)0x498182;
    local_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_004975f0,'\x01',0);
  }
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004981be;
  pcStack_14 = (code *)0x4981b6;
  FUN_00402f9c(local_c);
  return;
}


