
/* ==== FUN_004988f8 @ 004988f8 ==== 
 * signature: undefined __register FUN_004988f8(void)
 * body: 004988f8-00498955
 */

void FUN_004988f8(void)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int *local_c;
  undefined4 local_8;
  
  pcStack_10 = (code *)0x498903;
  uVar1 = FUN_0045f46c();
  pcStack_10 = (code *)0x498913;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowOptionsDlg",0);
  pcStack_10 = (code *)0x498921;
  local_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_00497320,'\x01',0);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (**(code **)(*local_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0049895d;
  pcStack_14 = (code *)0x498955;
  FUN_00402f9c(local_c);
  return;
}


