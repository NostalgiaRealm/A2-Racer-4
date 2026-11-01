
/* ==== TPen.vmt_008 @ 004185d8 ==== 
 * signature: undefined TPen.vmt_008(void)
 * body: 004185d8-00418659;0041867e-0041868d
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
  
  puStack_14 = (undefined1 *)0x4185f3;
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00416bfc);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x418603;
    FUN_00417d98((int)param_1);
    pcStack_18 = thunk_FUN_004036bc;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    pcStack_20 = (code *)0x41861b;
    puStack_14 = &stack0xfffffffc;
    FUN_00417d98((int)param_2);
    pcStack_24 = thunk_FUN_004036bc;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    pcStack_20 = (code *)&stack0xfffffffc;
    FUN_00417878(DAT_004ac6a0,param_1,(undefined4 *)param_2[4]);
    TPen_set_Mode(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),(char)param_2[6]),extraout_ECX);
    *in_FS_OFFSET = uStack_28;
    pcStack_20 = FUN_00418661;
    pcStack_24 = (code *)0x418659;
    FUN_00417da8((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x418689;
  TPersistent_vmt_008(param_1,param_2);
  return;
}


