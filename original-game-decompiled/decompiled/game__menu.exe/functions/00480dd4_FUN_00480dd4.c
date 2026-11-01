
/* ==== FUN_00480dd4 @ 00480dd4 ==== 
 * signature: undefined __register FUN_00480dd4(void)
 * body: 00480dd4-00480e6e
 */

void FUN_00480dd4(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  undefined1 local_5;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x480df3;
  uVar1 = FUN_0045f46c();
  puStack_24 = (undefined1 *)0x480e03;
  FUN_0045fb90(uVar1,(undefined4 *)"ReadTextureMemory",2);
  puStack_24 = (undefined1 *)0x480e1d;
  FUN_00403f28((int *)&local_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"game.ini");
  puStack_24 = (undefined1 *)0x480e2c;
  local_c = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',local_10);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar2 = (**(code **)(*local_c + 8))(local_c,"GFX OPTIONS","CUSTOM_TEXTURE_MEMORY");
  uVar3 = FUN_00480ae4(iVar2);
  local_5 = (undefined1)uVar3;
  *in_FS_OFFSET = 0;
  pcStack_28 = FUN_00480e76;
  uStack_2c = 0x480e6e;
  FUN_00402f9c(local_c);
  return;
}


