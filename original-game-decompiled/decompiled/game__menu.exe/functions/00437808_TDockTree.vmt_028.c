
/* ==== TDockTree.vmt_028 @ 00437808 ==== 
 * signature: undefined TDockTree.vmt_028(void)
 * body: 00437808-00437923
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDockTree_vmt_028(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  code *pcStack_4c;
  code *pcStack_48;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  puStack_30 = (undefined1 *)0x437821;
  piStack_8 = FUN_00418b34((int *)&PTR_TPersistent_vmt_000_00429cb8,'\x01',param_3);
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x43783d;
  puStack_30 = &stack0xfffffffc;
  FUN_0042d4c8(piStack_8,param_1[5]);
  puStack_3c = (undefined1 *)0x437845;
  FUN_0041912c((int)piStack_8);
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  pcStack_48 = (code *)0x43785d;
  puStack_3c = &stack0xfffffffc;
  FUN_00419558(piStack_8,param_2);
  pcStack_4c = thunk_FUN_004036bc;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  pcStack_48 = (code *)&stack0xfffffffc;
  iVar1 = FUN_004317bc(param_1[5]);
  if (-1 < iVar1 + -1) {
    iStack_c = 0;
    iStack_10 = iVar1;
    do {
      iVar1 = FUN_00431780(param_1[5],iStack_c);
      if ((*(char *)(iVar1 + 0x47) != '\0') && (*(int *)(iVar1 + 0x90) == param_1[5])) {
        FUN_0042e13c(iVar1,&iStack_20);
        (**(code **)*param_1)(param_1,iVar1,&iStack_20);
        iStack_20 = *(int *)(iVar1 + 0x30) * 2 - iStack_20;
        iStack_1c = *(int *)(iVar1 + 0x34) * 2 - iStack_1c;
        iStack_18 = *(int *)(iVar1 + 0x38) * -2 + iStack_18 * 3 + iStack_20 * -2;
        iStack_14 = *(int *)(iVar1 + 0x3c) * -2 + iStack_14 * 3 + iStack_1c * -2;
        (**(code **)(*param_1 + 0x10))(param_1,piStack_8,iVar1,&iStack_20);
      }
      iStack_c = iStack_c + 1;
      iStack_10 = iStack_10 + -1;
    } while (iStack_10 != 0);
  }
  *in_FS_OFFSET = uStack_50;
  pcStack_48 = FUN_0043792b;
  pcStack_4c = (code *)0x437923;
  FUN_00419558(piStack_8,0);
  return;
}


