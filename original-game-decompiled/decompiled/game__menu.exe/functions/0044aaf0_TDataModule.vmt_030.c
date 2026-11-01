
/* ==== TDataModule.vmt_030 @ 0044aaf0 ==== 
 * signature: undefined __register TDataModule.vmt_030(int param_1)
 * body: 0044aaf0-0044ab27;0044ab3f-0044ab44
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataModule_vmt_030(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x3a) != 0) {
    pcStack_1c = thunk_FUN_00403408;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


