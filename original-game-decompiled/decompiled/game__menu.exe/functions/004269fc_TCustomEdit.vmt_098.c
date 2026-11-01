
/* ==== TCustomEdit.vmt_098 @ 004269fc ==== 
 * signature: undefined TCustomEdit.vmt_098(void)
 * body: 004269fc-00426a3a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomEdit_vmt_098(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  int *piStack_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x7f) = 1;
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  piStack_8 = param_1;
  TWinControl_vmt_098(param_1);
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(piStack_8 + 0x7f) = 0;
  return;
}


