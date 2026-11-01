
/* ==== FUN_0048c07c @ 0048c07c ==== 
 * signature: undefined __register FUN_0048c07c(int * param_1)
 * body: 0048c07c-0048c15e
 */

void FUN_0048c07c(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  code *pcStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  undefined4 *local_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_114 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  iStack_12c = 0x48c0b2;
  FUN_00402ee4(*param_1,local_110);
  iStack_12c = 0x48c0c0;
  FUN_00403e80(&local_10,local_110);
  iStack_12c = local_10;
  puStack_130 = &DAT_0048c1ac;
  pcStack_134 = "ReadInstalledResolution";
  puStack_138 = (undefined4 *)0x48c0da;
  FUN_00403f9c((int *)&local_c,3);
  puStack_138 = local_c;
  pcStack_13c = (code *)0x48c0e3;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_138;
  puStack_138 = (undefined4 *)0x48c0ef;
  FUN_0045fb90(uVar2,puVar1,0);
  puStack_138 = (undefined4 *)0x48c10c;
  FUN_00403f28((int *)&local_114,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"raser.ini");
  puStack_138 = (undefined4 *)0x48c11e;
  local_8 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',local_114);
  pcStack_13c = thunk_FUN_004036bc;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = (undefined4 *)&stack0xfffffffc;
  uVar3 = (**(code **)(*local_8 + 8))(local_8,"PROGRAM","RESOLUTION");
  *(undefined4 *)(param_1[6] + 0x2c) = uVar3;
  *in_FS_OFFSET = 3;
  pcStack_13c = FUN_0048c166;
  uStack_140 = 0x48c15e;
  FUN_00402f9c(local_8);
  return;
}


