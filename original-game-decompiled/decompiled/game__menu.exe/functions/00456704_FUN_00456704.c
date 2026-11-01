
/* ==== FUN_00456704 @ 00456704 ==== 
 * signature: undefined __register FUN_00456704(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00456704-0045674c;00456764-0045677d
 */

void FUN_00456704(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x42c) != '\0') {
    puStack_18 = (undefined1 *)0x456725;
    piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_vmt_000_00454a44,'\x01',param_3);
    pcStack_1c = thunk_FUN_00403408;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00455970(piVar1,*(int *)(param_1 + 0x24),0);
    *in_FS_OFFSET = uStack_20;
    *(undefined1 *)(piVar1 + 0x10b) = 1;
    puStack_18 = (undefined1 *)0x456778;
    FUN_00457048(param_1,(int)piVar1);
  }
  return;
}


