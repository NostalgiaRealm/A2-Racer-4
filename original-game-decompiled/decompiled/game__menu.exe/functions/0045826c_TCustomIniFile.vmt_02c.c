
/* ==== TCustomIniFile.vmt_02c @ 0045826c ==== 
 * signature: undefined TCustomIniFile.vmt_02c(void)
 * body: 0045826c-004582ba
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomIniFile_vmt_02c(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int iStack_8;
  
  puStack_18 = &stack0xfffffffc;
  iStack_8 = 0;
  pcStack_1c = thunk_FUN_004036bc;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_0040a47c(&iStack_8,param_2,param_3);
  iVar1 = iStack_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  pcStack_1c = FUN_004582c2;
  iStack_20 = 0x4582ba;
  FUN_00403c5c(&iStack_8);
  return;
}


