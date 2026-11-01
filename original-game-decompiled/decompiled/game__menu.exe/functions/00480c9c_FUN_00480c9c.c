
/* ==== FUN_00480c9c @ 00480c9c ==== 
 * signature: undefined FUN_00480c9c(void)
 * body: 00480c9c-00480d31
 */

void FUN_00480c9c(void)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_10 = (undefined4 *)0x0;
  puStack_1c = &UNK_00480d4f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x480cbb;
  uVar1 = FUN_0045f46c();
  puStack_24 = (undefined1 *)0x480ccb;
  FUN_0045fb90(uVar1,(undefined4 *)"ReadAvailableTextureMemory",2);
  puStack_24 = (undefined1 *)0x480ce5;
  FUN_00403f28((int *)&puStack_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"game.ini");
  puStack_24 = (undefined1 *)0x480cf4;
  piStack_c = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',puStack_10);
  puStack_28 = &UNK_00480d32;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uStack_8 = (**(code **)(*piStack_c + 8))(piStack_c,"GFX OPTIONS","AVAILABLE_TEXTURE_MEMORY");
  *in_FS_OFFSET = 0;
  puStack_28 = &UNK_00480d39;
  uStack_2c = 0x480d31;
  FUN_00402f9c(piStack_c);
  return;
}


