
/* ==== TDataModule.vmt_034 @ 0044ab48 ==== 
 * signature: undefined TDataModule.vmt_034(void)
 * body: 0044ab48-0044ab7f;0044ab97-0044ab9c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataModule_vmt_034(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x42) != 0) {
    pcStack_1c = thunk_FUN_00403408;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


