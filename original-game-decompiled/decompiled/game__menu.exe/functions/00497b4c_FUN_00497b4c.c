
/* ==== FUN_00497b4c @ 00497b4c ==== 
 * signature: undefined FUN_00497b4c(void)
 * body: 00497b4c-00497c1c
 */

void FUN_00497b4c(void)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  int *piStack_c;
  int *piStack_8;
  
  puStack_28 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  piStack_c = (int *)0x0;
  puStack_10 = (undefined4 *)0x0;
  uStack_14 = 0;
  iStack_18 = 0;
  puStack_2c = &UNK_00497c3f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x497b81;
  FUN_00403f28((int *)&puStack_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"menu.ini");
  puStack_34 = (undefined1 *)0x497b90;
  piStack_c = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',puStack_10);
  puStack_38 = &UNK_00497c1d;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  piStack_8 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
  uVar1 = (**(code **)(*piStack_c + 8))(piStack_c,"CONTROLKEYS","count");
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar2 = 0;
    do {
      uVar4 = 0;
      puVar3 = &uStack_14;
      FUN_004085ac(iVar2,&iStack_18);
      (**(code **)*piStack_c)(piStack_c,"CONTROLKEYS",iStack_18,puVar3,uVar4);
      (**(code **)(*piStack_8 + 0x34))(piStack_8,uStack_14);
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *in_FS_OFFSET = 0;
  puStack_38 = &UNK_00497c24;
  uStack_3c = 0x497c1c;
  FUN_0040c968(&piStack_c);
  return;
}


