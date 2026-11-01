
/* ==== TCustomIniFile.vmt_030 @ 004582cc ==== 
 * signature: undefined TCustomIniFile.vmt_030(void)
 * body: 004582cc-0045831e
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
  pcStack_1c = thunk_FUN_004036bc;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  FUN_00409330(&iStack_8);
  iVar1 = iStack_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  *in_FS_OFFSET = iVar1;
  pcStack_1c = FUN_00458326;
  iStack_20 = 0x45831e;
  FUN_00403c5c(&iStack_8);
  return;
}


