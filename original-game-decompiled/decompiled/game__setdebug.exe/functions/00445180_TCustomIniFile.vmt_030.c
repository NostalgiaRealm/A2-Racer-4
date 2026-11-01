
/* ==== TCustomIniFile.vmt_030 @ 00445180 ==== 
 * signature: undefined TCustomIniFile.vmt_030(void)
 * body: 00445180-004451d2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomIniFile_vmt_030(int *param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_00408818(&iStack_8);
  iVar1 = iStack_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  pcStack_1c = FUN_004451da;
  iStack_20 = 0x4451d2;
  FUN_004039b8(&iStack_8);
  return;
}


