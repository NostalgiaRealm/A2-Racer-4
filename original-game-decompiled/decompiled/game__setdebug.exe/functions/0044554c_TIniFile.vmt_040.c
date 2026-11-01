
/* ==== TIniFile.vmt_040 @ 0044554c ==== 
 * signature: undefined TIniFile.vmt_040(void)
 * body: 0044554c-00445620
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIniFile_vmt_040(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
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
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  puStack_30 = &stack0xfffffffc;
  uStack_18 = 0;
  puStack_20 = (undefined *)0x0;
  uStack_1c = 0;
  pcStack_34 = thunk_FUN_00403434;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x445583;
  piStack_10 = param_3;
  uStack_c = param_2;
  piStack_8 = param_1;
  piStack_14 = (int *)FUN_00402ce4((int *)&PTR_TPersistent_vmt_000_0040dcac,'\x01',param_3);
  pcStack_40 = thunk_FUN_00403434;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  pcStack_48 = (code *)0x4455a2;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x38))(piStack_8,uStack_c,piStack_14);
  pcStack_48 = (code *)0x4455aa;
  FUN_0040f97c(piStack_10);
  pcStack_4c = thunk_FUN_00403434;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  pcStack_48 = (code *)&stack0xfffffffc;
  iVar1 = (**(code **)(*piStack_14 + 0x14))();
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      (**(code **)(*piStack_14 + 0xc))(piStack_14,iVar2,&uStack_1c,&uStack_18);
      (**(code **)*piStack_8)(piStack_8,uStack_c,uStack_1c);
      (**(code **)(*piStack_14 + 0xc))(piStack_14,iVar2,&puStack_20,uStack_18);
      FUN_004103f4(piStack_10,puStack_20,0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_50;
  pcStack_48 = FUN_00445628;
  pcStack_4c = (code *)0x445620;
  FUN_0040fa38(piStack_10);
  return;
}


