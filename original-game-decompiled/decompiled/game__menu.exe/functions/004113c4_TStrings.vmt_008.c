
/* ==== TStrings.vmt_008 @ 004113c4 ==== 
 * signature: undefined TStrings.vmt_008(void)
 * body: 004113c4-0041141c;00411424-00411431
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4113db;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0040edc8);
  if ((char)uVar1 != '\0') {
    puStack_10 = (undefined1 *)0x4113e7;
    FUN_00411434(param_1);
    pcStack_14 = thunk_FUN_004036bc;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x40))();
    (**(code **)(*param_1 + 0x3c))(param_1,param_2);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41142e;
    pcStack_14 = (code *)0x41141c;
    FUN_004114f0(param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x41142e;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


