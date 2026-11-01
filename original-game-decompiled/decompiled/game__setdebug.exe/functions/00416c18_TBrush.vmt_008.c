
/* ==== TBrush.vmt_008 @ 00416c18 ==== 
 * signature: undefined TBrush.vmt_008(void)
 * body: 00416c18-00416c8a;00416caf-00416cbe
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBrush_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x416c33;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_00415148);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x416c3f;
    FUN_00416110((int)param_1);
    pcStack_18 = thunk_FUN_00403434;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    pcStack_20 = (code *)0x416c57;
    puStack_14 = &stack0xfffffffc;
    FUN_00416110((int)param_2);
    pcStack_24 = thunk_FUN_00403434;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    pcStack_20 = (code *)&stack0xfffffffc;
    FUN_00415bf0(DAT_0044769c,param_1,(undefined4 *)param_2[4]);
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_00416c92;
    pcStack_24 = (code *)0x416c8a;
    FUN_00416120((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x416cba;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


