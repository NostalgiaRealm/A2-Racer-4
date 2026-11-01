
/* ==== TStrings.vmt_060 @ 00411bf0 ==== 
 * signature: undefined __register TStrings.vmt_060(int * param_1, int param_2, int param_3)
 * body: 00411bf0-00411c73;00411c7b-00411c90
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
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (param_3 != param_2) {
    puStack_28 = (undefined1 *)0x411c1f;
    FUN_00411434(param_1);
    pcStack_2c = thunk_FUN_004036bc;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc))(local_8,param_2,&local_c);
    uVar1 = (**(code **)(*local_8 + 0x18))(local_8,param_2);
    (**(code **)(*local_8 + 0x44))(local_8,param_2);
    FUN_00411ac0(local_8,param_3,local_c,uVar1);
    *in_FS_OFFSET = uStack_30;
    puStack_28 = (undefined1 *)0x411c7b;
    pcStack_2c = (code *)0x411c73;
    FUN_004114f0(local_8);
    return;
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00411c98;
  pcStack_20 = (code *)0x411c90;
  FUN_00403c5c(&local_c);
  return;
}


