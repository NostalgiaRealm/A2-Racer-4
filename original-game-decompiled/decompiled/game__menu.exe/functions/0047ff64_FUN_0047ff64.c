
/* ==== FUN_0047ff64 @ 0047ff64 ==== 
 * signature: undefined __register FUN_0047ff64(int * param_1)
 * body: 0047ff64-0047fffd
 */

void FUN_0047ff64(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,3);
  *(undefined1 *)(param_1 + 0x36) = 1;
  FUN_0044d3f0();
  *in_FS_OFFSET = "DoExit";
  FUN_00403c80(&local_c,2);
  return;
}


