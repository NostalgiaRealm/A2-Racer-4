
/* ==== TDIB.vmt_030 @ 00456dc4 ==== 
 * signature: undefined TDIB.vmt_030(void)
 * body: 00456dc4-00456e08;00456e20-00456e38
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_030(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x456ddb;
  piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_vmt_000_00454a44,'\x01',param_3);
  pcStack_1c = thunk_FUN_00403408;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00455b38(piVar1,param_2,*(char *)(param_1[9] + 0x42c));
  *in_FS_OFFSET = uStack_20;
  puStack_18 = (undefined1 *)0x456e2a;
  FUN_00457048((int)param_1,(int)piVar1);
  puStack_18 = (undefined1 *)0x456e33;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


