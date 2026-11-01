
/* ==== FUN_004427b0 @ 004427b0 ==== 
 * signature: undefined __register FUN_004427b0(int param_1)
 * body: 004427b0-00442863;00442885-004428aa
 */

void FUN_004427b0(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined4 *local_14;
  uint *local_10;
  char local_9;
  int local_8;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_10 = (uint *)0x0;
  local_14 = (undefined4 *)0x0;
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x4427da;
  local_8 = param_1;
  piVar1 = FUN_0044272c(param_1);
  if ((*(char *)(local_8 + 0x78) != '\0') && (*(int *)(local_8 + 0x3c) == 0)) {
    puStack_30 = (undefined1 *)0x4427f6;
    FUN_00442ca8(local_8);
  }
  puStack_30 = (undefined1 *)0x442800;
  FUN_00440c7c((int)piVar1,(int *)&local_14);
  puStack_30 = (undefined1 *)0x44280b;
  FUN_00421c50(local_14,(int *)&local_10);
  puStack_30 = (undefined1 *)0x442818;
  FUN_0044295c(DAT_004477c4,local_10);
  local_9 = '\x01';
  pcStack_34 = thunk_FUN_004032ac;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0xda) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0xd8))(*(undefined4 *)(local_8 + 0xdc),local_8,&local_9);
  }
  if (local_9 != '\0') {
    FUN_004426c8();
  }
  *in_FS_OFFSET = uStack_38;
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x442890;
    WaitMessage();
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_004428b2;
  pcStack_28 = (code *)0x4428aa;
  FUN_004039dc((int *)&local_14,2);
  return;
}


