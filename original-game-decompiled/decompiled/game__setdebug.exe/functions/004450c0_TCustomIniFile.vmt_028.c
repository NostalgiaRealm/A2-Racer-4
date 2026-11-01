
/* ==== TCustomIniFile.vmt_028 @ 004450c0 ==== 
 * signature: undefined __register TCustomIniFile.vmt_028(int * param_1, undefined4 param_2, undefined1 * param_3)
 * body: 004450c0-0044510e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomIniFile_vmt_028(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  pcStack_1c = thunk_FUN_00403434;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_004097cc(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  pcStack_1c = FUN_00445116;
  iStack_20 = 0x44510e;
  FUN_004039b8(&local_8);
  return;
}


