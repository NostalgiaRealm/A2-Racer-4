
/* ==== TCustomIniFile.vmt_028 @ 0045820c ==== 
 * signature: undefined __register TCustomIniFile.vmt_028(int * param_1, undefined4 param_2, undefined1 * param_3)
 * body: 0045820c-0045825a
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
  pcStack_1c = thunk_FUN_004036bc;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_0040a44c(&local_8,param_2,param_3);
  iVar1 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  pcStack_1c = FUN_00458262;
  iStack_20 = 0x45825a;
  FUN_00403c5c(&local_8);
  return;
}


