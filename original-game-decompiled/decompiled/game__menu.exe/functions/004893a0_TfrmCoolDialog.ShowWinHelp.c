
/* ==== TfrmCoolDialog.ShowWinHelp @ 004893a0 ==== 
 * signature: undefined __register TfrmCoolDialog.ShowWinHelp(int * param_1)
 * body: 004893a0-004894e5
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCoolDialog_ShowWinHelp(int *param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_13c;
  code *pcStack_138;
  undefined1 *puStack_134;
  undefined4 uStack_130;
  code *pcStack_12c;
  undefined1 *puStack_128;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  pcStack_12c = thunk_FUN_004036bc;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puStack_134 = (undefined1 *)0x4893e9;
  FUN_00403f28((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"agent.ini");
  puStack_134 = (undefined1 *)0x4893f8;
  local_8 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',local_10);
  puStack_134 = (undefined1 *)0x489407;
  local_c = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
  pcStack_138 = thunk_FUN_004036bc;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puStack_134 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_14,local_114);
  FUN_00403ee4(&local_14,(undefined4 *)"BalloonItems");
  (**(code **)(*local_8 + 0x40))(local_8,local_14,local_c);
  FUN_00411730(local_c,0,&local_118);
  iVar2 = local_118;
  FUN_00402ee4(*param_1,local_114);
  FUN_00403e80(&local_11c,local_114);
  FUN_00403ee4(&local_11c,(undefined4 *)"BalloonItems");
  uVar1 = (**(code **)(*local_8 + 8))(local_8,local_11c,iVar2);
  iVar2 = uVar1 + 0x7fffffff;
  if (iVar2 == -1) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,iVar2 + 0x80000001);
  *in_FS_OFFSET = 1;
  pcStack_138 = FUN_004894ed;
  uStack_13c = 0x4894dd;
  FUN_00402f9c(local_8);
  uStack_13c = 0x4894e5;
  FUN_00402f9c(local_c);
  return;
}


