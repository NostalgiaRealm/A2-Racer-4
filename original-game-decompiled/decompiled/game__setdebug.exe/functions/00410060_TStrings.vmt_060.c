
/* ==== TStrings.vmt_060 @ 00410060 ==== 
 * signature: undefined __register TStrings.vmt_060(int * param_1, int param_2, int param_3)
 * body: 00410060-004100e3;004100eb-00410100
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_060(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int local_c;
  int *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_c = 0;
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != param_2) {
    puStack_28 = (undefined1 *)0x41008f;
    FUN_0040f97c(param_1);
    pcStack_2c = thunk_FUN_00403434;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_c);
    uVar1 = (**(code **)(*local_8 + 0x18))(local_8,param_2);
    (**(code **)(*local_8 + 0x44))(local_8,param_2);
    FUN_0040ff30(local_8,param_3,local_c,uVar1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x4100eb;
    pcStack_2c = (code *)0x4100e3;
    FUN_0040fa38(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00410108;
  pcStack_20 = (code *)0x410100;
  FUN_004039b8(&local_c);
  return;
}


