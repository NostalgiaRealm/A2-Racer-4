
/* ==== TStrings.vmt_008 @ 0040f90c ==== 
 * signature: undefined TStrings.vmt_008(void)
 * body: 0040f90c-0040f964;0040f96c-0040f979
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
  
  puStack_10 = (undefined1 *)0x40f923;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_0040db8c);
  if ((char)uVar1 != '\0') {
    puStack_10 = (undefined1 *)0x40f92f;
    FUN_0040f97c(param_1);
    pcStack_14 = thunk_FUN_00403434;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x40))();
    (**(code **)(*param_1 + 0x3c))(param_1,param_2);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x40f976;
    pcStack_14 = (code *)0x40f964;
    FUN_0040fa38(param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x40f976;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


