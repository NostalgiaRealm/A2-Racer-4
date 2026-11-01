
/* ==== TfrmCoolDialog.vmt_02c @ 00488f2c ==== 
 * signature: undefined __register TfrmCoolDialog.vmt_02c(int * param_1, char param_2, undefined4 param_3)
 * body: 00488f2c-00488fca
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TfrmCoolDialog_vmt_02c(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  code *pcStackY_28;
  code *pcStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  if (param_2 != '\0') {
    pcStackY_24 = (code *)0x488f3f;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  pcStackY_28 = thunk_FUN_004036bc;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  pcStackY_24 = (code *)&stack0xfffffffc;
  TGDIForm_vmt_02c(param_1,'\0',param_3);
  FUN_0044ce60(*(int *)PTR_DAT_004ab8ac,(int *)&local_8);
  TGroupBox_set_Caption((int)param_1,local_8);
  TGDIButton_set_Definition((int *)param_1[0xbd],*(int *)(*(int *)PTR_DAT_004ab694 + 0x70));
  TGDIButton_set_Definition((int *)param_1[0xbb],*(int *)(*(int *)PTR_DAT_004ab694 + 0x5c));
  TGDIButton_set_Definition((int *)param_1[0xbc],*(int *)(*(int *)PTR_DAT_004ab694 + 0x84));
  *in_FS_OFFSET = uStackY_2c;
  pcStackY_24 = FUN_00488fd2;
  pcStackY_28 = (code *)0x488fca;
  FUN_00403c5c((int *)&local_8);
  return;
}


