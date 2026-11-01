
/* ==== TCustomForm.vmt_0c4 @ 0043b8cc ==== 
 * signature: undefined __register TCustomForm.vmt_0c4(int param_1)
 * body: 0043b8cc-0043b90c;0043b924-0043b929
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_0c4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x2c2) != 0) {
    pcStack_1c = thunk_FUN_00403180;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (**(code **)(param_1 + 0x2c0))(*(undefined4 *)(param_1 + 0x2c4),param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}


