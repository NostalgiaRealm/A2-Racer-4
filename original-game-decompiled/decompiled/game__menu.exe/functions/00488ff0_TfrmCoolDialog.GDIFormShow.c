
/* ==== TfrmCoolDialog.GDIFormShow @ 00488ff0 ==== 
 * signature: undefined __register TfrmCoolDialog.GDIFormShow(int * param_1)
 * body: 00488ff0-004890f9
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmCoolDialog_GDIFormShow(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_13c;
  code *pcStack_138;
  code *pcStack_134;
  char *pcStack_130;
  undefined *puStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iStack_128 = 0x489028;
  local_8 = param_1;
  FUN_00402ee4(*param_1,local_114);
  iStack_128 = 0x489036;
  FUN_00403e80(&local_14,local_114);
  iStack_128 = local_14;
  puStack_12c = &DAT_00489178;
  pcStack_130 = "GDIFormShow";
  pcStack_134 = (code *)0x489050;
  FUN_00403f9c((int *)&local_10,3);
  pcStack_134 = (code *)local_10;
  pcStack_138 = (code *)0x489059;
  uVar2 = FUN_0045f46c();
  pcVar1 = pcStack_134;
  pcStack_134 = (code *)0x489065;
  FUN_0045fb90(uVar2,(undefined4 *)pcVar1,2);
  pcStack_134 = (code *)0x489071;
  local_c = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX);
  pcStack_138 = thunk_FUN_004036bc;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  pcStack_134 = (code *)&stack0xfffffffc;
  (**(code **)(*local_8 + 0xe4))(local_8,&local_118);
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),local_118,local_c);
  (**(code **)(**(int **)(local_8[0xba] + 300) + 8))(*(int **)(local_8[0xba] + 300),local_c);
  TControl_set_Width(local_8,local_c[0x23]);
  TControl_set_Height(local_8,local_c[0x10]);
  *in_FS_OFFSET = uStack_13c;
  pcStack_134 = FUN_00489101;
  pcStack_138 = (code *)0x4890f9;
  FUN_00402f9c(local_c);
  return;
}


