
/* ==== FUN_0049354c @ 0049354c ==== 
 * signature: undefined __register FUN_0049354c(int * param_1)
 * body: 0049354c-0049362b
 */

void FUN_0049354c(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  piVar3 = TDataList_vmt_018((int *)&PTR_TDataList_vmt_000_0045e240,'\x01',
                             (int)&PTR_TStoredGame_vmt_000_00492db4);
  param_1[0xcb] = (int)piVar3;
  FUN_0047fa5c(*(int **)PTR_DAT_004ab694);
  param_1[0xca] = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14);
  FUN_00493d30(param_1);
  FUN_004938ac(param_1);
  FUN_00493338(param_1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "InitDlg";
  FUN_00403c80(&local_c,2);
  return;
}


