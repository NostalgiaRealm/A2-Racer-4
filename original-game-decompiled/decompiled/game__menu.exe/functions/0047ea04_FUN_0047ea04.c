
/* ==== FUN_0047ea04 @ 0047ea04 ==== 
 * signature: undefined __register FUN_0047ea04(int param_1)
 * body: 0047ea04-0047ea9f;0047eb54-0047eb5d;0047eb88-0047eba2
 */

void FUN_0047ea04(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_4c;
  code *pcStackY_48;
  ushort uVar1;
  undefined4 uStack_40;
  code *pcStack_3c;
  undefined1 *puStack_38;
  undefined4 local_34;
  code *pcStack_30;
  code *pcStack_2c;
  int local_1c [3];
  undefined *local_10;
  int *local_c;
  int local_8;
  
  pcStack_2c = (code *)&stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = (undefined *)0x0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  pcStack_30 = thunk_FUN_004036bc;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  pcStack_3c = thunk_FUN_00403408;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    uVar1 = 0xffff;
    pcStackY_48 = (code *)0x47ea56;
    puStack_38 = &stack0xfffffffc;
    FUN_00403f28((int *)&local_10,*(undefined4 **)(param_1 + 0x38),(undefined4 *)&DAT_0047ebbc);
    pcStackY_48 = (code *)0x47ea65;
    local_c = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',local_10,uVar1);
    pcStackY_48 = thunk_FUN_004036bc;
    uStackY_4c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_4c;
    FUN_004126f0(local_c,*(undefined4 *)(local_8 + 0x30),*(int *)(local_8 + 0x2c));
    *in_FS_OFFSET = uStackY_4c;
    pcStackY_48 = (code *)0x47ea9f;
    FUN_00402f9c(local_c);
    return;
  }
  *in_FS_OFFSET = uStack_40;
  *in_FS_OFFSET = local_34;
  pcStack_2c = FUN_0047ebaa;
  pcStack_30 = (code *)0x47eba2;
  FUN_00403c80(local_1c,4);
  return;
}


