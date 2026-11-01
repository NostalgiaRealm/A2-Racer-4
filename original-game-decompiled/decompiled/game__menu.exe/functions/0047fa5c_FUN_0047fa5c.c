
/* ==== FUN_0047fa5c @ 0047fa5c ==== 
 * signature: undefined __register FUN_0047fa5c(int * param_1)
 * body: 0047fa5c-0047fb5b
 */

void FUN_0047fa5c(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_114 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_8 = (undefined *)0x0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar1 = local_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if (param_1[0x30] == 0) {
    FUN_00403c40(" Player = nil: SavePlayer");
  }
  FUN_00481178(*(undefined4 *)(param_1[0x31] + 0x14),(int *)&local_114);
  FUN_00403f28((int *)&local_8,(undefined4 *)param_1[0x2e],local_114);
  FUN_00481104(local_8);
  FUN_0048b0c8((int *)param_1[0x30],local_8);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "SavePlayer";
  FUN_00403c5c((int *)&local_114);
  FUN_00403c80(&local_10,3);
  return;
}


