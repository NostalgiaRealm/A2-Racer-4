
/* ==== TIniFile.vmt_040 @ 00458708 ==== 
 * signature: undefined TIniFile.vmt_040(void)
 * body: 00458708-004587dc
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
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x45873f;
  piStack_10 = param_3;
  uStack_c = param_2;
  piStack_8 = param_1;
  piStack_14 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',param_3);
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  pcStack_48 = (code *)0x45875e;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*piStack_8 + 0x38))(piStack_8,uStack_c,piStack_14);
  pcStack_48 = (code *)0x458766;
  FUN_00411434(piStack_10);
  pcStack_4c = thunk_FUN_004036bc;
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
      FUN_00411f84(piStack_10,puStack_20,0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_50;
  pcStack_48 = FUN_004587e4;
  pcStack_4c = (code *)0x4587dc;
  FUN_004114f0(piStack_10);
  return;
}


