
/* ==== FUN_00456780 @ 00456780 ==== 
 * signature: undefined __register FUN_00456780(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00456780-004567ce;004567e6-004567f5
 */

void FUN_00456780(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x41c) != '\0') {
    puStack_18 = (undefined1 *)0x4567a1;
    piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_vmt_000_00454a44,'\x01',param_3);
    pcStack_1c = thunk_FUN_00403408;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00455970(piVar1,*(int *)(param_1 + 0x24),
                 CONCAT31((int3)((uint)extraout_ECX >> 8),
                          *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x42c)));
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x4567f0;
    FUN_00457048(param_1,(int)piVar1);
  }
  return;
}


