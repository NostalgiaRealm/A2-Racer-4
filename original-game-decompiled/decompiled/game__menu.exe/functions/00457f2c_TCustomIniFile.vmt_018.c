
/* ==== TCustomIniFile.vmt_018 @ 00457f2c ==== 
 * signature: undefined __register TCustomIniFile.vmt_018(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 00457f2c-00457f95;00457fbb-00457fd0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomIniFile_vmt_018
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *in_FS_OFFSET;
  float10 in_ST0;
  int iStack_44;
  code *pcStack_40;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  int local_18;
  undefined8 local_14;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  pcStack_2c = thunk_FUN_004036bc;
  pcStack_30 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&pcStack_30;
  uStack_34 = 0;
  piStack_38 = &local_18;
  puStack_3c = (undefined1 *)0x457f60;
  local_8 = param_3;
  (**(code **)*param_1)(param_1,param_2,param_3);
  local_14 = (double)CONCAT44(param_5,param_4);
  if (local_18 != 0) {
    pcStack_40 = thunk_FUN_00403534;
    iStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_44;
    puStack_3c = &stack0xfffffffc;
    FUN_0040ac88(local_18);
    local_14 = (double)in_ST0;
    *in_FS_OFFSET = iStack_44;
  }
  *in_FS_OFFSET = (int)piStack_38;
  pcStack_30 = FUN_00457fd8;
  uStack_34 = 0x457fd0;
  FUN_00403c5c(&local_18);
  return;
}


