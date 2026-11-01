
/* ==== TPen.vmt_008 @ 00416950 ==== 
 * signature: undefined TPen.vmt_008(void)
 * body: 00416950-004169d1;004169f6-00416a05
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPen_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x41696b;
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_00415048);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x41697b;
    FUN_00416110((int)param_1);
    pcStack_18 = thunk_FUN_00403434;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    pcStack_20 = (code *)0x416993;
    puStack_14 = &stack0xfffffffc;
    FUN_00416110((int)param_2);
    pcStack_24 = thunk_FUN_00403434;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    pcStack_20 = (code *)&stack0xfffffffc;
    FUN_00415bf0(DAT_00447698,param_1,(undefined4 *)param_2[4]);
    TPen_set_Mode(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[6]),extraout_ECX);
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_004169d9;
    pcStack_24 = (code *)0x4169d1;
    FUN_00416120((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x416a01;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


