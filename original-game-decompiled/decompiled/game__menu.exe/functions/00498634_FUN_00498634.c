
/* ==== FUN_00498634 @ 00498634 ==== 
 * signature: undefined __register FUN_00498634(void)
 * body: 00498634-004986a4
 */

void FUN_00498634(void)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int *local_c;
  int local_8;
  
  pcStack_10 = (code *)0x49863f;
  uVar1 = FUN_0045f46c();
  pcStack_10 = (code *)0x49864f;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowPlayerDlg",2);
  pcStack_10 = (code *)0x49865d;
  local_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_004930d0,'\x01',0);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_0049354c(local_c);
  local_8 = (**(code **)(*local_c + 0xd8))();
  FUN_00493658(local_c,local_8);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004986ac;
  pcStack_14 = (code *)0x4986a4;
  FUN_00402f9c(local_c);
  return;
}


