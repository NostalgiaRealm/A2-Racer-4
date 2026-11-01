
/* ==== FUN_00480b74 @ 00480b74 ==== 
 * signature: undefined FUN_00480b74(void)
 * body: 00480b74-00480c0d
 */

void FUN_00480b74(byte *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  *param_1 = *param_1 ^ (byte)param_1;
  *param_1 = *param_1 + (byte)param_1;
  puStack_18 = &stack0xfffffffc;
  puStack_10 = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x480b97;
  uVar1 = FUN_0045f46c();
  puStack_24 = (undefined1 *)0x480ba7;
  FUN_0045fb90(uVar1,(undefined4 *)"GetWavTimeFactor",2);
  puStack_24 = (undefined1 *)0x480bc1;
  FUN_00403f28((int *)&puStack_10,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"menu.ini");
  puStack_24 = (undefined1 *)0x480bd0;
  piStack_c = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',puStack_10);
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  uStack_8 = (**(code **)(*piStack_c + 8))(piStack_c,"PARAMETERS","WavTimeFactor");
  *in_FS_OFFSET = 0x2e;
  pcStack_28 = FUN_00480c15;
  uStack_2c = 0x480c0d;
  FUN_00402f9c(piStack_c);
  return;
}


