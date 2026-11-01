
/* ==== TCustomIniFile.vmt_00c @ 00444d58 ==== 
 * signature: undefined TCustomIniFile.vmt_00c(void)
 * body: 00444d58-00444da3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomIniFile_vmt_00c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int iStack_8;
  
  puStack_18 = &stack0xfffffffc;
  iStack_8 = 0;
  pcStack_1c = thunk_FUN_00403434;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_00407c70(param_4,&iStack_8);
  iVar1 = iStack_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  pcStack_1c = FUN_00444dab;
  iStack_20 = 0x444da3;
  FUN_004039b8(&iStack_8);
  return;
}


