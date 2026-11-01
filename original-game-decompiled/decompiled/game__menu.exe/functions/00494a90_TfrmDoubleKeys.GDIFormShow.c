
/* ==== TfrmDoubleKeys.GDIFormShow @ 00494a90 ==== 
 * signature: undefined __register TfrmDoubleKeys.GDIFormShow(int * param_1)
 * body: 00494a90-00494b11
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDoubleKeys_GDIFormShow(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int local_10;
  undefined1 local_c;
  uint *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  TfrmCoolDialog_GDIFormShow(param_1);
  TGDIButton_set_Definition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x88));
  local_10 = param_1[0xbf];
  local_c = 0xb;
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x14),&local_10,0,(int *)&local_8);
  TGroupBox_set_Caption(param_1[0xbe],local_8);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00494b19;
  pcStack_1c = (code *)0x494b11;
  FUN_00403c5c((int *)&local_8);
  return;
}


