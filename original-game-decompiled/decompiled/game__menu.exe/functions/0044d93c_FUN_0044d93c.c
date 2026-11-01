
/* ==== FUN_0044d93c @ 0044d93c ==== 
 * signature: undefined __register FUN_0044d93c(int param_1)
 * body: 0044d93c-0044d9ef;0044da11-0044da36
 */

void FUN_0044d93c(int param_1)

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
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x44d966;
  local_8 = param_1;
  piVar1 = FUN_0044d8b8(param_1);
  if ((*(char *)(local_8 + 0x78) != '\0') && (*(int *)(local_8 + 0x3c) == 0)) {
    puStack_30 = (undefined1 *)0x44d982;
    FUN_0044de34(local_8);
  }
  puStack_30 = (undefined1 *)0x44d98c;
  FUN_0044bc1c((int)piVar1,(int *)&local_14);
  puStack_30 = (undefined1 *)0x44d997;
  FUN_0042bb90(local_14,(int *)&local_10);
  puStack_30 = (undefined1 *)0x44d9a4;
  FUN_0044dae8(DAT_004ac7d4,local_10);
  local_9 = '\x01';
  pcStack_34 = thunk_FUN_00403534;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0xda) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0xd8))(*(undefined4 *)(local_8 + 0xdc),local_8,&local_9);
  }
  if (local_9 != '\0') {
    FUN_0044d854();
  }
  *in_FS_OFFSET = uStack_38;
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x44da1c;
    WaitMessage();
  }
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0044da3e;
  pcStack_28 = (code *)0x44da36;
  FUN_00403c80((int *)&local_14,2);
  return;
}


