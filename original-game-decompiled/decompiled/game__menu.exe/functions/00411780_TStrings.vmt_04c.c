
/* ==== TStrings.vmt_04c @ 00411780 ==== 
 * signature: undefined __register TStrings.vmt_04c(int * param_1)
 * body: 00411780-004117c4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_04c(int *param_1)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  pcVar1 = FUN_004040a0(local_8);
  FUN_00408d40(pcVar1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004117cc;
  pcStack_14 = (code *)0x4117c4;
  FUN_00403c5c((int *)&local_8);
  return;
}


