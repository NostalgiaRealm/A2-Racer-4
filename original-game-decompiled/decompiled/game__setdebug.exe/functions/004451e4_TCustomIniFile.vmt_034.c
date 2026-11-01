
/* ==== TCustomIniFile.vmt_034 @ 004451e4 ==== 
 * signature: undefined TCustomIniFile.vmt_034(void)
 * body: 004451e4-00445232
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomIniFile_vmt_034(int *param_1,undefined4 param_2,undefined1 *param_3)

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
  FUN_004097e4(&iStack_8,param_2,param_3);
  iVar1 = iStack_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  pcStack_1c = FUN_0044523a;
  iStack_20 = 0x445232;
  FUN_004039b8(&iStack_8);
  return;
}


