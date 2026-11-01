
/* ==== TBrush.vmt_008 @ 004188a0 ==== 
 * signature: undefined TBrush.vmt_008(void)
 * body: 004188a0-00418912;00418937-00418946
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
  
  puStack_14 = (undefined1 *)0x4188bb;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00416cfc);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x4188c7;
    FUN_00417d98((int)param_1);
    pcStack_18 = thunk_FUN_004036bc;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    pcStack_20 = (code *)0x4188df;
    puStack_14 = &stack0xfffffffc;
    FUN_00417d98((int)param_2);
    pcStack_24 = thunk_FUN_004036bc;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    pcStack_20 = (code *)&stack0xfffffffc;
    FUN_00417878(DAT_004ac6a4,param_1,(undefined4 *)param_2[4]);
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_0041891a;
    pcStack_24 = (code *)0x418912;
    FUN_00417da8((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x418942;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


