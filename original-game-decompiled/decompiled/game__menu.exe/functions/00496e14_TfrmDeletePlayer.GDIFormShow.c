
/* ==== TfrmDeletePlayer.GDIFormShow @ 00496e14 ==== 
 * signature: undefined __register TfrmDeletePlayer.GDIFormShow(int * param_1)
 * body: 00496e14-00496e95
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDeletePlayer_GDIFormShow(int *param_1)

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
  local_10 = param_1[0xc0];
  local_c = 0xb;
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0xc),&local_10,0,(int *)&local_8);
  TGroupBox_set_Caption(param_1[0xbf],local_8);
  TGDIButton_set_Definition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x9c));
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00496e9d;
  pcStack_1c = (code *)0x496e95;
  FUN_00403c5c((int *)&local_8);
  return;
}


